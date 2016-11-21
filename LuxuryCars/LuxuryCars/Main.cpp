#include <iostream>
#include <string>
#include "LuxuryCars.h"
#include "Mercedes.h"
#include "GLE.h"
#include "C.h"
#include "X.h"
#include "Seven.h"
using namespace std;

void main()
{
	GLE *GLEobj = new GLE();
	GLEobj->SetVin(1);
	GLEobj->SetMake("Mercedes");
	GLEobj->SetModel("GLE 500");
	GLEobj->SetColor("White");
	GLEobj->SetYear(2016);
	GLEobj->SetMSRP(62000);
	GLEobj->SetInterestRate(3);
	GLEobj->SetType("SUV");
	C *Cobj = new C();
	Cobj->SetVin(2);
	Cobj->SetMake("Mercedes");
	Cobj->SetModel("C 300");
	Cobj->SetColor("Black");
	Cobj->SetYear(2016);
	Cobj->SetMSRP(42000);
	Cobj->SetInterestRate(4);
	Cobj->SetType("Sedan");
	X * Xobj = new X();
	Xobj->SetVin(2);
	Xobj->SetMake("BMW");
	Xobj->SetModel("X6");
	Xobj->SetColor("Gray");
	Xobj->SetYear(2016);
	Xobj->SetMSRP(92000);
	Xobj->SetInterestRate(6);
	Xobj->SetType("SUV");
	Seven * Sevenobj = new Seven();
	Sevenobj->SetVin(2);
	Sevenobj->SetMake("BMW");
	Sevenobj->SetModel("X6");
	Sevenobj->SetColor("Gray");
	Sevenobj->SetYear(2016);
	Sevenobj->SetMSRP(92000);
	Sevenobj->SetInterestRate(6);
	Sevenobj->SetType("SUV");
	// Showing Dynamic Binding 
	// Casting childers to highest level father 
	LuxuryCars * LC[4];
	LC[0] = GLEobj;
	LC[1] = Cobj;
	LC[2] = Xobj;
	LC[3] = Sevenobj;

	for (int i = 0; i <= 3; i++)
	{

		cout << "This Vehicle is a " << LC[i]->GetModel() << endl;
		//cout << "Vehicle Type: " << LC[i]->GetType() << endl;
		cout << "Vin Number:" << LC[i]->GetVin() << endl;
		LC[i]->SetPaymentMethod("Purchase");
		LC[i]->Payment(LC[i]->GetPaymentMethod());
		LC[i]->SetPaymentMethod("Lease");
		LC[i]->Payment(LC[i]->GetPaymentMethod());
		LC[i]->SetPaymentMethod("Finance");
		LC[i]->Payment(LC[i]->GetPaymentMethod());
	}
}