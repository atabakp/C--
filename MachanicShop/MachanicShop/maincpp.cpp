#include "Passenger.h"
#include <iostream>
#include "Vehicle.h"
#include "Truck.h"
#include "HDtruck.h"
#include "Pickup.h"
using namespace std;

	void main() {
		Vehicle Vehicleobj = Vehicle(710702, "BMW", "325", "black");

		cout << "Vehicle object: " << endl;
		cout << "VIN: " << Vehicleobj.getVin() << endl;
		cout << "Make: " << Vehicleobj.getMake() << endl;
		cout << "Model: " << Vehicleobj.getModel() << endl;
		cout << "Color: " << Vehicleobj.getColor() << endl<<endl;

		Passenger  Passengerobj =  Passenger(710702,"BMW","325","black","Sedan",4);

		cout << "passenger object(child of Vehicle):" << endl;
		cout << "VIN: " << Passengerobj.getVin() << endl;
		cout << "Make: " << Passengerobj.getMake() << endl;
		cout << "Model: " << Passengerobj.getModel() << endl;
		cout << "Color: " << Passengerobj.getColor() << endl;
		cout << "Type: " << Passengerobj.getType() << endl;
		cout << "No of Psassengers: " << Passengerobj.getNoOdPassengers() << endl<<endl;

		Truck truckobj = Truck(1234, "Volvo", "VNM", "white", "quad", 1000, true);

		cout << "Truck object(Child of Vehicle):" << endl;
		cout << "VIN: " << truckobj.getVin() << endl;
		cout << "Make: " << truckobj.getMake() << endl;
		cout << "Model: " << truckobj.getModel() << endl;
		cout << "Color: " << truckobj.getColor() << endl;
		cout << "Cabin size: " << truckobj.getCabSize() << endl;
		cout << "Power: " << truckobj.getHorsepower() << endl;
		cout << "Has Winch: " << truckobj.getHasWinch() << endl<<endl;

		HDTruck HDtruckobj = HDTruck(222, "Volvo", "D11", "white", "double", 1200, false, 10, 18);

		cout << "Heavy Duty Truck object(Child of Truck & grandchild of Vehicle):" << endl;
		cout << "VIN: " << HDtruckobj.getVin() << endl;
		cout << "Make: " << HDtruckobj.getMake() << endl;
		cout << "Model: " << HDtruckobj.getModel() << endl;
		cout << "Color: " << HDtruckobj.getColor() << endl;
		cout << "Cabin Size: " << HDtruckobj.getCabSize() << endl;
		cout << "Power: " << HDtruckobj.getHorsepower() << endl;
		cout << "Has Winch: " << HDtruckobj.getHasWinch() << endl;
		cout << "Tonnage: " << HDtruckobj.getTonnage() << endl;
		cout << "No of Wheels: " << HDtruckobj.getNoOfWheels() << endl <<endl;

		Pickup Pickupobj = Pickup(3333,"Nissan","blue","blue","double",800,true,"no usage!",4);

		cout << "Pickup object(Child of Vehicle):" << endl;
		cout << "VIN: " << Pickupobj.getVin() << endl;
		cout << "Make: " << Pickupobj.getMake() << endl;
		cout << "Model: " << Pickupobj.getModel() << endl;
		cout << "Color: " << Pickupobj.getColor() << endl;
		cout << "Cabin size: " << Pickupobj.getCabSize() << endl;
		cout << "Power: " << Pickupobj.getHorsepower() << endl;
		cout << "Has Winch: " << Pickupobj.getHasWinch() << endl;
		cout << "Usage: " << Pickupobj.getUsage() << endl;
		cout << "Lenght: " << Pickupobj.getLenght() << endl;


	}
