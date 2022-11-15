#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <iostream>
#include <vector> // using vector from the stl library

using namespace std;

class Employee
{

protected:
	string firstName;
	string lastName;
	int efficiencyRating;
	string notes;
	double salary;
public:

	Employee(string firstn, string lastn, int efficRtg, string nts, double slry)
	{
		firstName = firstn;
		lastName = lastn;
		efficiencyRating = efficRtg;
		notes = nts;
		salary = slry;
	}
	virtual ~Employee()	//virtual destructor
	{
		//cout << "TEST: Destructor for the Employee class\n";
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

	//need destructors

	virtual void PrintValues() const {
		cout << "First name: " << firstName << "\nLast Name: " << lastName <<
			"\nEfficiency Rating: " << efficiencyRating << "\nSalary: " << salary
			<< "\nNotes: " << notes <<endl;
	}

	////trying to make a function to take a number and search a vector for eval scores of that number
	//virtual void EvaluationScoreFinder(vector <Employee> allEmployees) {
	//	int answer;
	//	while (1) { //infinite loop, break if input is good
	//		cout << "\nWhat level of evaluation score would you like to see? Enter here: ";
	//		if (cin >> answer && (answer > 0) && (answer <= 5)) {
	//			// valid number, get out of the inner while loop, iterate
	//			cout << "\nTEST, Input number is: " << answer << endl;
	//			break;
	//		}
	//		else {
	//			// not a valid number
	//			cout << "Invalid Input! Please input a numerical value 1-5." << endl;
	//			cin.clear();    //clear inputted value
	//			while (cin.get() != '\n'); // empty the loop, start over
	//		}
	//	}
	//	cout << "\n\nPrinting all employee specs that match that Efficiency Rating...\n";
	//	for (int i = 0; i < allEmployees.size(); i++) {
	//		if (allEmployees[i].getEfficiencyRating() == answer) {
	//			allEmployees[i].PrintValues();
	//		}
	//	}
	//}

};
#endif // !EMPLOYEE_H
