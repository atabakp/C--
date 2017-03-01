#pragma once
#include <exception>
using namespace std;
struct NegativeEntryException : public exception {
	const char * what() const throw () {
		return "Negative value";
	}
};
struct InvalidDayEntryException : public exception {
	const char * what() const throw () {
		return "Invalid value for Day";
	}
};
struct InvalidMonthEntryException : public exception {
	const char * what() const throw () {
		return "Invalid value for Month";
	}
};
struct InvalidYearEntryException : public exception {
	const char * what() const throw () {
		return "Invalid value for Year";
	}
};