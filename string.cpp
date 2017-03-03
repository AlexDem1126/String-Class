//AlexDem1126
//String Class implementation
/***************************************************************************
							CLASS IMPLEMENTATION
***************************************************************************/

#define _CRT_SECURE_NO_WARNINGS 
#include "string.h"

int objcounter = 0;


// Constructor. Set the size of the array and dynamically allocates memory for it.
Str_clss::Str_clss( char *strPtr_c)
{
	//cout << "Hi from constructor" << endl; //display for code test only ***	
	stringLength = strlen(strPtr_c);
	strPtr = new char[stringLength + 1];
	strcpy(strPtr, strPtr_c);
	objcounter++;
	cout <<"The " << objcounter << " object was created."<< endl; //display for code test only ***
}


// Copy constructor.
Str_clss::Str_clss(const Str_clss &right)
{	
	strPtr = new char[right.stringLength + 1];	
	strcpy(strPtr, right.strPtr);
	stringLength = right.stringLength;
}


// subscriptError function. Displays an error message and 
// terminates the program when a subscript is out of range. 
void Str_clss::subscriptError()
{
	cout << "ERROR: Subscript out of range.\n";
	exit(0);
}


// Overloaded += operator and Concatenates the strings 
Str_clss Str_clss::operator+=(Str_clss right)
{
char *temp = strPtr;
strPtr = new char[stringLength + right.stringLength + 1];
strcpy(strPtr, temp);
strcat(strPtr, right.strPtr);
if (stringLength != 0) delete[] temp;
stringLength += right.stringLength;
return *this;
}


// Overloaded > operator. 
bool operator>(Str_clss left, Str_clss right)
{
	return (strcmp(left.strPtr, right.strPtr) > 0);
}


// Overloaded < operator. 
bool operator<(Str_clss left, Str_clss right)
{
return (strcmp(left.strPtr, right.strPtr) < 0);
}


// Overloaded == operator. 
bool operator==(Str_clss left, Str_clss right)
{
return strcmp(left.strPtr, right.strPtr) == 0;
}


// Overloaded != operator. 
bool operator!=(Str_clss left, Str_clss right)
{
return strcmp(left.strPtr, right.strPtr) != 0;
}


// Overloaded = operator.
Str_clss Str_clss::operator=(Str_clss right)
{
	if (stringLength != 0) delete[] strPtr;
	strPtr = new char[right.stringLength + 1];
	strcpy(strPtr, right.strPtr);
	stringLength = right.stringLength;
	return *this;
}


// Overloaded << operator.
ostream &operator<<(ostream &strm, Str_clss obj)
{
	strm << obj.strPtr;
	return strm;
}


// Overloaded >> operator. 
istream &operator>>(istream &strm, Str_clss &obj)
{
	// Read the string
	char buffer[ARRAY_SIZE];
	strm.getline(buffer, ARRAY_SIZE);
	// Invoke the convert constructor and overloaded assignment
	obj = buffer;
	return strm;
}


// Overloaded [] operator. The argument is a subscript. 
// This function returns a reference to the element 
// in the array indexed by the subscript. *
//*******************************************************

char &Str_clss::operator[](const int &sub)
{
	if (sub < 0 || sub >= ARRAY_SIZE)
		subscriptError();
	return strPtr[sub];
}