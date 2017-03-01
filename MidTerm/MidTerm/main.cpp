#include "List.h"
Car* createNewCar();
void editCar();
TechInfo* createTechInfo();
List *list = new List();
int main() {

	
	int index = 0;
	int Choice;
	Choice = 1;
	while (Choice > 0 && Choice <= 4)
	{

		printf("%s\n", "1- Add new car");
		printf("%s\n", "2- Edit car");
		printf("%s\n", "3- Delete car");
		printf("%s\n", "4- Print list");
		printf("%s\n", "0- Exit");
		printf("%s", "Please enter your choice (0 to 4): ");
		scanf("%d", &Choice);
		switch (Choice)
		{
		case 1:
			list->append(createNewCar());
			break;
		case 2:
			editCar();
			break;
		case 3:
			cout << *list;
			cout << "Enter the index of Car you want to delete: ";
			cin >> index;
			list->deleteNode(list->atIndex(index-1));
			break;
		case 4:
			cout << endl<< *list << endl;
			break;
		default:
			break;
		}
	}
	return 0;
}

Car* createNewCar() {

	Car* newcar = new Car();

	string str;
	int num =0;
	cout << "Enter VIN: ";
	cin >> num;
	newcar->setVIN(num);
	cout << "Enter Make: ";
	cin >> str;
	newcar->setMake(str);
	cout << "Enter Model: ";
	cin >> str;
	newcar->setModel(str);
	cout << "Enter Color: ";
	cin >> str;
	newcar->setColor(str);
	cout << "Enter year: ";
	cin >> num;
	newcar->setYear(num);
	newcar->setTechInfo(*createTechInfo());

	return newcar;

}
TechInfo* createTechInfo() {

	TechInfo* info = new TechInfo();

	int vol, hp, noc = 0;
	cout << "Enter the horsepower: ";
	cin >> hp;
	info->setHorsepower(hp);
	cout << "Enter No of Cylinders: ";
	cin >> noc;
	info->setNoOfCylinders(noc);
	cout << "Enter Volume: ";
	cin >> vol;
	info->setVolume(vol);
	
	return info;
}

void editCar() {
	cout << *list;
	int index = 1;
	cout << " Select a car's index to edit:";
	cin >> index;
	Car *car;
	car = list->atIndex(index - 1)->getData();
	car->print();
	cout << "6-" << "Technical info: " << endl;
	int opt = 0;
	int opt2 = 0;
	cout << "Enter the index of the property you want to edit: ";
	cin >> opt;
	int newint;
	string newstr;
	switch (opt)
	{
	case 1:
		cout << "Enter new value: ";
		cin >> newint;
		car->setVIN(newint);
		break;
	case 2:
		cout << "Enter new value: ";
		cin >> newstr;
		car->setMake(newstr);
		break;
	case 3:
		cout << "Enter new value: ";
		cin >> newstr;
		car->setModel(newstr);
		break;
	case 4:
		cout << "Enter new value: ";
		cin >> newstr;
		car->setColor(newstr);
		break;
	case 5:
		cout << "Enter new value: ";
		cin >> newint;
		car->setYear(newint);
		break;
	case 6:
		car->getTechInfo().print();
		cout << "Enter the index of the property you want to edit: ";
		cin >> opt2;
		int newint;
		switch (opt2)
		{
		case 1:
			cout << "Enter new value: ";
			cin >> newint;
			car->getTechInfo().setNoOfCylinders(newint);
			break;
		case 2:
			cout << "Enter new value: ";
			cin >> newint;
			car->getTechInfo().setHorsepower(newint);
			break;
		case 3:
			cout << "Enter new value: ";
			cin >> newint;
			car->getTechInfo().setVolume(newint);
			break;
		default:
			break;
		}
		break;
	default:
		break;
	}

}
