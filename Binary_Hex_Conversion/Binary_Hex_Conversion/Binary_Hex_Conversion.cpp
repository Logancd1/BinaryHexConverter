// Binary_Hex_Conversion.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <bitset>

using namespace std;

void printInteger(int n)
{
	cout << "Binary: " << bitset<32>(n) << endl;
	cout << "Hex: 0x" << hex << n << endl;
}

void printDouble(double d)
{
	cout << "Hex: 0x" << hex << d << endl;
}

int main()
{
	int integerInput = 0, choice = 0;
	double doubleInput = 0;
startOver:
	cout << "Enter 1 if you're entering an integer and 2 if you're entering a double, 3 to exit: ";
	cin >> choice;
	switch (choice) {
	case 1: 
		cout << "Enter an integer (maximum 32 bits): ";
		cin >> integerInput;
		printInteger(integerInput);
		goto startOver;
	case 2: 
		cout << "Enter a double: ";
		cin >> doubleInput;
		printDouble(doubleInput);
		goto startOver;
	case 3: break;
	default: goto startOver;
	}

	return 0;
}
