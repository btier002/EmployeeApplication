#pragma once

#include <string>  // Ensure the header is included

class Employee {
private:
    std::string employeeName, employeeAddress, employeePhoneNumber, employeeAge, employeeCompanyPosition, employeeUserID, employeeHireDate, employeePay;

public:
    // Constructor with fixed std::string usage
    Employee(std::string& employeeName, std::string& employeeAddress, std::string& employeePhoneNumber, std::string& employeeAge, std::string& employeeCompanyPosition, std::string& employeeUserID, std::string& employeeHireDate, std::string& employeePay)
        : employeeName(employeeName), employeeAddress(employeeAddress), employeePhoneNumber(employeePhoneNumber), employeeAge(employeeAge), employeeCompanyPosition(employeeCompanyPosition), employeeUserID(employeeUserID), employeeHireDate(employeeHireDate), employeePay(employeePay) {}

    // Getter methods
    std::string getEmployeeName() {
        return employeeName;
    }

    std::string getEmployeeAddress() {
        return employeeAddress;
    }

    std::string getEmployeePhoneNumber() {
        return employeePhoneNumber;
    }
};


	// Methods







