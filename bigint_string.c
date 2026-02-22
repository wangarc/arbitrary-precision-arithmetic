#include "bigint_string.h"

int bigInt_chAdd(char * ch, const char * c2, char * carry)
{	//return 0 = no error, return 1, 2, 3 = error!
	switch (*carry)
	{
		case '0': switch (*c2)
				  {
					  case '0': return bigInt_chAdd0(ch, carry);
					  case '1': return bigInt_chAdd1(ch, carry);
					  case '2': return bigInt_chAdd2(ch, carry);
					  case '3': return bigInt_chAdd3(ch, carry);
					  case '4': return bigInt_chAdd4(ch, carry);
					  case '5': return bigInt_chAdd5(ch, carry);
					  case '6': return bigInt_chAdd6(ch, carry);
					  case '7': return bigInt_chAdd7(ch, carry);
					  case '8': return bigInt_chAdd8(ch, carry);
					  case '9': return bigInt_chAdd9(ch, carry);
					  default: return 2; //Error: c2 out of range
				  }
		case '1': switch (*c2)
				  {
					  case '0': return bigInt_chAdd1(ch, carry);
					  case '1': return bigInt_chAdd2(ch, carry);
					  case '2': return bigInt_chAdd3(ch, carry);
					  case '3': return bigInt_chAdd4(ch, carry);
					  case '4': return bigInt_chAdd5(ch, carry);
					  case '5': return bigInt_chAdd6(ch, carry);
					  case '6': return bigInt_chAdd7(ch, carry);
					  case '7': return bigInt_chAdd8(ch, carry);
					  case '8': return bigInt_chAdd9(ch, carry);
					  case '9': return bigInt_chAdd10(ch, carry);
					  default: return 2; //Error: c2 out of range
				  }
		default: return 3; //Error: *carry out of range
	}
}

int bigInt_chAdd0(char * ch, char * carry)
{	//return 0 = no error, return 1 = error!
	switch (*ch)
	{
		case '0': *carry = '0'; *ch = '0'; return 0;
		case '1': *carry = '0'; *ch = '1'; return 0;
		case '2': *carry = '0'; *ch = '2'; return 0;
		case '3': *carry = '0'; *ch = '3'; return 0;
		case '4': *carry = '0'; *ch = '4'; return 0;
		case '5': *carry = '0'; *ch = '5'; return 0;
		case '6': *carry = '0'; *ch = '6'; return 0;
		case '7': *carry = '0'; *ch = '7'; return 0;
		case '8': *carry = '0'; *ch = '8'; return 0;
		case '9': *carry = '0'; *ch = '9'; return 0;
		default: return 1; //Error: *ch out of range
	}
}

int bigInt_chAdd1(char * ch, char * carry)
{	//return 0 = no error, return 1 = error!
	switch (*ch)
	{
		case '0': *carry = '0'; *ch = '1'; return 0;
		case '1': *carry = '0'; *ch = '2'; return 0;
		case '2': *carry = '0'; *ch = '3'; return 0;
		case '3': *carry = '0'; *ch = '4'; return 0;
		case '4': *carry = '0'; *ch = '5'; return 0;
		case '5': *carry = '0'; *ch = '6'; return 0;
		case '6': *carry = '0'; *ch = '7'; return 0;
		case '7': *carry = '0'; *ch = '8'; return 0;
		case '8': *carry = '0'; *ch = '9'; return 0;
		case '9': *carry = '1'; *ch = '0'; return 0;
		default: return 1; //Error: *ch out of range
	}
}

int bigInt_chAdd2(char * ch, char * carry)
{	//return 0 = no error, return 1 = error!
	switch (*ch)
	{
		case '0': *carry = '0'; *ch = '2'; return 0;
		case '1': *carry = '0'; *ch = '3'; return 0;
		case '2': *carry = '0'; *ch = '4'; return 0;
		case '3': *carry = '0'; *ch = '5'; return 0;
		case '4': *carry = '0'; *ch = '6'; return 0;
		case '5': *carry = '0'; *ch = '7'; return 0;
		case '6': *carry = '0'; *ch = '8'; return 0;
		case '7': *carry = '0'; *ch = '9'; return 0;
		case '8': *carry = '1'; *ch = '0'; return 0;
		case '9': *carry = '1'; *ch = '1'; return 0;
		default: return 1; //Error: *ch out of range
	}
}

int bigInt_chAdd3(char * ch, char * carry)
{	//return 0 = no error, return 1 = error!
	switch (*ch)
	{
		case '0': *carry = '0'; *ch = '3'; return 0;
		case '1': *carry = '0'; *ch = '4'; return 0;
		case '2': *carry = '0'; *ch = '5'; return 0;
		case '3': *carry = '0'; *ch = '6'; return 0;
		case '4': *carry = '0'; *ch = '7'; return 0;
		case '5': *carry = '0'; *ch = '8'; return 0;
		case '6': *carry = '0'; *ch = '9'; return 0;
		case '7': *carry = '1'; *ch = '0'; return 0;
		case '8': *carry = '1'; *ch = '1'; return 0;
		case '9': *carry = '1'; *ch = '2'; return 0;
		default: return 1; //Error: *ch out of range
	}
}

int bigInt_chAdd4(char * ch, char * carry)
{	//return 0 = no error, return 1 = error!
	switch (*ch)
	{
		case '0': *carry = '0'; *ch = '4'; return 0;
		case '1': *carry = '0'; *ch = '5'; return 0;
		case '2': *carry = '0'; *ch = '6'; return 0;
		case '3': *carry = '0'; *ch = '7'; return 0;
		case '4': *carry = '0'; *ch = '8'; return 0;
		case '5': *carry = '0'; *ch = '9'; return 0;
		case '6': *carry = '1'; *ch = '0'; return 0;
		case '7': *carry = '1'; *ch = '1'; return 0;
		case '8': *carry = '1'; *ch = '2'; return 0;
		case '9': *carry = '1'; *ch = '3'; return 0;
		default: return 1; //Error: *ch out of range
	}
}

int bigInt_chAdd5(char * ch, char * carry)
{	//return 0 = no error, return 1 = error!
	switch (*ch)
	{
		case '0': *carry = '0'; *ch = '5'; return 0;
		case '1': *carry = '0'; *ch = '6'; return 0;
		case '2': *carry = '0'; *ch = '7'; return 0;
		case '3': *carry = '0'; *ch = '8'; return 0;
		case '4': *carry = '0'; *ch = '9'; return 0;
		case '5': *carry = '1'; *ch = '0'; return 0;
		case '6': *carry = '1'; *ch = '1'; return 0;
		case '7': *carry = '1'; *ch = '2'; return 0;
		case '8': *carry = '1'; *ch = '3'; return 0;
		case '9': *carry = '1'; *ch = '4'; return 0;
		default: return 1; //Error: *ch out of range
	}
}

int bigInt_chAdd6(char * ch, char * carry)
{	//return 0 = no error, return 1 = error!
	switch (*ch)
	{
		case '0': *carry = '0'; *ch = '6'; return 0;
		case '1': *carry = '0'; *ch = '7'; return 0;
		case '2': *carry = '0'; *ch = '8'; return 0;
		case '3': *carry = '0'; *ch = '9'; return 0;
		case '4': *carry = '1'; *ch = '0'; return 0;
		case '5': *carry = '1'; *ch = '1'; return 0;
		case '6': *carry = '1'; *ch = '2'; return 0;
		case '7': *carry = '1'; *ch = '3'; return 0;
		case '8': *carry = '1'; *ch = '4'; return 0;
		case '9': *carry = '1'; *ch = '5'; return 0;
		default: return 1; //Error: *ch out of range
	}
}

int bigInt_chAdd7(char * ch, char * carry)
{	//return 0 = no error, return 1 = error!
	switch (*ch)
	{
		case '0': *carry = '0'; *ch = '7'; return 0;
		case '1': *carry = '0'; *ch = '8'; return 0;
		case '2': *carry = '0'; *ch = '9'; return 0;
		case '3': *carry = '1'; *ch = '0'; return 0;
		case '4': *carry = '1'; *ch = '1'; return 0;
		case '5': *carry = '1'; *ch = '2'; return 0;
		case '6': *carry = '1'; *ch = '3'; return 0;
		case '7': *carry = '1'; *ch = '4'; return 0;
		case '8': *carry = '1'; *ch = '5'; return 0;
		case '9': *carry = '1'; *ch = '6'; return 0;
		default: return 1; //Error: *ch out of range
	}
}

int bigInt_chAdd8(char * ch, char * carry)
{	//return 0 = no error, return 1 = error!
	switch (*ch)
	{
		case '0': *carry = '0'; *ch = '8'; return 0;
		case '1': *carry = '0'; *ch = '9'; return 0;
		case '2': *carry = '1'; *ch = '0'; return 0;
		case '3': *carry = '1'; *ch = '1'; return 0;
		case '4': *carry = '1'; *ch = '2'; return 0;
		case '5': *carry = '1'; *ch = '3'; return 0;
		case '6': *carry = '1'; *ch = '4'; return 0;
		case '7': *carry = '1'; *ch = '5'; return 0;
		case '8': *carry = '1'; *ch = '6'; return 0;
		case '9': *carry = '1'; *ch = '7'; return 0;
		default: return 1; //Error: *ch out of range
	}
}

int bigInt_chAdd9(char * ch, char * carry)
{	//return 0 = no error, return 1 = error!
	switch (*ch)
	{
		case '0': *carry = '0'; *ch = '9'; return 0;
		case '1': *carry = '1'; *ch = '0'; return 0;
		case '2': *carry = '1'; *ch = '1'; return 0;
		case '3': *carry = '1'; *ch = '2'; return 0;
		case '4': *carry = '1'; *ch = '3'; return 0;
		case '5': *carry = '1'; *ch = '4'; return 0;
		case '6': *carry = '1'; *ch = '5'; return 0;
		case '7': *carry = '1'; *ch = '6'; return 0;
		case '8': *carry = '1'; *ch = '7'; return 0;
		case '9': *carry = '1'; *ch = '8'; return 0;
		default: return 1; //Error: *ch out of range
	}
}

int bigInt_chAdd10(char * ch, char * carry)
{	//return 0 = no error, return 1 = error!
	switch (*ch)
	{
		case '0': *carry = '1'; *ch = '0'; return 0;
		case '1': *carry = '1'; *ch = '1'; return 0;
		case '2': *carry = '1'; *ch = '2'; return 0;
		case '3': *carry = '1'; *ch = '3'; return 0;
		case '4': *carry = '1'; *ch = '4'; return 0;
		case '5': *carry = '1'; *ch = '5'; return 0;
		case '6': *carry = '1'; *ch = '6'; return 0;
		case '7': *carry = '1'; *ch = '7'; return 0;
		case '8': *carry = '1'; *ch = '8'; return 0;
		case '9': *carry = '1'; *ch = '9'; return 0;
		default: return 1; //Error: *ch out of range
	}
}

int bigInt_chSub(char * ch, const char * c2, char * borrow)
{	//return 0 = no error, return 4, 5, 6 = error!
	switch (*borrow)
	{
		case '0': switch (*c2)
				  {
					  case '0': return bigInt_chSub0(ch, borrow);
					  case '1': return bigInt_chSub1(ch, borrow);
					  case '2': return bigInt_chSub2(ch, borrow);
					  case '3': return bigInt_chSub3(ch, borrow);
					  case '4': return bigInt_chSub4(ch, borrow);
					  case '5': return bigInt_chSub5(ch, borrow);
					  case '6': return bigInt_chSub6(ch, borrow);
					  case '7': return bigInt_chSub7(ch, borrow);
					  case '8': return bigInt_chSub8(ch, borrow);
					  case '9': return bigInt_chSub9(ch, borrow);
					  default: return 5; //Error: c2 out of range
				  }
		case '1': switch (*c2)
				  {
					  case '0': return bigInt_chSub1(ch, borrow);
					  case '1': return bigInt_chSub2(ch, borrow);
					  case '2': return bigInt_chSub3(ch, borrow);
					  case '3': return bigInt_chSub4(ch, borrow);
					  case '4': return bigInt_chSub5(ch, borrow);
					  case '5': return bigInt_chSub6(ch, borrow);
					  case '6': return bigInt_chSub7(ch, borrow);
					  case '7': return bigInt_chSub8(ch, borrow);
					  case '8': return bigInt_chSub9(ch, borrow);
					  case '9': return bigInt_chSub10(ch, borrow);
					  default: return 5; //Error: c2 out of range
				  }
		default: return 6; //Error: *borrow out of range
	}
}

int bigInt_chSub0(char * ch, char * borrow)
{	//return 0 = no error, return 4 = error!
	switch (*ch)
	{
		case '0': *borrow = '0'; *ch = '0'; return 0;
		case '1': *borrow = '0'; *ch = '1'; return 0;
		case '2': *borrow = '0'; *ch = '2'; return 0;
		case '3': *borrow = '0'; *ch = '3'; return 0;
		case '4': *borrow = '0'; *ch = '4'; return 0;
		case '5': *borrow = '0'; *ch = '5'; return 0;
		case '6': *borrow = '0'; *ch = '6'; return 0;
		case '7': *borrow = '0'; *ch = '7'; return 0;
		case '8': *borrow = '0'; *ch = '8'; return 0;
		case '9': *borrow = '0'; *ch = '9'; return 0;
		default: return 4; //Error: *ch out of range
	}
}

int bigInt_chSub1(char * ch, char * borrow)
{	//return 0 = no error, return 4 = error!
	switch (*ch)
	{
		case '0': *borrow = '1'; *ch = '9'; return 0;
		case '1': *borrow = '0'; *ch = '0'; return 0;
		case '2': *borrow = '0'; *ch = '1'; return 0;
		case '3': *borrow = '0'; *ch = '2'; return 0;
		case '4': *borrow = '0'; *ch = '3'; return 0;
		case '5': *borrow = '0'; *ch = '4'; return 0;
		case '6': *borrow = '0'; *ch = '5'; return 0;
		case '7': *borrow = '0'; *ch = '6'; return 0;
		case '8': *borrow = '0'; *ch = '7'; return 0;
		case '9': *borrow = '0'; *ch = '8'; return 0;
		default: return 4; //Error: *ch out of range
	}
}

int bigInt_chSub2(char * ch, char * borrow)
{	//return 0 = no error, return 4 = error!
	switch (*ch)
	{
		case '0': *borrow = '1'; *ch = '8'; return 0;
		case '1': *borrow = '1'; *ch = '9'; return 0;
		case '2': *borrow = '0'; *ch = '0'; return 0;
		case '3': *borrow = '0'; *ch = '1'; return 0;
		case '4': *borrow = '0'; *ch = '2'; return 0;
		case '5': *borrow = '0'; *ch = '3'; return 0;
		case '6': *borrow = '0'; *ch = '4'; return 0;
		case '7': *borrow = '0'; *ch = '5'; return 0;
		case '8': *borrow = '0'; *ch = '6'; return 0;
		case '9': *borrow = '0'; *ch = '7'; return 0;
		default: return 4; //Error: *ch out of range
	}
}

int bigInt_chSub3(char * ch, char * borrow)
{	//return 0 = no error, return 4 = error!
	switch (*ch)
	{
		case '0': *borrow = '1'; *ch = '7'; return 0;
		case '1': *borrow = '1'; *ch = '8'; return 0;
		case '2': *borrow = '1'; *ch = '9'; return 0;
		case '3': *borrow = '0'; *ch = '0'; return 0;
		case '4': *borrow = '0'; *ch = '1'; return 0;
		case '5': *borrow = '0'; *ch = '2'; return 0;
		case '6': *borrow = '0'; *ch = '3'; return 0;
		case '7': *borrow = '0'; *ch = '4'; return 0;
		case '8': *borrow = '0'; *ch = '5'; return 0;
		case '9': *borrow = '0'; *ch = '6'; return 0;
		default: return 4; //Error: *ch out of range
	}
}

int bigInt_chSub4(char * ch, char * borrow)
{	//return 0 = no error, return 4 = error!
	switch (*ch)
	{
		case '0': *borrow = '1'; *ch = '6'; return 0;
		case '1': *borrow = '1'; *ch = '7'; return 0;
		case '2': *borrow = '1'; *ch = '8'; return 0;
		case '3': *borrow = '1'; *ch = '9'; return 0;
		case '4': *borrow = '0'; *ch = '0'; return 0;
		case '5': *borrow = '0'; *ch = '1'; return 0;
		case '6': *borrow = '0'; *ch = '2'; return 0;
		case '7': *borrow = '0'; *ch = '3'; return 0;
		case '8': *borrow = '0'; *ch = '4'; return 0;
		case '9': *borrow = '0'; *ch = '5'; return 0;
		default: return 4; //Error: *ch out of range
	}
}

int bigInt_chSub5(char * ch, char * borrow)
{	//return 0 = no error, return 4 = error!
	switch (*ch)
	{
		case '0': *borrow = '1'; *ch = '5'; return 0;
		case '1': *borrow = '1'; *ch = '6'; return 0;
		case '2': *borrow = '1'; *ch = '7'; return 0;
		case '3': *borrow = '1'; *ch = '8'; return 0;
		case '4': *borrow = '1'; *ch = '9'; return 0;
		case '5': *borrow = '0'; *ch = '0'; return 0;
		case '6': *borrow = '0'; *ch = '1'; return 0;
		case '7': *borrow = '0'; *ch = '2'; return 0;
		case '8': *borrow = '0'; *ch = '3'; return 0;
		case '9': *borrow = '0'; *ch = '4'; return 0;
		default: return 4; //Error: *ch out of range
	}
}

int bigInt_chSub6(char * ch, char * borrow)
{	//return 0 = no error, return 4 = error!
	switch (*ch)
	{
		case '0': *borrow = '1'; *ch = '4'; return 0;
		case '1': *borrow = '1'; *ch = '5'; return 0;
		case '2': *borrow = '1'; *ch = '6'; return 0;
		case '3': *borrow = '1'; *ch = '7'; return 0;
		case '4': *borrow = '1'; *ch = '8'; return 0;
		case '5': *borrow = '1'; *ch = '9'; return 0;
		case '6': *borrow = '0'; *ch = '0'; return 0;
		case '7': *borrow = '0'; *ch = '1'; return 0;
		case '8': *borrow = '0'; *ch = '2'; return 0;
		case '9': *borrow = '0'; *ch = '3'; return 0;
		default: return 4; //Error: *ch out of range
	}
}

int bigInt_chSub7(char * ch, char * borrow)
{	//return 0 = no error, return 4 = error!
	switch (*ch)
	{
		case '0': *borrow = '1'; *ch = '3'; return 0;
		case '1': *borrow = '1'; *ch = '4'; return 0;
		case '2': *borrow = '1'; *ch = '5'; return 0;
		case '3': *borrow = '1'; *ch = '6'; return 0;
		case '4': *borrow = '1'; *ch = '7'; return 0;
		case '5': *borrow = '1'; *ch = '8'; return 0;
		case '6': *borrow = '1'; *ch = '9'; return 0;
		case '7': *borrow = '0'; *ch = '0'; return 0;
		case '8': *borrow = '0'; *ch = '1'; return 0;
		case '9': *borrow = '0'; *ch = '2'; return 0;
		default: return 4; //Error: *ch out of range
	}
}

int bigInt_chSub8(char * ch, char * borrow)
{	//return 0 = no error, return 4 = error!
	switch (*ch)
	{
		case '0': *borrow = '1'; *ch = '2'; return 0;
		case '1': *borrow = '1'; *ch = '3'; return 0;
		case '2': *borrow = '1'; *ch = '4'; return 0;
		case '3': *borrow = '1'; *ch = '5'; return 0;
		case '4': *borrow = '1'; *ch = '6'; return 0;
		case '5': *borrow = '1'; *ch = '7'; return 0;
		case '6': *borrow = '1'; *ch = '8'; return 0;
		case '7': *borrow = '1'; *ch = '9'; return 0;
		case '8': *borrow = '0'; *ch = '0'; return 0;
		case '9': *borrow = '0'; *ch = '1'; return 0;
		default: return 4; //Error: *ch out of range
	}
}

int bigInt_chSub9(char * ch, char * borrow)
{	//return 0 = no error, return 4 = error!
	switch (*ch)
	{
		case '0': *borrow = '1'; *ch = '1'; return 0;
		case '1': *borrow = '1'; *ch = '2'; return 0;
		case '2': *borrow = '1'; *ch = '3'; return 0;
		case '3': *borrow = '1'; *ch = '4'; return 0;
		case '4': *borrow = '1'; *ch = '5'; return 0;
		case '5': *borrow = '1'; *ch = '6'; return 0;
		case '6': *borrow = '1'; *ch = '7'; return 0;
		case '7': *borrow = '1'; *ch = '8'; return 0;
		case '8': *borrow = '1'; *ch = '9'; return 0;
		case '9': *borrow = '0'; *ch = '0'; return 0;
		default: return 4; //Error: *ch out of range
	}
}

int bigInt_chSub10(char * ch, char * borrow)
{	//return 0 = no error, return 4 = error!
	switch (*ch)
	{
		case '0': *borrow = '1'; *ch = '0'; return 0;
		case '1': *borrow = '1'; *ch = '1'; return 0;
		case '2': *borrow = '1'; *ch = '2'; return 0;
		case '3': *borrow = '1'; *ch = '3'; return 0;
		case '4': *borrow = '1'; *ch = '4'; return 0;
		case '5': *borrow = '1'; *ch = '5'; return 0;
		case '6': *borrow = '1'; *ch = '6'; return 0;
		case '7': *borrow = '1'; *ch = '7'; return 0;
		case '8': *borrow = '1'; *ch = '8'; return 0;
		case '9': *borrow = '1'; *ch = '9'; return 0;
		default: return 4; //Error: *ch out of range
	}
}

int bigInt_parse(const char * str, int * p_or_n, int * i_qty, int * d_qty, int * dot_pos)
{	//return 0 = no error, str is a bigint string, return 99, 7, 8, 9 = error!
	if (0 == str)
		return 99; //Error: nullptr is not allowed.
	int index = 0;		 //index of str.
	switch (str[index])
	{
	case '-': *p_or_n = -1; index++; break;	//negative number and bypass the '-'
	case '+': index++;						//bypass the '+'
	default: *p_or_n = 1;				//positive number
	}
	*i_qty = 0;	//integer part char qty
	*d_qty = 0; //decimal part char qty
	*dot_pos = -1;	//initialized as a not possible value.
	int dot_found = 0; //'.' found in the str
	while (str[index] != '\0')
	{
		switch (str[index])
		{
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':	dot_found ? ++(*d_qty) : ++(*i_qty);
				break;
			case '.':	if (++dot_found > 1)
							return 7;	//Error: too many '.'
						*dot_pos = index;
						break;
			default: return 8;	//Error: unexpected char found
		}
		index++;
	}
	if (*i_qty == 0 && *d_qty == 0)
		return 9;		//Error: no valid number found
	if (*dot_pos == -1)	//there is no '.' in the str, str is an integer
		*dot_pos = index;	//dot_pos set at '\0'(str end) for "no dot" integer
	////ignore excessive '0' in the end of decimal part
	//if (*i_qty > 0)
	//	while (*d_qty > 0 && str[*dot_pos + *d_qty] == '0')
	//		--(*d_qty);
	//else
	//	while (*d_qty > 1 && str[*dot_pos + *d_qty] == '0')
	//		--(*d_qty);	//leave 1 char at least
	////ignore excessive '0' in the begining of integeral part
	//if (*d_qty > 0)
	//	while (*i_qty > 0 && str[*dot_pos - *i_qty] == '0')
	//		--(*i_qty);
	//else
	//	while (*i_qty > 1 && str[*dot_pos - *i_qty] == '0')
	//		--(*i_qty);	//leave 1 char at least
	return 0;
}

int bigInt_chInc(char * ch)
{	//return 0 = no error, return 10 = error! return 11 = Carry discarded!
	switch (*ch)
	{
		case '0': *ch = '1'; return 0;
		case '1': *ch = '2'; return 0;
		case '2': *ch = '3'; return 0;
		case '3': *ch = '4'; return 0;
		case '4': *ch = '5'; return 0;
		case '5': *ch = '6'; return 0;
		case '6': *ch = '7'; return 0;
		case '7': *ch = '8'; return 0;
		case '8': *ch = '9'; return 0;
		case '9': *ch = '0'; return 11; //Error: Carry discarded
		default: return 10; //Error: *ch out of range
	}
}

int bigInt_chDec(char * ch)
{	//return 0 = no error, return 12 = error! return 13 = borrow discarded!
	switch (*ch)
	{
		case '0': *ch = '9'; return 13; //Error: borrow discarded
		case '1': *ch = '0'; return 0;
		case '2': *ch = '1'; return 0;
		case '3': *ch = '2'; return 0;
		case '4': *ch = '3'; return 0;
		case '5': *ch = '4'; return 0;
		case '6': *ch = '5'; return 0;
		case '7': *ch = '6'; return 0;
		case '8': *ch = '7'; return 0;
		case '9': *ch = '8'; return 0;
		default: return 12; //Error: *ch out of range
	}
}

int bigInt_strTailAlignedAdd(char * s1, const int * h1, const int * t1,
							 const char * s2, const int * h2, const int * t2,
							 char * carry)
{	//return 0 = no error, return 19 = error!
	int tempRetVal;
	if (tempRetVal = bigInt_headTailValidate(*h1, *t1))
		return tempRetVal; //Error: wrong parameter.
	if (tempRetVal = bigInt_headTailValidate(*h2, *t2))
		return tempRetVal; //Error: wrong parameter.
	if (*t1 - *h1 < *t2 - *h2)
		return 19; //Error: not allowed: *t1 - *h1 < *t2 - *h2
	const int s2CharQty = *t2 - *h2 + 1;
	for (int i = 0; i < s2CharQty; ++i)
		if (tempRetVal = bigInt_chAdd(&s1[*t1 - i], &s2[*t2 - i], carry))
			return tempRetVal; //Error: bigInt_chAdd() returned error!
	const char c2 = '0';
	for (int temp_t1 = *t1 - s2CharQty; *carry == '1' && temp_t1 >= *h1; --temp_t1)
		if (tempRetVal = bigInt_chAdd(&s1[temp_t1], &c2, carry))
			return tempRetVal; //Error: bigInt_chAdd() returned error!
	return 0;
}

int bigInt_strTailAlignedSub(char * s1, const int * h1, const int * t1,
							 const char * s2, const int * h2, const int * t2,
							 char * borrow)
{	//return 0 = no error, return 20 = error!
	int tempRetVal;
	if (tempRetVal = bigInt_headTailValidate(*h1, *t1))
		return tempRetVal; //Error: wrong parameter.
	if (tempRetVal = bigInt_headTailValidate(*h2, *t2))
		return tempRetVal; //Error: wrong parameter.
	if (*t1 - *h1 < *t2 - *h2)
		return 20; //Error: not allowed: *t1 - *h1 < *t2 - *h2
	const int s2CharQty = *t2 - *h2 + 1;
	for (int i = 0; i < s2CharQty; ++i)
		if (tempRetVal = bigInt_chSub(&s1[*t1 - i], &s2[*t2 - i], borrow))
			return tempRetVal; //Error: bigInt_chSub() returned error!
	const char c2 = '0';
	for (int temp_t1 = *t1 - s2CharQty; *borrow == '1' && temp_t1 >= *h1; --temp_t1)
		if (tempRetVal = bigInt_chSub(&s1[temp_t1], &c2, borrow))
			return tempRetVal; //Error: bigInt_chSub() returned error!
	return 0;
}

int bigInt_strTailAlignedSubTry(const char * s1, const int * h1, const int * t1,
								const char * s2, const int * h2, const int * t2,
								char * borrow)
{	//return 0 = no error, return 21 = error!
	int tempRetVal;
	if (tempRetVal = bigInt_headTailValidate(*h1, *t1))
		return tempRetVal; //Error: wrong parameter.
	if (tempRetVal = bigInt_headTailValidate(*h2, *t2))
		return tempRetVal; //Error: wrong parameter.
	if (*t1 - *h1 < *t2 - *h2)
		return 21; //Error: not allowed: *t1 - *h1 < *t2 - *h2
	const int s2CharQty = *t2 - *h2 + 1;
	char tempChar;
	for (int i = 0; i < s2CharQty; ++i)
	{
		tempChar = s1[*t1 - i];
		if (tempRetVal = bigInt_chSub(&tempChar, &s2[*t2 - i], borrow))
			return tempRetVal; //Error: bigInt_chSub() returned error!
	}
	const char c2 = '0';
	for (int temp_t1 = *t1 - s2CharQty; *borrow == '1' && temp_t1 >= *h1; --temp_t1)
	{
		tempChar = s1[temp_t1];
		if (tempRetVal = bigInt_chSub(&tempChar, &c2, borrow))
			return tempRetVal; //Error: bigInt_chSub() returned error!
	}
	return 0;
}

int bigInt_chSet(char * s1, const int * h1, const int * t1, char ch)
{	//return 0 = no error.
	int tempRetVal;
	if (tempRetVal = bigInt_headTailValidate(*h1, *t1))
		return tempRetVal; //Error: wrong parameter.
	if (tempRetVal = bigInt_chValidate(ch))
		return tempRetVal; //Error: wrong ch.
	for (int i = *h1; i <= *t1; ++i)
		s1[i] = ch;
	return 0;
}

int bigInt_chSetAtPosition(char * s1, int * h1, int * t1, const int * s1Size, 
						   const int * position, char ch)
{	//return 0 = no error, return 22 = error!
	int tempRetVal;
	if (tempRetVal = bigInt_headTailValidate(*h1, *t1))
		return tempRetVal; //Error: wrong parameter.
	if (tempRetVal = bigInt_chValidate(ch))
		return tempRetVal; //Error: wrong ch.
	if (*position < 0 || *position < *h1 - 1 || *position > *t1 + 1 || *position >= *s1Size)
		return 22; //Error: not a reasonable position.
	if (*position == *h1 - 1)
		--(*h1);
	if (*position == *t1 + 1)
		++(*t1);
	s1[*position] = ch;
	return 0;
}

int bigInt_chSetBeforeHead(char * s1, int * h1, int * t1, const int * s1Size, char ch)
{	//return 0 = no error
	int tempRetVal;
	int position = *h1 - 1;
	if (tempRetVal = bigInt_chSetAtPosition(s1, h1, t1, s1Size, &position, ch))
		return tempRetVal;
	return 0;
}

int bigInt_chSetAfterTail(char * s1, int * h1, int * t1, const int * s1Size, char ch)
{	//return 0 = no error
	int tempRetVal;
	int position = *t1 + 1;
	if (tempRetVal = bigInt_chSetAtPosition(s1, h1, t1, s1Size, &position, ch))
		return tempRetVal;
	return 0;
}

int bigInt_chSequentialSetting(char * s1, int * h1, int * t1, const int * s1Size, 
							   int * setPosition, char ch)
{	//return 0 = no error.
	int tempRetVal;
	if (tempRetVal = bigInt_chSetAtPosition(s1, h1, t1, s1Size, setPosition, ch))
		return tempRetVal;
	++(*setPosition);
	return 0;
}

int bigInt_chValidate(char ch)
{	//return 0 = no error, return 23 = error!
	switch (ch)
	{
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
		case '.':
		case '-':
		case '+':
		case '\0': return 0;
		default: return 23; //Error: wrong ch.
	}
}

int bigInt_headTailValidate(int head, int tail)
{	//return 0 = no error, return 24 = error!
	if (head < 0 || tail < 0 || tail - head < 0)
		return 24; //Error: wrong parameter.
	return 0;
}

int bigInt_strCopy(char * s1, const int * h1, const int * t1,
				   const char * s2, const int * h2, const int * t2)
{	//return 0 = no error, return 25 = error!
	int tempRetVal;
	if (tempRetVal = bigInt_headTailValidate(*h1, *t1))
		return tempRetVal; //Error: wrong parameter.
	if (tempRetVal = bigInt_headTailValidate(*h2, *t2))
		return tempRetVal; //Error: wrong parameter.
	if (*t1 - *h1 != *t2 - *h2)
		return 25; //Error: not allowed: *t1 - *h1 != *t2 - *h2
	if (s1 + *h1 < s2 + *h2) //move start from head to tail
		for (int i = *h1, j = *h2; i <= *t1 && j <= *t2; ++i, ++j)
			s1[i] = s2[j];
	else if (s1 + *h1 > s2 + *h2) //move start from tail to head
		for (int i = *t1, j = *t2; i >= *h1 && j >= *h2; --i, --j)
			s1[i] = s2[j];
	else
		; // desti == source ? do nothing!
	return 0;
}

int bigInt_findNewHead(const char * s1, int * h1, const int * t1)
{	//return 0 = no error
	int tempRetVal;
	if (tempRetVal = bigInt_headTailValidate(*h1, *t1))
		return tempRetVal; //Error: wrong parameter.
	while (s1[*h1] == '0' && *h1 < *t1)
		++(*h1);
	return 0;
}

int bigInt_findNewTail(const char * s1, const int * h1, int * t1)
{	//return 0 = no error
	int tempRetVal;
	if (tempRetVal = bigInt_headTailValidate(*h1, *t1))
		return tempRetVal; //Error: wrong parameter.
	while (s1[*t1] == '0' && *t1 > *h1)
		--(*t1);
	return 0;
}

int bigInt_findDotPosition(const char * s1, const int * h1, const int * t1, 
						   int * dotPosition)
{	//return 0 = no error, return 26 = error!
	int tempRetVal;
	if (tempRetVal = bigInt_headTailValidate(*h1, *t1))
		return tempRetVal; //Error: wrong parameter.
	*dotPosition = -1;
	int dotCount = 0;
	for (int i = *h1; i <= *t1; ++i)
	{
		if (s1[i] == '.')
		{
			*dotPosition = i;
			++dotCount;
		}
	}
	if (dotCount > 1)
		return 26; //Error: too many dot
	return 0;
}

int bigInt_isZero(const char * s1, const int * h1, const int * t1, 
				  char * isZero)
{	//return 0 = no error
	int tempRetVal;
	if (tempRetVal = bigInt_headTailValidate(*h1, *t1))
		return tempRetVal; //Error: wrong parameter.
	*isZero = 'T';
	for (int i = *h1; i <= *t1; ++i)
	{
		switch (s1[i])
		{
			case '0':
			case '.':
			case '+':
			case '-':
			case '\0': continue;
			default: *isZero = 'F'; break;
		}
	}
	return 0;
}

int bigInt_copyToBufferPosition(const char * str, int i_qty, int d_qty, int dot_pos, 
		int aligned_i_size, int aligned_d_size, int safeSpaceBeforeHead, int safeSpaceAfterTail,
		char * buffer, int bufferSize, int * head, int * tail, const char * position)
{	//return 0 = no error, return 34, 35, 36 = error!
	if (i_qty < 0 || d_qty < 0 || dot_pos < 0 || aligned_i_size < 0 || aligned_d_size < 0)
		return 34; //Error: wrong parameter
	if (bufferSize < safeSpaceBeforeHead + aligned_i_size + aligned_d_size + safeSpaceAfterTail)
		return 35; //Error: bufferSize is not enough
	int tempRetVal;
	int nextIndexToFill;
	if (position[0] == 's') //fill at a position close to the start of the buffer.
		nextIndexToFill = safeSpaceBeforeHead;
	else if (position[0] == 'e') //fill at a position close to the end of the buffer.
		nextIndexToFill = bufferSize - safeSpaceAfterTail - aligned_d_size - aligned_i_size;
	else
		return 36;
	//insert '0' before integer parts.
	*head = nextIndexToFill;
	if (aligned_i_size > i_qty)
	{
		int frontZeroQty = aligned_i_size - i_qty;
		int fillZeroStart = nextIndexToFill;
		int fillZeroEnd = fillZeroStart + frontZeroQty - 1;
		if (tempRetVal = bigInt_chSet(buffer, &fillZeroStart, &fillZeroEnd, '0'))
			return tempRetVal;
		nextIndexToFill = fillZeroEnd + 1;
	}
	//copy integer parts
	if (i_qty > 0)
	{
		int fillIntegerStart = nextIndexToFill;
		int fillIntegerEnd = fillIntegerStart + i_qty - 1;
		int integer_head = dot_pos - i_qty;
		int integer_tail = dot_pos - 1;
		if (tempRetVal = bigInt_strCopy(buffer, &fillIntegerStart, &fillIntegerEnd,
										str, &integer_head, &integer_tail))
			return tempRetVal;
		nextIndexToFill = fillIntegerEnd + 1;
	}
	//copy decimal parts
	if (d_qty > 0)
	{
		int fillDecimalStart = nextIndexToFill;
		int fillDecimalEnd = fillDecimalStart + d_qty - 1;
		int decimal_head = dot_pos + 1;
		int decimal_tail = dot_pos + d_qty;
		if (tempRetVal = bigInt_strCopy(buffer, &fillDecimalStart, &fillDecimalEnd,
										str, &decimal_head, &decimal_tail))
			return tempRetVal;
		nextIndexToFill = fillDecimalEnd + 1;
	}
	//insert '0' after decimal parts.
	if (aligned_d_size > d_qty)
	{
		int rearZeroQty = aligned_d_size - d_qty;
		int fillZeroStart = nextIndexToFill;
		int fillZeroEnd = fillZeroStart + rearZeroQty - 1;
		if (tempRetVal = bigInt_chSet(buffer, &fillZeroStart, &fillZeroEnd, '0'))
			return tempRetVal;
		nextIndexToFill = fillZeroEnd + 1;
	}
	*tail = nextIndexToFill - 1;
	if (tempRetVal = bigInt_headTailValidate(*head, *tail)) //double check only
		return tempRetVal; //Error: something wrong. 
	return 0;
}

int bigInt_chInsertFromHead(char * s1, int * h1, const int * t1, const int * s1Size,
							const int * insertBeforeThisPos, char insertCh)
{	//return 0 = no error, return 37, 38, 39 = error!
	int tempRetVal;
	if (tempRetVal = bigInt_headTailValidate(*h1, *t1))
		return tempRetVal; //Error: wrong parameter.
	if (*insertBeforeThisPos < *h1 || *insertBeforeThisPos > *t1 + 1)
		return 37; //Error: wrong insert position
	if (*t1 >= *s1Size)
		return 38; //Error: out of space
	if ((*h1 - 1) < 0)
		return 39; //Error: out of space
	//move chars to left if necessary.
	if (*insertBeforeThisPos != *h1)
	{
		int sourceHead = *h1;
		int sourceTail = *insertBeforeThisPos - 1;
		int destiHead = *h1 - 1;
		int destiTail = *insertBeforeThisPos - 2;
		if (tempRetVal = bigInt_strCopy(s1, &destiHead, &destiTail,
			s1, &sourceHead, &sourceTail))
			return tempRetVal;
	}
	int pos = *insertBeforeThisPos - 1;
	char ch = insertCh;
	if (tempRetVal = bigInt_chSet(s1, &pos, &pos, ch))
		return tempRetVal;
	--(*h1);
	return 0;
}

int bigInt_chInsertFromTail(char * s1, const int * h1, int * t1, const int * s1Size, 
							const int * insertBeforeThisPos, char insertCh)
{	//return 0 = no error, return 40, 41 = error!
	int tempRetVal;
	if (tempRetVal = bigInt_headTailValidate(*h1, *t1))
		return tempRetVal; //Error: wrong parameter.
	if (tempRetVal = bigInt_chValidate(insertCh))
		return tempRetVal; //Error: wrong ch
	if (*insertBeforeThisPos < *h1 || *insertBeforeThisPos > *t1 + 1)
		return 40; //Error: wrong insert position
	if ((*t1 + 1) >= *s1Size)
		return 41; //Error: out of space
	//move chars to right if necessary.
	if (*insertBeforeThisPos != *t1 + 1)
	{
		int sourceHead = *insertBeforeThisPos;
		int sourceTail = *t1;
		int destiHead = *insertBeforeThisPos + 1;
		int destiTail = *t1 + 1;
		if (tempRetVal = bigInt_strCopy(s1, &destiHead, &destiTail,
			s1, &sourceHead, &sourceTail))
			return tempRetVal;
	}
	int pos = *insertBeforeThisPos;
	char ch = insertCh;
	if (tempRetVal = bigInt_chSet(s1, &pos, &pos, ch))
		return tempRetVal;
	++(*t1);
	return 0;
}

int bigInt_add(const char * s1, const char * s2, int * resultInBuffer,
			   char * buffer, const int * bufferSize)
{	//return 0 = no error.
	int tempRetVal;
	if (tempRetVal = bigInt_addOrSub(s1, s2, resultInBuffer,
					buffer, bufferSize, "Add"))
		return tempRetVal;
	return 0;
}

int bigInt_sub(const char * s1, const char * s2, int * resultInBuffer,
			   char * buffer, const int * bufferSize)
{	//return 0 = no error.
	int tempRetVal;
	if (tempRetVal = bigInt_addOrSub(s1, s2, resultInBuffer,
					buffer, bufferSize, "Sub"))
		return tempRetVal;
	return 0;
}

int bigInt_addOrSub(const char * str1, const char * str2, int * resultInBuffer,
					char * buffer, const int * bufferSize,
					const char * toDo)
{	//return 0 = no error, return 45, 46, 47, 48, 49, 50, 51, 52 = error!
	int tempRetVal;
	int pn1, iq1, dq1, dp1;
	if (tempRetVal = bigInt_parse(str1, &pn1, &iq1, &dq1, &dp1))
		return tempRetVal;
	int pn2, iq2, dq2, dp2;
	if (tempRetVal = bigInt_parse(str2, &pn2, &iq2, &dq2, &dp2))
		return tempRetVal;
	//consider toDo
	switch (toDo[0])
	{
		case 'S': pn2 = -pn2;	//change s1 - s2 to s1 + (-s2)
		case 'A': break;		//Add is default operation
		default: return 45; //Error: wrong parameter!
	}
	//align the size of str1 and str2
	int aligned_i_size = (iq1 > iq2) ? iq1 : iq2;
	int aligned_d_size = (dq1 > dq2) ? dq1 : dq2;
	const int safeSpaceBeforeHead = 4; 
		//extraSpaceInFront is required when you inserting 'carry', '.' or '-'
	const int safeSpaceAfterTail = 4;
		//extraSpaceAtRear is required when you inserting '.' or '\0'
	//copy str1 to a position close to the end of the buffer, 
	//digit chars only, and name as s1.
	char * s1 = buffer;
	int s1Size = *bufferSize;
	int h1, t1;
	const char * s1Position = "end of the buffer";
	if (tempRetVal = bigInt_copyToBufferPosition(str1, iq1, dq1, dp1, 
			aligned_i_size, aligned_d_size, safeSpaceBeforeHead, safeSpaceAfterTail,
			s1, s1Size, &h1, &t1, s1Position))
		return tempRetVal;
	//copy str2 to a position close to the start of the buffer, 
	//digit chars only, and name as s2.
	char * s2 = buffer;
	int s2Size = *bufferSize;
	int h2, t2;
	const char * s2Position = "start of the buffer";
	if (tempRetVal = bigInt_copyToBufferPosition(str2, iq2, dq2, dp2, 
			aligned_i_size, aligned_d_size, safeSpaceBeforeHead, safeSpaceAfterTail,
			s2, s2Size, &h2, &t2, s2Position))
		return tempRetVal;
	//check free space in buffer
	int freeSpaceInBuffer = *bufferSize - (t1 - h1 + 1) - (t2 - h2 + 1)
							- safeSpaceBeforeHead * 2 - safeSpaceAfterTail * 2;
	if (freeSpaceInBuffer < 0)
		return 46; //Error: not enough bufferSize
	//add or sub decided by pn1 and pn2
	//to save bufferSize, s1 or s2 may destroyed during add or sub.
	char * s3 = buffer;
	int s3Size = *bufferSize;
	int h3, t3, pn3;
	if (pn1 * pn2 == 1)
	{	
		if (tempRetVal = bigInt_addWithSameSign(s1, &s1Size, &h1, &t1, &pn1, 
					s2, &s2Size, &h2, &t2, &pn2, s3, &s3Size, &h3, &t3, &pn3))
			return tempRetVal;
	}
	else if (pn1 * pn2 == -1)
	{
		if (tempRetVal = bigInt_addWithOppositeSigns(s1, &s1Size, &h1, &t1, &pn1, 
					s2, &s2Size, &h2, &t2, &pn2, s3, &s3Size, &h3, &t3, &pn3))
			return tempRetVal;
	}
	else
	{
		return 47; // impossible, something wrong.
	}
	//make a readable s3, read friendly for human.
	int dq3 = aligned_d_size;
	if (tempRetVal = bigInt_makeFinishStr(s3, &s3Size, 
										  &h3, &t3, &dq3, &pn3))
		return tempRetVal;

	//calc result index in buffer
	*resultInBuffer = (int)(s3 - buffer + h3);
	return 0;
}

int bigInt_addWithSameSign(
	char * s1, const int * s1Size, int * h1, int * t1, int * pn1, 
	char * s2, const int * s2Size, int * h2, int * t2, int * pn2, 
	char * s3, const int * s3Size, int * h3, int * t3, int * pn3)
{	//return 0 = no error, return 54 = error!
	int tempRetVal;
	char carry = '0';
	if (tempRetVal = bigInt_strTailAlignedAdd(s1, h1, t1,
											  s2, h2, t2, &carry))
		return tempRetVal;
	//write '1' ahead of h1 if carry == '1'
	if (carry == '1')
	{
		if (tempRetVal = bigInt_chSetBeforeHead(s1, h1, t1, s1Size, carry))
			return tempRetVal;
		carry = '0';
	}
	*h3 = (int)(s1 - s3 + *h1);
	*t3 = (int)(s1 - s3 + *t1);
	if (*pn1 == 1 && *pn2 == 1)
		*pn3 = 1;
	else if (*pn1 == -1 && *pn2 == -1)
		*pn3 = -1;
	else
		return 54;	// Error: not alloweded in this function.
	return 0;
}

int bigInt_addWithOppositeSigns(
	char * s1, const int * s1Size, int * h1, int * t1, int * pn1, 
	char * s2, const int * s2Size, int * h2, int * t2, int * pn2, 
	char * s3, const int * s3Size, int * h3, int * t3, int * pn3)
{	//return 0 = no error, return 55, 56, 57, 58 = error!
	int tempRetVal;
	char borrow = '0';
	if (tempRetVal = bigInt_strTailAlignedSubTry(s1, h1, t1,
												 s2, h2, t2, &borrow))
		return tempRetVal;
	if (borrow == '0')
	{	// absolute s1 >= absolute s2, do: |s1| - |s2|
		borrow = '0';
		if (tempRetVal = bigInt_strTailAlignedSub(s1, h1, t1,
												  s2, h2, t2, &borrow))
			return tempRetVal;
		*h3 = (int)(s1 - s3 + *h1);
		*t3 = (int)(s1 - s3 + *t1);
		if (*pn1 == 1 && *pn2 == -1)
			*pn3 = 1;
		else if (*pn1 == -1 && *pn2 == 1)
			*pn3 = -1;
		else
			return 55;	// Error: not alloweded in this function.
	}
	else if (borrow == '1')
	{	// absolute s1 < absolute s2, do: |s2| - |s1|
		borrow = '0';
		if (tempRetVal = bigInt_strTailAlignedSub(s2, h2, t2,
												  s1, h1, t1, &borrow))
			return tempRetVal;
		if (borrow == '1')
			return 56; // impossible, something wrong.
		*h3 = (int)(s2 - s3 + *h2);
		*t3 = (int)(s2 - s3 + *t2);
		if (*pn1 == 1 && *pn2 == -1)
			*pn3 = -1;
		else if (*pn1 == -1 && *pn2 == 1)
			*pn3 = 1;
		else
			return 57;	// Error: not alloweded in this function.
	}
	else
	{
		return 58;	// impossible, something wrong.
	}
	return 0;
}

int bigInt_makeFinishStr(char * s3, const int * s3Size, 
						 int * h3, int * t3, int * dq3, int * pn3)
{	//return 0 = no error.
	int tempRetVal;
	int insertBeforeThisPos;
	char insertCh;
	//find if there is '.' already exist in s3.
	int dotPosition = -1; // -1 means no dot
	if (tempRetVal = bigInt_findDotPosition(s3, h3, t3, &dotPosition))
		return tempRetVal;
	//insert '.' if dot not found, and there's decimal parts
	if (dotPosition == -1 && *dq3 > 0) 
	{
		int insertZeroQtyBeforeHead = *dq3 - (*t3 - *h3);
		if (insertZeroQtyBeforeHead > 0)
		{
			int tail = *h3 - 1;
			int head = tail + 1 - insertZeroQtyBeforeHead;
			char setCh = '0';
			if (tempRetVal = bigInt_chSet(s3, &head, &tail, setCh))
				return tempRetVal;
			*h3 = head;
		}
		insertBeforeThisPos = *t3 + 1 - *dq3;
		insertCh = '.';
		if (insertBeforeThisPos - *h3 > *t3 - insertBeforeThisPos)
		{
			if (tempRetVal = bigInt_chInsertFromTail(s3, h3, t3, s3Size, 
											&insertBeforeThisPos, insertCh))
				return tempRetVal;
			dotPosition = insertBeforeThisPos;
		}
		else
		{
			if (tempRetVal = bigInt_chInsertFromHead(s3, h3, t3, s3Size, 
											&insertBeforeThisPos, insertCh))
				return tempRetVal;
			dotPosition = insertBeforeThisPos - 1;
		}
	}
	// unreasonable case 1: dot at head, may occur by incoming dot exist.
	if (dotPosition == *h3)
	{	//attention: use bigInt_chInsertFromTail() to avoid change of *h3
		insertBeforeThisPos = *h3;
		insertCh = '0';
		if (tempRetVal = bigInt_chInsertFromTail(s3, h3, t3, s3Size,
										&insertBeforeThisPos, insertCh))
			return tempRetVal;
		++dotPosition;
	}
	// unreasonable case 2: dot at tail, may occur by incoming dot exist.
	if (dotPosition == *t3)
	{
		--(*t3);
		dotPosition = -1;
	}
	//find new head and tail.
	if (dotPosition == -1) // -1 means no dot
	{
		if (tempRetVal = bigInt_findNewHead(s3, h3, t3))
			return tempRetVal;
	}
	else
	{
		int tailOfIntegerPart = dotPosition - 1;
		if (tempRetVal = bigInt_findNewHead(s3, h3, &tailOfIntegerPart))
			return tempRetVal;
		int headOfDecimalPart = dotPosition + 1;
		if (tempRetVal = bigInt_findNewTail(s3, &headOfDecimalPart, t3))
			return tempRetVal;
		if (*t3 == headOfDecimalPart && s3[*t3] == '0')
			*t3 = tailOfIntegerPart;
	}
	//write '-' ahead of h3
	//only if '-' not exist and pn3 == -1 and value is not Zero.
	char isZero;
	if (tempRetVal = bigInt_isZero(s3, h3, t3, &isZero))
		return tempRetVal;
	if (s3[*h3] != '-' && * pn3 == -1 && isZero == 'F')
	{
		if (tempRetVal = bigInt_chSetBeforeHead(s3, h3, t3, s3Size, '-'))
			return tempRetVal;
	}
	//append '\0' after t3.
	if (tempRetVal = bigInt_chSetAfterTail(s3, h3, t3, s3Size, '\0'))
		return tempRetVal;

	return 0;
}

int bigInt_strTailAlignedMul(const char * s1, const int * h1, const int * t1,
							 const char * s2, const int * h2, const int * t2,
							 char * s3, int * h3, int * t3, const int * s3Size)
{	//return 0 = no error, return 60, 61 = error!
	int tempRetVal;
	if (tempRetVal = bigInt_headTailValidate(*h1, *t1))
		return tempRetVal; //Error: wrong parameter.
	if (tempRetVal = bigInt_headTailValidate(*h2, *t2))
		return tempRetVal; //Error: wrong parameter.
	*h3 = *t3 - (*t1 - *h1); //*h3 to *t3 has the same size as *h1 to *t1 in the begining.
	if (tempRetVal = bigInt_chSet(s3, h3, t3, '0'))
		return tempRetVal;
	for (int i = *t2; i >= *h2; --i)
	{
		char carry = '0';
		int tailAlign = *t3 - (*t2 - i); //tailAlign is moving according i move.
		//s3: one char longer than s1 with '0' at first, no carry will occur during calculation
		if (tempRetVal = bigInt_chSetBeforeHead(s3, h3, t3, s3Size, '0'))
			return tempRetVal;
		char multiplier = s2[i];
		while (multiplier != '0')
		{
			if (tempRetVal = bigInt_strTailAlignedAdd(s3, h3, &tailAlign, 
													  s1, h1, t1, &carry))
				return tempRetVal;
			if (carry == '1') // s3 is one char longer than s1, carry should be '0' always.
				return 61; //Error: something wrong.
			if (tempRetVal = bigInt_chDec(&multiplier))
				return tempRetVal;
		}
	}
	if (tempRetVal = bigInt_headTailValidate(*h3, *t3))//double check only.
		return tempRetVal; //Error: wrong parameter.
	return 0;
}

int bigInt_strMul(const char * str1, const char * str2, int * resultInBuffer,
				  char * buffer, const int * bufferSize)
{	//return 0 = no error, return 65 = error!
	int tempRetVal;
	int pn1, iq1, dq1, dp1;
	if (tempRetVal = bigInt_parse(str1, &pn1, &iq1, &dq1, &dp1))
		return tempRetVal;
	int pn2, iq2, dq2, dp2;
	if (tempRetVal = bigInt_parse(str2, &pn2, &iq2, &dq2, &dp2))
		return tempRetVal;
	//align the size of str1 and str2
	//int aligned_i_size = (iq1 > iq2) ? iq1 : iq2; //no need for mul operation
	//int aligned_d_size = (dq1 > dq2) ? dq1 : dq2; //no need for mul operation
	const int safeSpaceBeforeHead = 4; 
		//extraSpaceInFront is required when you inserting 'carry', '.' or '-'
	const int safeSpaceAfterTail = 4;
		//extraSpaceAtRear is required when you inserting '.' or '\0'
	//copy str1 to a position close to the end of the buffer, 
	//digit chars only, and name as s1.
	char * s1 = buffer;
	int s1Size = *bufferSize;
	int h1, t1;
	const char * s1Position = "end of the buffer";
	if (tempRetVal = bigInt_copyToBufferPosition(str1, iq1, dq1, dp1, 
			iq1, dq1, safeSpaceBeforeHead, safeSpaceAfterTail,
			s1, s1Size, &h1, &t1, s1Position))
		return tempRetVal;
	//copy str2 to a position close to the start of the buffer, 
	//digit chars only, and name as s2.
	char * s2 = buffer;
	int s2Size = *bufferSize;
	int h2, t2;
	const char * s2Position = "start of the buffer";
	if (tempRetVal = bigInt_copyToBufferPosition(str2, iq2, dq2, dp2, 
			iq2, dq2, safeSpaceBeforeHead, safeSpaceAfterTail,
			s2, s2Size, &h2, &t2, s2Position))
		return tempRetVal;
	//check free space in buffer
	int freeSpaceInBuffer = *bufferSize - (t1 - h1 + 1) - (t2 - h2 + 1)
							- safeSpaceBeforeHead * 2 - safeSpaceAfterTail * 2;
	if (freeSpaceInBuffer < (t1 - h1 + 1))
		return 46; //Error: not enough bufferSize
	//multiply them: s1 is multiplicand, s2 is multiplier, 
	//to save bufferSize, s2 may destroyed during multiplying.
	//range of s3 covered the range of s2
	char * s3 = buffer;
	int s3Size = *bufferSize;
	int h3;
	int t3 = h1 - 1 - safeSpaceBeforeHead; //t3 position is ahead of h1
	int pn3 = pn1 * pn2;
	if (tempRetVal = bigInt_strTailAlignedMul(s1, &h1, &t1, 
						s2, &h2, &t2, s3, &h3, &t3, &s3Size))
		return tempRetVal;
	//make a readable s3, read friendly for human.
	int dq3 = dq1 + dq2;
	if (tempRetVal = bigInt_makeFinishStr(s3, &s3Size, 
										  &h3, &t3, &dq3, &pn3))
		return tempRetVal;
	//calc result index in buffer
	*resultInBuffer = (int)(s3 - buffer + h3);
	return 0;
}

int bigInt_mul(const char * s1, const char * s2, int * resultInBuffer,
			   char * buffer, const int * bufferSize)
{	//return 0 = no error.
	int tempRetVal;
	if (tempRetVal = bigInt_strMul(s1, s2, resultInBuffer,
								   buffer, bufferSize))
		return tempRetVal;
	return 0;
}

int bigInt_strTailAlignedDiv(char * s1, int * h1, int * t1,
							 char * s2, int * h2, int * t2,
							 char * s3, int * h3, int * t3, const int * s3Size)
{	//return 0 = no error, return 70, 71, 72, 73 = error!
	int tempRetVal;
	if (tempRetVal = bigInt_headTailValidate(*h1, *t1))
		return tempRetVal; //Error: wrong parameter.
	if (tempRetVal = bigInt_headTailValidate(*h2, *t2))
		return tempRetVal; //Error: wrong parameter.
	if (tempRetVal = bigInt_findNewHead(s2, h2, t2))
		return tempRetVal;
	char isDivisorZero = 'F';
	if (tempRetVal = bigInt_isZero(s2, h2, t2, &isDivisorZero))
		return tempRetVal;
	if (isDivisorZero == 'T')
		return 70; //Error: it's not allowed: divisor == 0
	if (*t1 - *h1 < *t2 - *h2)
		return 72; //Error: dividend length less than divisor length is not allowed.
	int quotientWritePosition = *h3; //Quotient will write here.
	*t3 = *h3; //*t3 initialized to *h3, *t3 will increase while you write data.
	for (int t1Align = *h1 + (*t2 - *h2) + 1; t1Align <= *t1; ++t1Align)
	{	//t1Align - *h1 = *t2 - *h2 + 1, dividend is always one char longer than divisor.
		char quotient = '0';
		char borrow = '0';
		if (tempRetVal = bigInt_strTailAlignedSubTry(s1, h1, &t1Align, 
													 s2, h2, t2, &borrow))
			return tempRetVal;
		while (borrow == '0')
		{
			if (tempRetVal = bigInt_strTailAlignedSub(s1, h1, &t1Align, 
													  s2, h2, t2, &borrow))
				return tempRetVal;
			if (tempRetVal = bigInt_chInc(&quotient))
				return tempRetVal;
			if (tempRetVal = bigInt_strTailAlignedSubTry(s1, h1, &t1Align, 
													 s2, h2, t2, &borrow))
				return tempRetVal;
		}
		if (tempRetVal = bigInt_chSequentialSetting(s3, h3, t3, s3Size, 
									&quotientWritePosition, quotient))
			return tempRetVal;
		if (s1[*h1] == '0')
			++(*h1); //s1[*h1] must be '0' now.
		else
			return 73; //Error: Something wrong
	}
	return 0;
}

int bigInt_continueDecimalDiv(char * s1, int * h1, int * t1,
							  char * s2, int * h2, int * t2,
							  char * s3, int * h3, int * t3,
							  const int * s3Size, 
							  const int * truncateForQuotient,
							  int safeSpaceBeforeHead, int safeSpaceAfterTail)
{	//return 0 = no error
	int tempRetVal;
	char isDividendZero = 'F';
	if (tempRetVal = bigInt_isZero(s1, h1, t1, &isDividendZero))
		return tempRetVal;
	char isDivisorZero = 'F';
	if (tempRetVal = bigInt_isZero(s2, h2, t2, &isDivisorZero))
		return tempRetVal;
	int spaces_between_s3_tail_and_s1_head = (int)((s1 + *h1) - (s3 + *t3) - 1);
	int move_toward_the_head = spaces_between_s3_tail_and_s1_head
							   - safeSpaceBeforeHead;
	if (*truncateForQuotient > 0 && move_toward_the_head > *truncateForQuotient)
		move_toward_the_head = *truncateForQuotient;
	if (isDividendZero == 'F' && isDivisorZero == 'F' && move_toward_the_head > 0)
	{
		//move remainder toward head in s1, then have more space to append '0' for calculate
		int moveToNewH1 = *h1 - move_toward_the_head;
		int moveToNewT1 = *t1 - move_toward_the_head;
		if (tempRetVal = bigInt_strCopy(s1, &moveToNewH1, &moveToNewT1, s1, h1, t1))
			return tempRetVal;
		*h1 = moveToNewH1; //*h1 is changed.
		//fill Zero after remainder.
		int setZeroFrom = moveToNewT1 + 1;
		if (tempRetVal = bigInt_chSet(s1, &setZeroFrom, t1, '0')) //*t1 is not changed.
			return tempRetVal;
		//place a dot in s3 before write decimal parts
		if (tempRetVal = bigInt_chSetAfterTail(s3, h3, t3, s3Size, '.'))
			return tempRetVal;
		//prepare head for quotient write in s3
		int decimal_h3 = *t3 + 1;
		// go!
		if (tempRetVal = bigInt_strTailAlignedDiv(s1, h1, t1, s2, h2, t2, 
												  s3, &decimal_h3, t3, s3Size))
			return tempRetVal;
	}
	return 0;
}

int bigInt_divWithTurncate(const char * str1, const char * str2, 
						int * quotientInBuffer, int * remainderInBuffer, 
						char * buffer, const int * bufferSize, 
						const int * truncateForQuotient)
{	//return 0 = no error, return 80 = error!
	int tempRetVal;
	int pn1, iq1, dq1, dp1;
	if (tempRetVal = bigInt_parse(str1, &pn1, &iq1, &dq1, &dp1))
		return tempRetVal;
	int pn2, iq2, dq2, dp2;
	if (tempRetVal = bigInt_parse(str2, &pn2, &iq2, &dq2, &dp2))
		return tempRetVal;
	//align the size of str1 and str2
	int aligned_i_size = (iq1 > iq2) ? iq1 : iq2;
	int aligned_d_size = (dq1 > dq2) ? dq1 : dq2;
	const int safeSpaceBeforeHead = 4; 
		//extraSpaceInFront is required when you inserting 'carry', '.' or '-'
	const int safeSpaceAfterTail = 4;
		//extraSpaceAtRear is required when you inserting '.' or '\0'
	//copy str1 to a position close to the end of the buffer, 
	//digit chars only, and name as s1.
	char * s1 = buffer;
	int s1Size = *bufferSize;
	int h1, t1;
	const char * s1Position = "end of the buffer";
	if (tempRetVal = bigInt_copyToBufferPosition(str1, iq1, dq1, dp1, 
			aligned_i_size, aligned_d_size, safeSpaceBeforeHead, safeSpaceAfterTail,
			s1, s1Size, &h1, &t1, s1Position))
		return tempRetVal;
	//copy str2 to a position close to the start of the buffer, 
	//digit chars only, and name as s2.
	char * s2 = buffer;
	int s2Size = *bufferSize;
	int h2, t2;
	const char * s2Position = "start of the buffer";
	if (tempRetVal = bigInt_copyToBufferPosition(str2, iq2, dq2, dp2, 
			aligned_i_size, aligned_d_size, safeSpaceBeforeHead, safeSpaceAfterTail,
			s2, s2Size, &h2, &t2, s2Position))
		return tempRetVal;
	//check free space in buffer
	int freeSpaceInBuffer = *bufferSize - (t1 - h1 + 1) - (t2 - h2 + 1)
							- safeSpaceBeforeHead * 2 - safeSpaceAfterTail * 2;
	if (freeSpaceInBuffer < 4)
		return 46; //Error: not enough bufferSize
	// s1 / s2 = s3 ... s1 (s3 is quotient, s1 is remainder.)
	char * s3 = buffer;
	int s3Size = *bufferSize;
	int h3 = t2 + 1 + safeSpaceAfterTail; //h3 position is after t2
	int t3;
	int pn3 = pn1 * pn2;
	if (tempRetVal = bigInt_chSetBeforeHead(s1, &h1, &t1, &s1Size, '0'))
		return tempRetVal; // insert one '0' before h1 for integer div.
	if (tempRetVal = bigInt_strTailAlignedDiv(s1, &h1, &t1, s2, &h2, &t2, 
											  s3, &h3, &t3, &s3Size))
		return tempRetVal;
	//calc decimal part defined by truncateForQuotient
	if (*truncateForQuotient != 0)
	{
		if (tempRetVal = bigInt_continueDecimalDiv(s1, &h1, &t1,
							s2, &h2, &t2, s3, &h3, &t3, &s3Size, 
							truncateForQuotient, safeSpaceBeforeHead, safeSpaceAfterTail))
			return tempRetVal;
	}
	//make a readable s1 and s3, read friendly for human.
	int dq3 = 0;
	if (tempRetVal = bigInt_makeFinishStr(s3, &s3Size, 
										  &h3, &t3, &dq3, &pn3))
		return tempRetVal;
	if (*truncateForQuotient == 0)
	{	//remainder is only usefull for integer division
		dq1 = 0;
		pn1 = 1;
		if (tempRetVal = bigInt_makeFinishStr(s1, &s1Size,
			&h1, &t1, &dq1, &pn1))
			return tempRetVal;
	}
	//calc result index in buffer
	*quotientInBuffer = (int)(s3 - buffer + h3);
	*remainderInBuffer = (int)(s1 - buffer + h1);
	return 0;
}

int bigInt_divInteger(const char * str1, const char * str2, 
					  int * quotientInBuffer, int * remainderInBuffer, 
					  char * buffer, const int * bufferSize)
{	//return 0 = no error
	int tempRetVal;
	int truncateForQuotient = 0;
	if (tempRetVal = bigInt_divWithTurncate(str1, str2, 
						quotientInBuffer, remainderInBuffer, 
						buffer, bufferSize, &truncateForQuotient))
		return tempRetVal;
	return 0;
}

int bigInt_divDecimal(const char * str1, const char * str2, 
					  int * quotientInBuffer, char * buffer, 
					  const int * bufferSize)
{	//return 0 = no error
	int tempRetVal;
	int truncateForQuotient = -1; //calc until full of buffer
	int remainderInBuffer = 0; //no used data but needed for function call.
	if (tempRetVal = bigInt_divWithTurncate(str1, str2, 
						quotientInBuffer, &remainderInBuffer, 
						buffer, bufferSize, &truncateForQuotient))
		return tempRetVal;
	return 0;
}

int bigInt_divRound(const char * str1, const char * str2, int * quotientInBuffer, 
					char * buffer, const int * bufferSize, int round_digits)
{	//return 0 = no error
	int tempRetVal;
	if (round_digits < 0)
		round_digits = 0;
	int truncateForQuotient = round_digits + 1; //calc to round_digits + 1
	int remainderInBuffer = 0; //no used data but needed for function call.
	if (tempRetVal = bigInt_divWithTurncate(str1, str2, 
						quotientInBuffer, &remainderInBuffer, 
						buffer, bufferSize, &truncateForQuotient))
		return tempRetVal;
	if (tempRetVal = bigInt_decimalRound(buffer + *quotientInBuffer, round_digits))
		return tempRetVal;
	return 0;
}

int bigInt_decimalRound(char * str, int round_digits)
{	//return 0 = no error
	int tempRetVal;
	int pn, iq, dq, dp;
	if (tempRetVal = bigInt_parse(str, &pn, &iq, &dq, &dp))
		return tempRetVal;
	if (0 <= round_digits && round_digits < dq)
{
		int i_head;
		int i_tail;
		int d_head = dp + 1;
		int d_tail = dp + round_digits + 1;
		int strSize = (dp + dq + 1) + 1; // no use but required by fuction call
		if (iq > 0)
		{
			i_head = dp - iq;
			i_tail = dp - 1;
		}
		else
		{//iq == 0
			if (dp > 0 && str[dp - 1] == '0')
			{//there's at least one '0' before dot
				i_head = dp - 1;
				i_tail = dp - 1;
			}
			else
			{//dot at very first, insert one '0' before dot
				int insertBeforeThisPos = dp;
				if (tempRetVal = bigInt_chInsertFromTail(str, &dp, &d_tail, &strSize, 
													&insertBeforeThisPos, '0'))
					return tempRetVal;
				++dp;			//notice: above function call, only d_tail updated.
				d_head = dp + 1;//notice: above function call, only d_tail updated.
				i_head = dp - 1;
				i_tail = dp - 1;
			}
		}
		// add 5 at d_tail
		char s[2] = { '5', '\0' };
		int h = 0;
		int t = 0;
		char carry = '0'; 
		if (tempRetVal = bigInt_strTailAlignedAdd(str, &d_head, &d_tail,
												  s, &h, &t, &carry))
			return tempRetVal;
		if (carry == '1')
		{//if there's carry from decimal parts, add it into integer parts
			s[0] = '0';
			if (tempRetVal = bigInt_strTailAlignedAdd(str, &i_head, &i_tail,
													  s, &h, &t, &carry))
				return tempRetVal;
		}
		if (carry == '1')
		{//if there's carry from integer parts, insert it before i_head
			int insertBeforeThisPos = i_head;
			if (tempRetVal = bigInt_chInsertFromTail(str, &i_head, &d_tail, &strSize, 
													 &insertBeforeThisPos, carry))
				return tempRetVal;
		}
		int endPosition;
		if (round_digits == 0)
			endPosition = dp;		//write '\0' at dot position;
		else
			endPosition = d_tail;	//write '\0' at d_tail
		if (tempRetVal = bigInt_chSetAtPosition(str, &i_head, &d_tail, &strSize,
												&endPosition, '\0'))
			return tempRetVal;
		//notice: if there's '0' in the end of decimal parts, '0' is kept.
	}
	return 0;
}
