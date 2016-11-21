#include "Phone.h"
#include <iostream>
using namespace std;

Phone::Phone()
{
}


Phone::~Phone()
{
}

void Phone::PlaceCall(int number)
{
	cout << "Calling " << number << endl;
}

void Phone::ReceiveCall()
{
	cout << "Receiving Call " << endl;
}

void Phone::setVoicevolume(int val)
{
	this->volume = val;
}

void Phone::Declinecall()
{
	cout << "Declining Call " << endl;
}

std::string Phone::ServiceName()
{
	return "Phone";
}
