 #include "Node.h"
 #include <iostream>
 #include "List.h"
 
 using namespace std;
 void append();
 void prepend();
 void assign();
 void compareE();
 void compareNE();
 void increment();
 void concatenate();
 void deleteDuplicate();
 
 List *list1, *list2;
 
 int main() {
 	list1 = new List();
 	list2 = new List();


 	int Choice;
 	Choice = 1;
 	while (Choice >= 0 && Choice <= 9)
 	{
 		
 		printf("%s\n", "1- Append to list");
 		printf("%s\n", "2- Prepend to list");
 		printf("%s\n", "3- Assign to new list (= operator)");
 		printf("%s\n", "4- Compare two lists (== operator)");
 		printf("%s\n", "5- Compare two lists (!= operator)");
 		printf("%s\n", "6- Increment list (++ operator)");
 		printf("%s\n", "7- concatenate two lists (+ operator)");
 		printf("%s\n", "8- Delete duplicate members(- operator)");
 		printf("%s\n", "9- Exit");
 		printf("%s", "Please enter your choice (1 to 10): ");
 		scanf("%d", &Choice);
 		switch (Choice)
 		{
 		case 1:
 			append();
 			break;
 		case 2:
 			prepend();
 			break;
 		case 3:
 			assign();
 			break;
 		case 4:
 			compareE();
 			break;
 		case 5:
 			compareNE();
 			break;
 		case 6:
 			increment();
 			break;
 		case 7:
 			concatenate();
 			break;
 		case 8:
 			deleteDuplicate();
 			break;
 		
 	
 		}
 	}
 	return 0;
 
 }
 void append() {
 	
 	int choice =1;
 	while (choice > 0 && choice <= 2) {
 		cout << "---------------------------------"<<endl;
 		cout << "List 1: " << *list1 << endl;
 		cout << "List 2: " << *list2 << endl << endl;
 		printf("%s\n", "1- Append to list 1");
 		printf("%s\n", "2- Append to list 2");
 		printf("%s\n", "0- Exit to menu");
 		cout << ":";
 		choice = 0;
 		scanf("%d", &choice);
 		if (choice == 1) {
 			int i;
 			cout << "Enter an integer:";
 			scanf("%d", &i);
 			list1->append(i);
 		}
 		if (choice == 2) {
 			int i;
 			cout << "Enter an integer:";
 			scanf("%d", &i);
 			list2->append(i);
 		}
 	}
 }
 void prepend() {
 	
 	int choice = 1;
 	while (choice > 0 && choice <= 2) {
 		cout << "---------------------------------"<<endl;
 		cout << "List 1: " << *list1 << endl;
 		cout << "List 2: " << *list2 << endl << endl;;
 		printf("%s\n", "1- Prepend to list 1");
 		printf("%s\n", "2- Prepend to list 2");
 		printf("%s\n", "0- Exit to menu");
 		cout << ":";
 		choice = 0;
 		scanf("%d", &choice);
 		if (choice == 1) {
 			int i;
 			cout << "Enter an integer:";
 			scanf("%d", &i);
 			list1->prepend(i);
 		}
 		if (choice == 2) {
 			int i;
 			cout << "Enter an integer:";
 			scanf("%d", &i);
 			list2->prepend(i);
 		}
 	}
 }
 void assign() {
 	List *newList;
 	
 	int choice = 1;
 	
 	while (choice == 1 || choice == 2) {
 	cout << "---------------------------------"<<endl;
 	cout << "List 1: " << *list1 << endl;
 	cout << "List 2: " << *list2 << endl;
 	printf("%s\n", "1- Assign list 1 to newList (newList = List1)");
 	printf("%s\n", "2- Assign list 2 to newList (newList = List2)");
 	printf("%s\n", "0- Exit to menu");
 	cout << ":";
 	scanf("%d", &choice);
 		if (choice == 1) {
 			newList = list1;
 			cout << "New List: " << *newList << endl;
 			
 		}else
 		if (choice == 2){
 			newList = list2;
 			cout << "New List: " << *newList << endl;
 			
 			
 		}
 	}	
 	cout << "Newlist: " << *newList << endl;
 }
 
 void compareE() {
 	if (list1 == list2) 
 		cout<< endl<< "List1 is Equal to List2" << endl<<endl;
 	else
 		cout <<endl<< "List1 is NOT Equal to List2" <<endl<< endl;
 	
 
 
 }
 void compareNE() {
 	if (list1 != list2) 
 		cout << endl<<"List1 is NOT Equal to List2" << endl<<endl;
 	else
 		cout <<endl<< "List1 is Equal to List2" << endl<<endl;
 	
 	
 }
 void increment() {
 	
 	int choice = 1;
 	while (choice > 0 && choice <= 2) {
 		cout << "---------------------------------"<<endl;
 		cout << "List 1: " << *list1 << endl;
 		cout << "List 2: " << *list2 << endl<<endl;
 		printf("%s\n", "1- Increment list 1");
 		printf("%s\n", "2- Increment list 2");
 		printf("%s\n", "0- Exit to menu");
 		cout << ":";
 		choice = 0;
 		scanf("%d", &choice);
 		if (choice == 1) {
 			(*list1)++;
 			
 		}
 		if (choice == 2) {
 			(*list2)++;
 		}
 	}
 
 }
 
 void concatenate() {
 	int choice = 1;
 	while (choice > 0 && choice <= 2) {
 		cout << "---------------------------------"<<endl;
 		cout << "List 1: " << *list1 << endl;
 		cout << "List 2: " << *list2 << endl<<endl;
 		printf("%s\n", "1- List1 + List2");
 		printf("%s\n", "2- List2 + List1");
 		printf("%s\n", "0- Exit to menu");
 		cout << ":";
 		choice = 0;
 		scanf("%d", &choice);
 		if (choice == 1) {
			cout << "---------------------------------" << endl;
 			cout <<"Result: " << *list1 + *list2 << endl;
 		}
 		if (choice == 2) {
			cout << "---------------------------------" << endl;
 			cout << "Result: " <<(*list2 + *list1) << endl;
 		}
 	}
 }
 void deleteDuplicate() {
 	int choice = 1;
 	while (choice > 0 && choice <= 2) {
 		cout << "---------------------------------"<<endl;
 		cout << "List 1: " << *list1 << endl;
 		cout << "List 2: " << *list2 << endl << endl;;
 		printf("%s\n", "1- List1 - List2");
 		printf("%s\n", "2- List2 - List1");
 		printf("%s\n", "0- Exit to menu");
 		cout << ":";
 		choice = 0;
 		scanf("%d", &choice);
 		if (choice == 1) {
			cout << "---------------------------------" << endl;
 			cout << "Result: " << (*list1 - *list2) << endl;
 		}
 		if (choice == 2) {
			cout << "---------------------------------" << endl;
 			cout << "Result: " << (*list2 - *list1) << endl;
 		}
 	}
 }
 	
 
 
