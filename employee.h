#pragma once

class Employee {
private:
	std::string employeeName, employeeAddress, employeePhoneNumber, employeeAge, employeeCompanyPosition, employeeUserID, employeeHireDate, employeePay;

public:
	// Constructor
	Employee(std::string& employeeName, string& employeeAddress, string& employeePhoneNumber, string& employeeAge, string& employeeCompanyPosition, string& employeeUserID, string& employeeHireDate, string& employeePay) : employeeName(employeeName), employeeAddress(employeeAddress), employeePhoneNumber(employeePhoneNumber), employeeAge(employeeAge), employeeCompanyPosition(employeeCompanyPosition), employeeUserID(employeeUserID), employeeHireDate(employeeHireDate), employeePay(employeePay) {}

	// Getter Methods
	std::string getEmployeeName() {
		return employeeName;
	}

	std::string getEmployeeAddress() {
		return employeeAddress;
	}

	std::string getEmployeePhoneNumber() {
		return employeePhoneNumber;
	}

	// Methods


};





