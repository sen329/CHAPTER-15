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
	void print();
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
	void print();
};



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

void ProductionWorker::print(){
	cout << "Employee name: "<<getname()<<endl;
	cout << "Employee Number: "<< getnumber()<<endl;
	cout << "Employee hired date: "<<getdate()<<endl;
	cout << "Shift: "<<getshift();
	
	if (shift == 1){
		cout << "Day shift"<<endl;
		cout << "Pay rate: $"<< gethourlypayrate()<<endl;
	}
	else if(shift == 2){
		cout << "Night shift"<<endl;
		cout << "Pay rate: $"<< gethourlypayrate()<<endl;
	}
	else {
		cout << "Invalid shift"<<endl;
	}
}

int main(){
	int shift;
	double pay;
	cout << "Enter shift 1 for day shift or 2 for night shift: "<<endl;
	cin >> shift;
	cout << "Enter hourly pay: ";
	cin >> pay;
	
	ProductionWorker empl1(shift, pay);
	empl1.setname("HANSSEN");
	empl1.setnumber(743754);
	empl1.setdate(3-2-2005);
	empl1.print();
	return 0;
}



