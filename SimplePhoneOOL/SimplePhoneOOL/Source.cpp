// Fig. 8.3: fig08_03.cpp
// Overloading the stream-insertion and 
// stream-extraction operators.
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::ostream;
using std::istream;

#include <iomanip>

using std::setw;

// PhoneNumber class definition
class PhoneNumber {
	friend ostream &operator<<(ostream&, const PhoneNumber &);
	friend istream &operator>>(istream&, PhoneNumber &);
public:
	//PhoneNumber operator++ (PhoneNumber);
	bool operator==( PhoneNumber ) ;
public:
	int areaCode;  // 3-digit area code and null 604	
	int exchange;  // 3-digit exchange and null  558
	int line;      // 4-digit line and null		 8727

}; // end class PhoneNumber
bool PhoneNumber::operator==( PhoneNumber right) 
{
	if (areaCode == right.areaCode &&
		exchange == right.exchange &&
		line == right.line)
	{
		return true;
	}
	else
	{
		return false;
	}
}
// overloaded stream-insertion operator; cannot be 
// a member function if we would like to invoke it with
// cout << somePhoneNumber;
ostream &operator<<(ostream &output, const PhoneNumber &num)
{
	output << "(" << num.areaCode << ") "
		<< num.exchange << "-" << num.line;

	return output;     // enables cout << a << b << c; Cascading 

} // end function operator<< 

// overloaded stream-extraction operator; cannot be 
// a member function if we would like to invoke it with
// cin >> somePhoneNumber;
istream &operator>>(istream &input, PhoneNumber &num)
{


	//input.ignore();                     // skip (
	input >>num.areaCode; // input area code
	//input.ignore(2);                  // skip ) and space
	input >> num.exchange; // input exchange
	//input.ignore();                     // skip dash (-)
	input >> num.line;     // input line

	return input;      // enables cin >> a >> b >> c;

} // end function operator>> 

int main()
{
	PhoneNumber Phone1, Phone2; // create object phone
	Phone1.areaCode = 0;
	Phone1.exchange = 0;
	Phone1.line  = 0;
	Phone2.areaCode = 0;
	Phone2.exchange = 0;
	Phone2.line = 0;

	cout << "Enter phone1 number in the form (123) 456-7890:\n";
	
	// cin >> phone invokes operator>> by implicitly issuing
	// the non-member function call operator>>( cin, phone )

	cin >> Phone1.areaCode >> Phone1.exchange >> Phone1.line;
	cout << "Enter phone1 number in the form (123) 456-7890:\n";
	cin >> Phone2.areaCode >> Phone2.exchange >> Phone2.line;
	cout << "The phone1 entered as: ";
	cout << Phone1 << endl;
	
	cout << "The phone2 entered as: ";
	// cout << phone invokes operator<< by implicitly issuing 
	// the non-member function call operator<<( cout, phone )
	cout << Phone2 << endl;

	if (Phone1 == Phone2)
	{
		cout << "Phone1 and Phone2 are Equal" << endl;
	}
	else
	{
		cout << "Phone1 and Phone2 are NOT Equal" << endl;

	}

	return 0;

} // end main

/**************************************************************************
* (C) Copyright 1992-2003 by Deitel & Associates, Inc. and Prentice      *
* Hall. All Rights Reserved.                                             *
*                                                                        *
* DISCLAIMER: The authors and publisher of this book have used their     *
* best efforts in preparing the book. These efforts include the          *
* development, research, and testing of the theories and programs        *
* to determine their effectiveness. The authors and publisher make       *
* no warranty of any kind, expressed or implied, with regard to these    *
* programs or to the documentation contained in these books. The authors *
* and publisher shall not be liable in any event for incidental or       *
* consequential damages in connection with, or arising out of, the       *
* furnishing, performance, or use of these programs.                     *
*************************************************************************/
