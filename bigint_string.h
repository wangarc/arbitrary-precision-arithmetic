#ifndef BIGINT_STRING_H__
#define BIGINT_STRING_H__


/*	warning: you have to check the return value first BEFORE read the result string!
 *	if function return value == 0, no error, it's safe to read the result string.
 *  if function return value != 0, DO NOT READ THE RESULT STRING.
 * 
 *	bigInt_add() : bigint strings add : 123.456 + 78.9 = 202.356
 *	bigInt_sub() : bigint strings sub : 123.456 - 78.9 = 44.556
 *	bigInt_mul() : bigint strings add : 123.456 * 78.9 = 9740.6784
 *	bigInt_divInteger() : bigint strings div : 123.456 / 78.9 = 1 ... 44556
 *	bigInt_divDecimal() : bigint strings div : 123.456 / 78.9 = 1.564714828897...
 *  bigInt_divRound()   : bigint strings div : 123.456 / 78.9 = 1.564715 (n_digits = 6)
 *  bigInt_decimalRound() can be used individually for round operation.
 *                          
 *  minimun/suggested buffer size required:
 *              add: bufferSize >= (strlen(s1) + strlen(s2) + 8) * 2
 *	            sub: bufferSize >= (strlen(s1) + strlen(s2) + 8) * 2
 *	            mul: bufferSize >= (strlen(s1) + strlen(s2) + 8) * 3
 *	     divInteger: bufferSize >= (strlen(s1) + strlen(s2) + 8) * 3
 *	     divDecimal: bufferSize >= (strlen(s1) + strlen(s2) + 8) * 3
 *  (notes: bigger buffer size helps get more decimal digits for divDecimal function.)
 */

/*	tips to read the program:
* 
 *  s, h, t, Size:
 *	variable named: s, s1, s2, s3, str, str1, str2 ... that's pointer to string.
 *	variable named: s1Size, s2Size, s3Size ... that's the allocated memory size of string.
 *  variable named: h, h1, h2, h3 ... that's head, the index of first valid char in string.
 *	variable named: t, t1, t2, t3 ... that's tail, the index of last valid char in string.
 *	
 *  example: h1 and t1 is the index of s1:
 *  
 *                         ************0123456789012300************
 *	                       ^           ^              ^           ^
 *                       s1[0]       s1[h1]         s1[t1]   s1[s1Size - 1]
 *  
 *	benefit of using h1 and t1 to indicate the first and last char in s1:
 *      1. it's no need to move chars if you want to insert a char ahead/between of s1[h1]
 *	    2. it's no need to extend the size if you want to attach a char after s1[t1]
 *      3. h1 or t1 is limited within the range of 0 and s1Size - 1
 *      4. during calculation, '+', '-', '.' and '\0' is not included in the string
 *  
 *  this program don't request memory using "new" or "malloc" or others.
 *  the only buffer (user send in) is used during calculate progress and store the result.
 *  
 *  buffer with bufferSize: 
 *  
 *       ********s2 copied in the front*****************************s1 copied in the end********
 *          ^                                      ^                                       ^
 *       safe space before head           space for result                 safe space after tail
 * 
 *  during add or sub calculation: result will directly writed at position of s1 or s2 
 * 
 *  during mul calculation: result will start to write before s1 and a safe space
 * 
 *       ********s2 copied in the front*****************************s1 copied in the end********
 *                                                             ^
 *                                                      tail of mul result
 * 
 *  during div calculation: result will start to write after s2 and a safe space
 * 
 *       ********s2 copied in the front*****************************s1 copied in the end********
 *                                         ^
 *                                  head of div result
 */





/*	bigInt_chAdd() 
 *	return 0 = no error, return 1, 2, 3 = error!
 *	carry and ch = ch + c2 + carry
 */
int bigInt_chAdd(char * ch, const char * c2, char * carry);
int bigInt_chAdd0(char * ch, char * carry);
int bigInt_chAdd1(char * ch, char * carry);
int bigInt_chAdd2(char * ch, char * carry);
int bigInt_chAdd3(char * ch, char * carry);
int bigInt_chAdd4(char * ch, char * carry);
int bigInt_chAdd5(char * ch, char * carry);
int bigInt_chAdd6(char * ch, char * carry);
int bigInt_chAdd7(char * ch, char * carry);
int bigInt_chAdd8(char * ch, char * carry);
int bigInt_chAdd9(char * ch, char * carry);
int bigInt_chAdd10(char * ch, char * carry);





/*	bigInt_chSub() 
 *	return 0 = no error, return 4, 5, 6 = error!
 *	borrow and ch = ch - c2 - borrow
 */
int bigInt_chSub(char * ch, const char * c2, char * borrow);
int bigInt_chSub0(char * ch, char * borrow);
int bigInt_chSub1(char * ch, char * borrow);
int bigInt_chSub2(char * ch, char * borrow);
int bigInt_chSub3(char * ch, char * borrow);
int bigInt_chSub4(char * ch, char * borrow);
int bigInt_chSub5(char * ch, char * borrow);
int bigInt_chSub6(char * ch, char * borrow);
int bigInt_chSub7(char * ch, char * borrow);
int bigInt_chSub8(char * ch, char * borrow);
int bigInt_chSub9(char * ch, char * borrow);
int bigInt_chSub10(char * ch, char * borrow);





/*	bigInt_parse() 
 *	return 0 = no error, str is a bigint string, return 99, 7, 8, 9 = error!
 *	str: the string to be checked.
 *	p_or_n: indicate the number is positive (1) or negative (-1) (after check).
 *	i_qty: integeral part char qty (length)
 *	d_qty: decimal part char qty (length)
 *	dot_pos: return position of '.', (or '\0' if no '.'), of the str
 *	eg: if p_or_n = -1, i_qty = 3, d_qty = 2, dot_pos = 4, str may look like -nnn.nn
 */
int bigInt_parse(const char * str, int * p_or_n, int * i_qty, int * d_qty, int * dot_pos);





/*	bigInt_chInc() 
 *	return 0 = no error, return 10 = ch is wrong, 11 = overflow '9'->'0'
 *	ch++
 */
int bigInt_chInc(char * ch);





/*	bigInt_chInc() 
 *	return 0 = no error, return 12 = ch is wrong, 13 = overflow '0'->'9'
 *	ch--
 */
int bigInt_chDec(char * ch);





/*  bigInt_strTailAlignedAdd() 
 *	return 0 = no error, return 19 = error!
 *  s1 = s1 + s2 + carry
 *                  *************842369258147****
 *                  ^            ^          ^
 *                  s1           h1         t1           h = index of head
 *	                                                     t = index of tail
 *             +                   ****756789****        h1 and h2 aligned
 *                                 ^   ^    ^            t1 - h1 >= t2 - h2
 *                                 s2  h2   t2
 *             +                            1
 *	                                        ^
 *	                                        incoming carry will be added here
 *            ________________________________________
 *                                                    
 *             =    *************842370014936****
 *                  ^            ^          ^
 *                  s1           h1         t1
 *            carry will be changed through calculation. 
 *	          carry = '0' at last in this case.
 */
int bigInt_strTailAlignedAdd(char * s1, const int * h1, const int * t1,
							 const char * s2, const int * h2, const int * t2,
							 char * carry);





/*  bigInt_strTailAlignedSub() 
 *	return 0 = no error, return 20 = error!
 *  s1 = s1 - s2 - borrow
 *                  *************842369258147****
 *                  ^            ^          ^
 *                  s1           h1         t1           h = index of head
 *	                                                     t = index of tail
 *             +                   ****756789****        h1 and h2 aligned
 *                                 ^   ^    ^            t1 - h1 >= t2 - h2
 *                                 s2  h2   t2
 *             +                            1
 *	                                        ^
 *	                                        incoming borrow will be substrated here
 *            ________________________________________
 *                                                    
 *             =    *************842368501357****
 *                  ^            ^          ^
 *                  s1           h1         t1
 *            borrow will be changed through calculation. 
 *	          borrow = '0' at last in this case.
 */
int bigInt_strTailAlignedSub(char * s1, const int * h1, const int * t1,
							 const char * s2, const int * h2, const int * t2,
							 char * borrow);





/*  bigInt_strTailAlignedSubTry() 
 *	return 0 = no error, return 21 = error!
 *	almost same as bigInt_strTailAlignedSub() but use a tempChar to avoided change of s1
 *	just have a try and check if there's a borrow or not.
 *	this function can help you check if s1 > s2 or s1 < s2
 */
int bigInt_strTailAlignedSubTry(const char * s1, const int * h1, const int * t1,
								const char * s2, const int * h2, const int * t2,
								char * borrow);



/*	bigInt_chSet() 
 *	return 0 = no error.
 *	same ch be set between h1 and t1
 */
int bigInt_chSet(char * s1, const int * h1, const int * t1, char ch);





/*	bigInt_chSetAtPosition()
 *	return 0 = no error, return 22 = error!
 *	set the ch at defined position, the position should within (h1 - 1) and (t1 + 1)
 */
int bigInt_chSetAtPosition(char * s1, int * h1, int * t1, const int * s1Size, 
						   const int * position, char ch);





/*	bigInt_chSetBeforeHead()
 *	return 0 = no error
 *	set the ch just before *h1
 */
int bigInt_chSetBeforeHead(char * s1, int * h1, int * t1, const int * s1Size, char ch);





/*	bigInt_chSetAfterTail()
 *	return 0 = no error
 *	set the ch just after *t1
 */
int bigInt_chSetAfterTail(char * s1, int * h1, int * t1, const int * s1Size, char ch);





/*	bigInt_chValidate() 
 *	return 0 = no error, return 23 = error!
 *	ch will be checked if a valid character or not.
 */
int bigInt_chValidate(char ch);





/*	bigInt_headTailValidate() 
 *	return 0 = no error, return 24 = error!
 *	ch will be checked if a valid character or not.
 */
int bigInt_headTailValidate(int head, int tail);





/*	bigInt_strCopy() 
 *	return 0 = no error, return 25 = error!
 *	s1 = s2
 */
int bigInt_strCopy(char * s1, const int * h1, const int * t1,
				   const char * s2, const int * h2, const int * t2);





/*	bigInt_findNewHead() 
 *	return 0 = no error
 *                  ****0000000000842369258147****
 *                  ^   ^         ^          ^
 *                  s1  h1       (new h1)    t1
 *	if all '0' between h1 and t1, new h1 will point to t1.
 */
int bigInt_findNewHead(const char * s1, int * h1, const int * t1);





/*	bigInt_findNewTail() 
 *	return 0 = no error
 *                  ****0000000000842369258147****
 *                  ^   ^         ^          ^
 *                  s1  h1       (new h1)    t1
 *	if all '0' between h1 and t1, new h1 will point to t1.
 */
int bigInt_findNewTail(const char * s1, const int * h1, int * t1);





/*	bigInt_findDotPosition()
 *	return 0 = no error, return 26 = error!
 *	accept a non initialized *dotPosition.
 *	*dotPostion == -1 means no dot found, else, *dotPosition is dotPosition.
 */
int bigInt_findDotPosition(const char * s1, const int * h1, const int * t1,
						   int * dotPosition);





/*	bigInt_isZero() 
 *	return 0 = no error, return 26 = error!
 *	if all '0' between h1 and t1, isZero = 'T'; else isZero = 'F'
 */
int bigInt_isZero(const char * s1, const int * h1, const int * t1,
				  char * isZero);





/*	bigInt_copyToBufferPosition() 
 *	return 0 = no error, return 34, 35, 36 = error!
 *	copy source str to buffer without '-' '+' '.'
 *  if aligned_i_size > i_qty, '0' will be inserted in front of bigint chars.
 *	if aligned_d_size > d_qty, '0' will be attached at rear of bigint chars.
 * 
 *  if (position[0] == 'e') fill at a position close to the end of the buffer
 *  buffer:
 *       ***********************************************************s1 copied in the end********
 *                                                                                         ^
 *                                                                         safe space after tail
 * 
 *	if (position[0] == 's') fill at a position close to the start of the buffer
 *  buffer:
 *       ********s2 copied in the front*********************************************************
 *          ^
 *       safe space before head
 * 
 */
int bigInt_copyToBufferPosition(const char * str, int i_qty, int d_qty, int dot_pos, 
		int aligned_i_size, int aligned_d_size, int safeSpaceBeforeHead, int safeSpaceAfterTail,
		char * buffer, int bufferSize, int * head, int * tail, const char * position);





/*	bigInt_chInsertFromHead() 
 *	return 0 = no error, return 37, 38, 39 = error!
 *	the chars that located from h1 to (insertBeforeThisPos - 1), will be move to left.
 *	insert one insertCh into s1 at insertBeforeThisPos, and --(*h1)
 *					******1234567890******
 *					^     ^    ^   ^
 *					s1    h1   |   t1
 *					           |
 *					           insertBeforeThisPos and insertCh = '.'
 *					           |
 *					*****12345.67890******
 *					^    ^     ^   ^
 *					s1   h1        t1
 */
int bigInt_chInsertFromHead(char * s1, int * h1, const int * t1, const int * s1Size, 
							const int * insertBeforeThisPos, char insertCh);





/*	bigInt_chInsertFromTail() 
 *	return 0 = no error, return 40, 41 = error!
 *	the chars that located from insertBeforeThisPos to t1, will be move to right.
 *	insert one insertCh into s1 at insertBeforeThisPos, and ++(*t1)
 *					******1234567890******
 *					^     ^    ^   ^
 *					s1    h1   |   t1
 *					           |
 *					           insertBeforeThisPos and insertCh = '.'
 *					           |
 *					******12345.67890*****
 *					^     ^    ^    ^
 *					s1    h1        t1
 */
int bigInt_chInsertFromTail(char * s1, const int * h1, int * t1, const int * s1Size, 
							const int * insertBeforeThisPos, char insertCh);





/*	bigInt_add() 
 *	return 0 = no error.
 *	s3 = s1 + s2
 *	read the result: first char start from (buffer + *resultInBuffer)
 *  buffer size required: bufferSize >= (strlen(s1) + strlen(s2) + 5) * 2
 */
int bigInt_add(const char * s1, const char * s2, int * resultInBuffer,
			   char * buffer, const int * bufferSize);





/*	bigInt_sub() 
 *	return 0 = no error.
 *	s3 = s1 - s2
 *	read the result: first char start from (buffer + *resultInBuffer)
 *  buffer size required: bufferSize >= (strlen(s1) + strlen(s2) + 5) * 2
 */
int bigInt_sub(const char * s1, const char * s2, int * resultInBuffer,
			   char * buffer, const int * bufferSize);





/*	bigInt_addOrSub() 
 *	return 0 = no error, return 45, 46, 47, 48, 49, 50, 51, 52 = error!
 *	if (toDo[0] = 'A') then do add: s3 = s1 + s2
 *  if (toDo[0] = 'S') then do sub: s3 = s1 - s2
 *	read the result: first char start from (buffer + *resultInBuffer)
 */
int bigInt_addOrSub(const char * str1, const char * str2, int * resultInBuffer,
					char * buffer, const int * bufferSize, 
					const char * toDo);




/*	bigInt_addWithSameSign() 
 *	return 0 = no error, return 54 = error!
 *	s3 = (+s1) + (+s2) or s3 = (-s1) + (-s2)
 *  bigInt_addWithSameSign() function do a pure add process for s1 and s2.
 */
int bigInt_addWithSameSign(
	char * s1, const int * s1Size, int * h1, int * t1, int * pn1, 
	char * s2, const int * s2Size, int * h2, int * t2, int * pn2, 
	char * s3, const int * s3Size, int * h3, int * t3, int * pn3);





/*	bigInt_addWithOppositeSign() 
 *	return 0 = no error, return 55, 56, 57, 58 = error!
 *	s3 = (+s1) + (-s2) or s3 = (-s1) + (+s2)
 *  bigInt_addWithOppositeSign() function do a pure sub process for s1 and s2.
 */
int bigInt_addWithOppositeSigns(
	char * s1, const int * s1Size, int * h1, int * t1, int * pn1, 
	char * s2, const int * s2Size, int * h2, int * t2, int * pn2, 
	char * s3, const int * s3Size, int * h3, int * t3, int * pn3);





/*	bigInt_makeFinishStr() 
 *	return 0 = no error.
 *	make str friendly readable for human!
 */
int bigInt_makeFinishStr(char * s3, const int * s3Size, 
						 int * h3, int * t3, int * dq3, int * pn3);





/*	bigInt_strTailAlignedMul() 
 *	return 0 = no error, return 60, 61 = error!
 *	s3 = s1 * s2, integer only.
 *  t3 must be initialized as a tail position of s3.
 *  h3 no need to initialized.
 */
int bigInt_strTailAlignedMul(const char * s1, const int * h1, const int * t1,
							 const char * s2, const int * h2, const int * t2,
							 char * s3, int * h3, int * t3, const int * s3Size);





/*	bigInt_strMul() 
 *	return 0 = no error, return 65 = error!
 *	s3 = s1 * s2
 *	read the result: first char start from (buffer + *resultInBuffer)
 */
int bigInt_strMul(const char * str1, const char * str2, int * resultInBuffer,
				  char * buffer, const int * bufferSize);





/*	bigInt_mul() 
 *	return 0 = no error
 *	s3 = s1 * s2
 *	read the result: first char start from (buffer + *resultInBuffer)
 *  buffer size required: bufferSize >= strlen(s2) + strlen(s1) * 2 + 5
 */
int bigInt_mul(const char * str1, const char * str2, int * resultInBuffer,
			   char * buffer, const int * bufferSize);





/*	bigInt_strTailAlignedDiv() 
 *	return 0 = no error, return 70, 71, 72, 73 = error!
 *	s3 = s1 / s2 ... s1, integer only, quotient in s3, remainder in s1.
 */
int bigInt_strTailAlignedDiv(char * s1, int * h1, int * t1,
							 char * s2, int * h2, int * t2,
							 char * s3, int * h3, int * t3, const int * s3Size);





/*	bigInt_chSequentialSetting()
 *	return 0 = no error.
 *	set the ch at defined position, the position should within (h1 - 1) and (t1 + 1)
 *	setPosition increased automaticly
 */
int bigInt_chSequentialSetting(char * s1, int * h1, int * t1, const int * s1Size, 
							   int * setPosition, char ch);





/*	bigInt_continueDecimalDiv()
 *	return 0 = no error
 */
int bigInt_continueDecimalDiv(char * s1, int * h1, int * t1,
							  char * s2, int * h2, int * t2,
							  char * s3, int * h3, int * t3,
							  const int * s3Size, 
							  const int * truncateForQuotient,
							  int safeSpaceBeforeHead, int safeSpaceAfterTail);





/*	bigInt_divWithTurncate() 
 *	return 0 = no error, return 80 = error!
 *  if (truncateForQuotient = 5)
 *		{quotientInBuffer truncated to 5 decimal places.}
 *	if (truncateForQuotient = 0)
 *		{quotientInBuffer = integer, remainderInBuffer = integer}
 *  if (truncateForQuotient < 0)
 *		{quotientInBuffer will be as long as possible until full of buffer.}
 *	read the quotient:  first char start from (buffer + *quotientInBuffer)
 *	read the remainder: first char start from (buffer + *remainderInBuffer)
 */
int bigInt_divWithTurncate(const char * str1, const char * str2, 
						int * quotientInBuffer, int * remainderInBuffer, 
						char * buffer, const int * bufferSize, 
						const int * truncateForQuotient);





/*	bigInt_divInteger()
 *	return 0 = no error
 *	use for integer div integer
 */
int bigInt_divInteger(const char * str1, const char * str2, 
					  int * quotientInBuffer, int * remainderInBuffer, 
					  char * buffer, const int * bufferSize);





/*	bigInt_divDecimal()
 *	return 0 = no error
 *	use for decimal div decimal
 */
int bigInt_divDecimal(const char * str1, const char * str2, int * quotientInBuffer, 
					  char * buffer, const int * bufferSize);





/*	bigInt_divRound()
 *	return 0 = no error
 *	use for decimal div decimal, return a rounded value.
 */
int bigInt_divRound(const char * str1, const char * str2, int * quotientInBuffer, 
					char * buffer, const int * bufferSize, int round_digits);





/*	bigInt_decimalRound()
 *	return 0 = no error
 *	use for decimal round
 */
int bigInt_decimalRound(char * str, int round_digits);





#endif
