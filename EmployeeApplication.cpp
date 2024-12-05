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
#include <time.h>


#include "employee.h"

using namespace std;

// Reads the employee log file
std::unordered_map<std::string, std::string> readEmployeeLogs(const std::string& filename) {
	std::unordered_map<std::string, std::string> employeeMap;
	std::ifstream file(filename);
	std::string line;

	while (std::getline(file, line)) {
		std::stringstream ss(line);
		std::string name, userID, address, phoneNumber, age, companyPosition, hireDate, pay, hourlyPay; // Reads the csv file containing these / 7 different attributes
		// Do , ',', except for last getline
		std::getline(ss, userID, ',');
		std::getline(ss, name, ',');
		std::getline(ss, phoneNumber, ',');

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

int main() {
	int stateMachine1 = 0;
	int stateMachine2 = 0;
	std::unordered_map<std::string, std::string> employeeMap;
	// Starting a while true to then look for commands entered through the line.
	while (stateMachine1 == 0 && stateMachine2==0) {
		string command;
		cout << "Awaiting initial command (timeclock/admin,exit)";
		cin >> command;
		if (command == "timeclock") {
			stateMachine1 = 1;
			break;
		}
		if (command == "admin") {
			stateMachine2 = 1;
			break;
		}
		employeeMap = readEmployeeLogs("employeelog.txt");
		if (command == "exit") {
			break;
		}
	}
	while (stateMachine1==1 && stateMachine2==0) {
		
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
			// Generates userID
			std::fstream fout("EmployeeLogs.txt", std::ios::out | std::ios::app);  // Declare fout once
			if (!fout) {
				std::cerr << "Error: Unable to open the file for writing." << std::endl;
				continue;
			}

			string name;
			cout << "Enter your Full Name: ";
			std::getline(cin >> std::ws, name);  // Ensures entire name is captured

			std::string uniqueID = generateUniqueID(employeeMap);

			// Write to the file
			fout << name << "," << uniqueID << "\n";

			fout.close();  // Close the file after writing
			cout << "Employee registered successfully with ID: " << uniqueID << endl;

		} else if (command == "login") {
			//User enters login code, if login code matches what is in the file then user is logged on, else it will give error.
			  
		}

	}

	// Admin control
	while (stateMachine1 == 0 && stateMachine2 == 1) {
		string command;
		cout << "Awaiting an admin command(edit, exit)";
		cin >> command;
		if (command == "exit") {
			break;
		}

	}

	return 0;
}

