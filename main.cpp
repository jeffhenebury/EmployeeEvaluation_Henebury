// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//#include "Employee.h"; //don't need b/c it's inherited within manager.h
#include "Manager.h";
#include "AllEmployeesVector.h";


using namespace std;

int main()
{
    Employee employee1("John", "Smith", 3, "John is a pretty good guy, but I'm pretty sure he's stealing lunches out the fridge.", 60000.00);
    //Employee* pEmployee1 = &employee1;
    //using printvalues, pointing to employee1
    //pEmployee1->PrintValues();
    Employee employee2("Adam", "Brown", 1, "Adam is just so, so bad at his job.", 80000.00);

    
    Manager manager1("Assistant Manager", "Electronics", "Jane", "Doe", 5, "Jane is good at her job.TOO good; she makes me look bad.Fire her!", 80000.00);
    Manager manager2("Senior Manager", "Electronics", "Derrick", "McPhee", 2, "Derrick owes me five bucks!", 90000.00);

    //manager1.PrintValues();


    //create 2 vectors, 1 for employees and 1 for managers
    //then print both vectors using for loops
    vector <Employee> allEmployees;
    //AllEmployeesVector allEmployees(tempVec);
    allEmployees.push_back(employee1);
    allEmployees.push_back(employee2);
    vector<Manager> allManagers;
    allManagers.push_back(manager1);
    allManagers.push_back(manager2);
    cout << "\nPrinting all Employees...\n";
    for (int i = 0; i < allEmployees.size(); i++) {
        allEmployees[i].PrintValues();
    }
    cout << "\nPrinting all Managers...\n";
    for (int i = 0; i < allManagers.size(); i++) {
        allManagers[i].PrintValues();
    }
    //delete pEmployee1;

    //put the vector into a class so we can run custom functions on it
    AllEmployeesVector empChecker(allEmployees);
    empChecker.EvaluationScoreFinder();

    //evaluation finder...
    //int answer;
    //while (1) { //infinite loop, break if input is good
    //    cout << "\nWhat level of evaluation score would you like to see? Enter here: ";
    //    if (cin >> answer && (answer > 0) && (answer <= 5)) {
    //        // valid number, get out of the inner while loop, iterate
    //        cout << "\nTEST, Input number is: " << answer << endl;
    //        break;
    //    }
    //    else {
    //        // not a valid number
    //        cout << "Invalid Input! Please input a numerical value 1-5." << endl;
    //        cin.clear();    //clear inputted value
    //        while (cin.get() != '\n'); // empty the loop, start over
    //    }
    //}
    //cout << "\n\nPrinting all employee specs that match that Efficiency Rating...\n";
    //for (int i = 0; i < allEmployees.size(); i++) {
    //    if (allEmployees[i].getEfficiencyRating() == answer) {
    //        allEmployees[i].PrintValues();
    //    }
    //}

}
