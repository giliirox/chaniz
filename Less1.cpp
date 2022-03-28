#include "Less1.h"
#include <iostream>
#include <math.h>
//23
int Shift(int n, int k) {
	//a
	int pow_=pow(2, k);
	int bitRight = n % pow_;
	n >>= k;
	bitRight <<= (sizeof(int) * 8) - k;
	return (bitRight | n);
	//b
	//return (n >> k) | (n << (sizeof(int)*8 - k));
}

//24
int XorWithotXor(int n1, int n2) {
	return (n1 | n2) - (n1 & n2);
}
//20
int SwapEvenOdd(int num) {
	int even = num & 0xAAAAAAAA;
	int odd = num & 0x55555555;
	return ( even >> 1) | (odd << 1);
	
}
//41
int CalcSquare(int num2) {
	int temp = 1,square = 0;
	num2 = abs(num2);
	while (num2)
	{
		square += temp;
		temp += 2;
		num2 -= 1;
	}
	return square;
}
//47
int FindMin(int numA, int numB){
	int resultSub = numA - numB;
	resultSub >>= sizeof(int)*8 - 1;
	return (resultSub ? numA : numB);
}
