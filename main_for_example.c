#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bigint_string.h"

int get_input_string(char ** s, int * s_len);

int main(void) //test it
{
	int return_value = 0;
	char * str1 = NULL;
	int str1_len = 0;
	printf("Enter 1st number: ");
	if (return_value = get_input_string(&str1, &str1_len) || str1_len == 0)
	{
		printf("Error in get input data\n");
		return return_value;
	}

	char * str2 = NULL;
	int str2_len = 0;
	printf("Enter 2nd number: ");
	if (return_value = get_input_string(&str2, &str2_len) || str2_len == 0)
	{
		printf("Error in get input data\n");
		return return_value;
	}

	int buffer_size = (str1_len + str2_len + 8) * 3; //suggested size, no less than it.
	printf("str1_len = %d, str2_len = %d, ", str1_len, str2_len);
	printf("buffer_size = %d\n", buffer_size);

	char * buffer = (char *)malloc(buffer_size);
	if (buffer == NULL)
	{
		printf("failed in buffer malloc\n");
		return 3;
	}
	
	printf("str1 = %s\n", str1);
	printf("str2 = %s\n", str2);
	
	printf("ready to calc\n");
	
	int index; // no need initial value. calculated result start at this position.

	return_value = bigInt_add(str1, str2, &index, buffer, &buffer_size);
	printf("return from bigInt_add() is %d\n", return_value);
	if (return_value == 0)
	{
		printf("buffer + index = %s\n", buffer + index);
		bigInt_decimalRound(buffer + index, 2);
		printf("buffer + index = %s (round it to 2 decimal digits)\n", buffer + index);
	}
	else
		printf("returned error, don't read\n");

	return_value = bigInt_sub(str1, str2, &index, buffer, &buffer_size);
	printf("return from bigInt_sub() is %d\n", return_value);
	if (return_value == 0)
	{
		printf("buffer + index = %s\n", buffer + index);
		bigInt_decimalRound(buffer + index, 2);
		printf("buffer + index = %s (round it to 2 decimal digits)\n", buffer + index);
	}
	else
		printf("returned error, don't read\n");

	return_value = bigInt_mul(str1, str2, &index, buffer, &buffer_size);
	printf("return from bigInt_mul() is %d\n", return_value);
	if (return_value == 0)
	{
		printf("buffer + index = %s\n", buffer + index);
		bigInt_decimalRound(buffer + index, 2);
		printf("buffer + index = %s (round it to 2 decimal digits)\n", buffer + index);
	}
	else
		printf("returned error, don't read\n");

	//notice: divisor should not be zero, or return error 70
	return_value = bigInt_divDecimal(str1, str2, &index, buffer, &buffer_size);
	printf("return from bigInt_divDecimal() is %d\n", return_value);
	if (return_value == 0)
	{
		printf("buffer + index = %s\n", buffer + index);
		printf("notice: bigger buffer size can have more decimal digits quantity\n");
		bigInt_decimalRound(buffer + index, 2);
		printf("buffer + index = %s (round it to 2 decimal digits)\n", buffer + index);
	}
	else
		printf("returned error, don't read\n");

	int round_digits = 2;
	return_value = bigInt_divRound(str1, str2, &index, buffer, &buffer_size, round_digits);
	printf("return from bigInt_divRound() is %d\n", return_value);
	if (return_value == 0)
		printf("buffer + index = %s (already rounded to %d decimal digits)\n", buffer + index, round_digits);
	else
		printf("returned error, don't read\n");

	int n_digits = 0;
	return_value = bigInt_decimalRound(str1, n_digits);
	printf("return from bigInt_decimalRound() is %d\n", return_value);
	if (return_value == 0)
		printf("str1 rounded to integer, str1 = %s\n", str1);
	else
		printf("returned error, str1 = %s\n", str1);

	return_value = bigInt_decimalRound(str2, n_digits);
	printf("return from bigInt_decimalRound() is %d\n", return_value);
	if (return_value == 0)
		printf("str1 rounded to integer, str2 = %s\n", str2);
	else
		printf("returned error, str2 = %s\n", str2);

	int remainder; //no need initial value. remainder start at this position.
	return_value = bigInt_divInteger(str1, str2, &index, &remainder, buffer, &buffer_size);
	printf("return from bigInt_divInteger() is %d\n", return_value);
	if (return_value == 0)
	{
		printf("quotient: buffer + index = %s\n", buffer + index);
		printf("remainder: buffer + remainder = %s\n", buffer + remainder);
	}
	else
		printf("returned error, don't read\n");


	free(str1);
	free(str2);
	free(buffer);
	return 0;
}

int get_input_string(char ** s, int * s_len)
{
	int ArrSize = 8192;
	char * input_string = (char *)malloc(ArrSize);
	if (input_string == NULL)
		return 1;
	fgets(input_string, ArrSize, stdin);
	int i;
	for (i = 0; i < ArrSize; ++i)
	{
		if (input_string[i] == '\n')
		{
			input_string[i] = '\0';
			break;
		}
	}
	if (i >= ArrSize)
		return 2; // '\n' not found error.

	*s_len = i;
	*s = input_string;

	return 0;
}
