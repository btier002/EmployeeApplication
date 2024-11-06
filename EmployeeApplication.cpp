// EmployeeApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <map>
#include <random>
#include <boost/uuid/uuid.h>

using namespace std;

int main() {
	
	//Starting a while true to then look for commands entered through the line.
	while (true) {
		string command;
		cout << "Awaiting a start command (login,register,logout,)";
		cin >> command;

		if (command == "register") {
			string name;
			string uniqueID;
			fstream fout;
			fout.open("EmployeeLogs.csv", ios::out | ios::app);

			cout << "Enter your FullName: ";
			cin >> name;
			fout << name <<","

		} else if (command == "login") {
			//User enters login code, if login code matches what is in the file then user is logged on, else it will give error.

		}
	}
}

