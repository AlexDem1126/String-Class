//AlexDem1126
//String Class implementation
/***************************************************************************
									MAIN
***************************************************************************/
#include <iostream>
#include "string.h"
#include <iomanip>
using namespace std;

int main()
{
	// initialize created object with a given string
	Str_clss string1("Joe");
	Str_clss string2("James");
	
	// Display the objects values.
	cout << "\nstring1 is: " << string1.getValue() << endl;
	cout << "string2 is: " << string2.getValue() << endl<<endl;
	
	// Display the length of strings.
	cout << "Length of string1 is: " << string1.length() << endl;
	cout << "Length of string2 is: " << string2.length() << endl<<endl;

	Str_clss string3("");
	// Display Concatenated strings
	string3 += string1;
	string3 += string2;
	cout << "\nConcatenated strings (string 1 + string 2): " << string3 << endl;


	//Compares two given objects
	cout << "\nCompares two given objects: (e.g. String a,b) a>b or a<b or a==b." << endl;

	//Test if string1 > string2
	cout << "Result of test [if string1 > string2] is: ";
	if (string1 > string2)
		cout << "String1 is greater than String2.\n";
	else
		cout << "String1 is less than String2.\n";


	//Test if string1 < string2
	cout << "Result of test [if string1 < string2] is: ";
	if (string1 < string2)
		cout << "String1 is less than String2.\n";
	else
		cout << "String1 is greater than String2.\n";

	
	// Test if string1 == string2
	cout << "Result of test [if string1 == string2] is: ";
	if (string1 == string2)
		cout << "String1 is equal to String2.\n";
	else
		cout << "String1 is not equal to String2.\n";
				

	//Copies one object to another
	cout << "\nCopies one object to another (e.g. a=b or a=b=c)" << endl;
	cout << "Copy String2 to String1. Now String1 is: " << (string1 = string2) << endl;
	cout << "Copy String2 to String3. Now String3 is: " << (string3 = string2) << endl;
	cout << "String2 is still the same:" << string2 << endl;

	return 0;
}