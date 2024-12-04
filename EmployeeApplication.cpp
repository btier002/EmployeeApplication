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

std::string generateUniqueID(std::unordered_map<std::string, std::string>& employeeMap) {
	std::random_device rd;  // Seed for random number generator
	std::mt19937 gen(rd()); // Mersenne Twister RNG
	std::uniform_int_distribution<long long> dist(1000000000LL, 9999999999LL); // Range for 10-digit numbers

	std::string uniqueID;
	do {
		uniqueID = std::to_string(dist(gen));
	} while (employeeMap.find(uniqueID) != employeeMap.end());

	return uniqueID;
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
			if (command == "register") {
				std::fstream fout("EmployeeLogs.csv", std::ios::out | std::ios::app);  // Declare fout once
				if (!fout) {
					std::cerr << "Error: Unable to open the file for writing." << std::endl;
					continue;
				}

				string name;
				cout << "Enter your Full Name: ";
				std::getline(cin >> std::ws, name);  // Ensures entire name is captured

				std::string uniqueID = generateUniqueID(employeeMap);
				
				// Write to the file
				fout << uniqueID << "," << name << "\n";

				fout.close();  // Close the file after writing
				cout << "Employee registered successfully with ID: " << uniqueID << endl;
			}

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

