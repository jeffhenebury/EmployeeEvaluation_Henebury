#pragma once
#ifndef ALLEMPLOYEESVECTOR_H_
#define ALLEMPLOYEESVECTOR_H_
#include "Employee.h"

class AllEmployeesVector {
	//create 2 vectors, 1 for employees and 1 for managers
//then print both vectors using for loops

public:
	vector <Employee> allEmployees;

	AllEmployeesVector(){}	//default constructor?
	~AllEmployeesVector(){}	//default destructor?

	AllEmployeesVector(vector <Employee> allEmps) {
		allEmployees = allEmps;
	}

	//trying to make a function to take a number and search a vector for eval scores of that number
	virtual void EvaluationScoreFinder() {
		int answer;
		while (1) { //infinite loop, break if input is good
			cout << "\nWhat level of evaluation score would you like to see? Enter here: ";
			if (cin >> answer && (answer > 0) && (answer <= 5)) {
				// valid number, get out of the inner while loop, iterate
				cout << "\nTEST, Input number is: " << answer << endl;
				break;
			}
			else {
				// not a valid number
				cout << "Invalid Input! Please input a numerical value 1-5." << endl;
				cin.clear();    //clear inputted value
				while (cin.get() != '\n'); // empty the loop, start over
			}
		}
		cout << "\n\nPrinting all employee specs that match that Efficiency Rating...\n";
		for (int i = 0; i < allEmployees.size(); i++) {
			if (allEmployees[i].getEfficiencyRating() == answer) {
				allEmployees[i].PrintValues();
			}
		}
	}
};

#endif
