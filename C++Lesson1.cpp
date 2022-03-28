// C++Lesson1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Less1.h"


int main()
{
	//23
	std::cout << std::bitset<32>(Shift(7, 32))<<"\n";
	std::cout << Shift(7, 32) << "\n";

	//24
	std::cout << "xor:"<<XorWithotXor(7, 7) << "\n";
	//20
	std::cout << std::bitset<32>(SwapEvenOdd(10)) << "\n";
	//41
	std::cout << "square"<<CalcSquare(4) << "\n";
	//47
	std::cout << "min:	" << FindMin(50, -65) << "\n";


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
