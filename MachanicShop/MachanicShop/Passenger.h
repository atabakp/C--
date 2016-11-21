#pragma once
#include "Vehicle.h"

	class Passenger :public Vehicle {
	private:
		string type;
		int noOfPassengers;
	public:
		Passenger(int vin, string make, string model, string color, string type, int noOfPassengers);
		Passenger();
		~Passenger();

		void setType(string val);
		string getType();

		void setNoOfPassengers(int val);
		int getNoOdPassengers();






	};
