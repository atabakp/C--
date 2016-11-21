#pragma once
#include <string>
using namespace std;
class Services {

public:
	virtual string ServiceName() = 0;
	virtual bool UseKeyboard() = 0;
	virtual string can();


};