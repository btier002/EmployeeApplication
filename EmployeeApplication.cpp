// EmployeeApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <map>
#include <random>
#include <unordered_map>
#include <string>
#include <regex>
#include <sstream>

#include "employee.h"

using namespace std;

// Reads the employee log file
std::unordered_map<std::string, std::string> readEmployeeLogs(const std::string& filename) {
	std::unordered_map<std::string, std::string> employeeMap;
	std::ifstream file(filename);
	std::string line;

	while (std::getline(file, line)) {
		std::stringstream ss(line);
		std::string name, address, phoneNumber, age, companyPosition, userID, hireDate, pay; // Reads the csv file containing these / 7 different attributes
		// Do , ',', except for last getline
		std::getline(ss, userID, ',');
		std::getline(ss, name, ',');
		// Etc...

		// Then normalize phone number or other things...
	}
	return employeeMap;
}

void registerFunc() {
	// Register function
}

int main() {
	std::unordered_map<std::string, std::string> employeeMap;
	// Starting a while true to then look for commands entered through the line.
	while (true) {
		
		string command;
		cout << "Awaiting a start command (login,register,logout,)";
		cin >> command;
		// Read the Employee Log file
		employeeMap = readEmployeeLogs("employeelog.txt");

		// A stop condition for testing
		if (command == "exit") {
			break;
		}
		// Register
		if (command == "register") {
			string name;
			string uniqueID;
			fstream fout;
			fout.open("EmployeeLogs.txt", ios::out | ios::app);

			// Generates userID
			


			// Entering name
			cout << "Enter your FullName: ";
			cin >> name;
			fout << name << ",";

		} else if (command == "login") {
			//User enters login code, if login code matches what is in the file then user is logged on, else it will give error.

		}
	}

	return 0;
}

