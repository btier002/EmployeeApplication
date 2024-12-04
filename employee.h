#pragma once

class Employee {
private:
	std::string employeeName, employeeAddress, employeeCompanyPosition, employeeHireDate;
	std::int16_t employeePay, employeeUserID, employeePhoneNumber, employeeAge;

public:
	// Constructor
	Employee(std::string & employeeName, int16_t& employeeUserID) {
		employeeAddress = "";
		employeeAge = 0;
		employeeCompanyPosition = "employee";
		employeeHireDate = "";
		employeePay = 0;
		employeePhoneNumber = 0;
	}
	// Getter Methods
	std::string getEmployeeName() {
		return employeeName;
	}

	std::string getEmployeeAddress() {
		return employeeAddress;
	}

	std::int16_t getEmployeePhoneNumber() {
		return employeePhoneNumber;
	}

	std::int16_t getEmployeeAge() {
		return employeeAge;
	}
	
	std::string getEmployeeCompanyPosition() {
		return employeeCompanyPosition;
	}

	std::int16_t getEmployeeUserID() {
		return employeeUserID;
	}

	std::string getEmployeeHireDate() {
		return employeeHireDate;
	}

	std::int16_t getEmployeePay() {
		return employeePay;
	}



	// Methods



	//Destructor
	~Employee() 
	{
		std::cout << "\nDestructor executed";
	}


};





