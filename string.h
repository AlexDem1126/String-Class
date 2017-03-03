//AlexDem1126
//String Class implementation
/***************************************************************************
								HEADER FILE
***************************************************************************/

#ifndef STRING
#define STRING
#include <iostream>
#include <cstring> // For string library functions
#include <cstdlib> // For exit() function
using namespace std;

const int ARRAY_SIZE = 30;

class Str_clss 
{
	private:
		char *strPtr;
		int stringLength;
		void subscriptError(); // Handles invalid subscripts

	public:
		// Constructors
		Str_clss() 
		{ strPtr = new char[1]; 
		strPtr[0] = '\0'; 
		stringLength = 0;		
		}

		Str_clss(char *);
		Str_clss(const Str_clss &);
		
		// Destructor
		~Str_clss() { 
			if (stringLength != 0) 
				delete[] strPtr; //cout << "Bye from Destructor" << endl;
		}
		
		//value of string
		const char * getValue()const
		{			
			return strPtr;
		}

		//length of string
		int length() const {
			return stringLength; }
		
		//Overloaded += operator
		Str_clss operator+=(Str_clss);
		
		//Overloaded > operator
		friend bool operator>(Str_clss, Str_clss);

		//Overloaded < operator
		friend bool operator<(Str_clss, Str_clss);
		
		//Overloaded == operator
		friend bool operator==(Str_clss, Str_clss);
		
		//Overloaded != operator
		friend bool operator!=(Str_clss, Str_clss);
		
		//Overloaded << operator
		friend ostream & operator<<(ostream &, Str_clss);

		//Overloaded >> operator
		friend istream & operator>>(istream &, Str_clss &);	

		//Overloaded = operator
		Str_clss operator=(Str_clss);

		//Overloaded [] operator
		char &operator[](const int &); // Overloaded [] operator
};
#endif