#pragma once
#ifndef MANAGER_H_
#define MANAGER_H_
//#include <string>
//#include <iostream>
#include "Employee.h"
using namespace std;

class Manager : public Employee {
protected:
	string title;
	string department;

public:
	Manager(string ttle, string deprtment, string firstn, string lastn, int efficRtg, string nts, double slry) :
		Employee(firstn, lastn, efficRtg, nts, slry) {
		title = ttle;
		department = deprtment;
	}

	virtual ~Manager()	//virtual destructor
	{
		//cout << "TEST: Destructor for the Manager class\n";
	}

	virtual string getFirstName() {
		return firstName;
	}
	virtual void setFirstName(string first) {
		firstName = first;
	}
	virtual string getLastName() {
		return lastName;
	}
	virtual void setLastName(string last) {
		lastName = last;
	}
	virtual double getSalary() {
		return salary;
	}
	virtual void setSalary(double slry) {
		salary = slry;
	}
	virtual int getEfficiencyRating() {
		return efficiencyRating;
	}
	virtual void setEfficiencyRating(int effic) {
		efficiencyRating = effic;
	}
	virtual void PrintValues() const {
		cout << "First name: " << firstName << "\nLast Name: " << lastName <<
			"\nEfficiency Rating: " << efficiencyRating << "\nSalary: " << salary
			<< "\nNotes: " << notes << "\nTitle: " << title << "\nDepartment: " << department << endl;
	}
};


#endif // !MANAGER_H_
