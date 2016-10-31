#include <iostream>
#include <string>
using namespace std;

class Employee{
protected:
	string name;
	int number;
	int date;
public: 
	Employee(string name, int number, int date);
	string getname();
	int getnumber();
	int getdate();
	void setname(string);
	void setnumber(int);
	void setdate(int);
};

class ProductionWorker:public Employee{
private:
	int shift;
	double hourlypayrate;
public: 
	ProductionWorker(int shift, double hourlypayrate);
	void setshift(int);
	int getshift();
	void sethourlypayrate(double);
	int gethourlypayrate();
};

Employee::Employee(string name, int number, int date){
	this -> name = name;
	this -> number = number;
	this -> date = date;
}


string Employee::getname(){
	return name;
}

int Employee::getnumber(){
	return number;
}

int Employee::getdate(){
	return date;
}

void Employee::setname(string name){
	this -> name= name;
}

void Employee::setnumber(int number){
	this -> number= number;
}

void Employee::setdate(int date){
	this -> date= date;
} 

ProductionWorker::ProductionWorker(int shift, double hourlypayrate){
	this -> shift = shift;
	this -> hourlypayrate = hourlypayrate;
}

void ProductionWorker::setshift(int shift){
	this -> shift = shift;
}

void ProductionWorker::sethourlypayrate(double sethourlypayrate){
	this -> hourlypayrate = hourlypayrate;
}

int ProductionWorker::gethourlypayrate(){
	return hourlypayrate;
}

int ProductionWorker::getshift(){
	return shift;
}

int main(){
	string name;
	int number, date, shift;
	double hourlypayrate;
	char answer;
	
do{
	
	cout << "Employee name: "<<endl;
	cin >> name;
	
	cout << "Employee number: "<<endl;
	cin >> number;
	
	cout << "Employee employed date: "<<endl;
	cin >> date;
	
	cout << " Employee shift: "<<endl;
	cin >> shift;
	if (shift <0 || shift >2){
		cout << "only shift 1 and 2 are allowed";
		cin >> shift;
	}
	
	cout << "Employee hourly pay rate: ";
	cin >> hourlypayrate;
	
	
	Employee employeeA = Employee(name, number, date);
	ProductionWorker prodWorA= ProductionWorker(shift, hourlypayrate);
	
	cout << "Employee name: \t" << employeeA.getname()<<endl;
	cout << "Employee number: \t" << employeeA.getnumber()<<endl;
	cout << "Employee employed date: \t" << employeeA.getdate()<<endl;
	cout << "Employee shift: \t" << prodWorA.getshift()<<endl;
	cout << "Employee hourly pay: \t"<<prodWorA.gethourlypayrate()<<endl;
	cout << "run program again? Y/N";
	cin >> answer;
}

while (answer == 'y' || answer == 'Y');

}


