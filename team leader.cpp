#include <iostream>
#include <string>
using namespace std;

class Employee{
protected:
	string name;
	int number;
	string date;
public: 
	Employee();
	string getname();
	int getnumber();
	string getdate();
	void setname(string);
	void setnumber(int);
	void setdate(string);
	void print();
};

Employee::Employee(){
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

string Employee::getdate(){
	return date;
}

void Employee::setname(string name){
	this -> name= name;
}

void Employee::setnumber(int number){
	this -> number= number;
}

void Employee::setdate(string date){
	this -> date= date;
} 

class ProductionWorker:public Employee{
protected:
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

class ShiftSupervisor:public Employee{
private:
	int AnnualSalary;
	int AnnualProductionBonus;
public: 
	ShiftSupervisor(int AnnualSalary, int AnnualProductionBonus){
		this -> AnnualSalary = AnnualSalary;
		this -> AnnualProductionBonus = AnnualProductionBonus;
	}
	int getAnnualSalary();
	void setAnnualSalary(int);
	int getAnnualProductionBonus();
	void setAnnualProductionBonus(int);
	void print2();
};

void ShiftSupervisor::setAnnualSalary(int AnnualSalary){
	this -> AnnualSalary = AnnualSalary; 
}

void ShiftSupervisor::setAnnualProductionBonus(int AnnualProductionBonus){
	this -> AnnualProductionBonus = AnnualProductionBonus;
}

int ShiftSupervisor::getAnnualSalary(){
	return AnnualSalary;
}

int ShiftSupervisor::getAnnualProductionBonus(){
	return AnnualProductionBonus;
}

void ShiftSupervisor::print2(){
	cout << "Shift Supervisor salary"<<endl;
	cout << "Annual Salary: $"<<getAnnualSalary()<<endl;
	cout << "Annual Production Bonus: $" <<getAnnualProductionBonus()<<endl<<endl; 
}

class TeamLeader:public ProductionWorker{
private:
	int monthlybonus;
	int reqtrainhours;
	int trainhoursattend;
	string teamname;
public:
	TeamLeader(int reqtrainhours, int trainhoursattend, int monthlybonus):ProductionWorker(shift, hourlypayrate)
	{
		this -> reqtrainhours = reqtrainhours;
		this -> trainhoursattend = trainhoursattend;
		this -> monthlybonus = monthlybonus;
	};
	string getteamname();
	void setteamname(string);
	int getmonthlybonus();
	void setmonthlybonus(int);
	int getreqtrainhours();
	void setreqtrainhours(int);
	int gettrainhoursattend();
	void settrainhoursattend(int);
	void print3();
};


string TeamLeader::getteamname(){
	return teamname;
}

void TeamLeader::setteamname(string teamname){
	this -> teamname = teamname;
}

int TeamLeader::getreqtrainhours(){
	return reqtrainhours;
}

int TeamLeader::getmonthlybonus(){
	return monthlybonus;
}

int TeamLeader::gettrainhoursattend(){
	return trainhoursattend;
}

void TeamLeader::setreqtrainhours(int reqtrainhours){
	this -> reqtrainhours = reqtrainhours;
}

void TeamLeader::setmonthlybonus(int monthlybonus){
	this -> monthlybonus = monthlybonus;
}

void TeamLeader::settrainhoursattend(int trainhoursattend){
	this -> trainhoursattend = trainhoursattend;
}

void TeamLeader::print3(){
	cout << "Team leader name: "<<getteamname()<<endl;
	cout << "Monthly bonus: $"<<getmonthlybonus()<<endl;
	cout << "Training hours needed: "<< getreqtrainhours()<< endl;
	cout << "Training hours attended: " << gettrainhoursattend()<<endl; 
}

int main(){
	int shift;
	double pay;
	int AnnualSalary;
	int AnnualProductionBonus;
	int monthlybonus;
	int reqtrainhours;
	int trainhoursattend;
	cout << "Enter shift 1 for day shift or 2 for night shift: "<<endl;
	cin >> shift;
	cout << "Enter hourly pay: ";
	cin >> pay;
	
	ProductionWorker empl1(shift, pay);
	empl1.setname("HANSSEN");
	empl1.setnumber(743754);
	empl1.setdate("3-2-2005");
	empl1.print();
	
	ShiftSupervisor emplAS1(AnnualSalary, AnnualProductionBonus);
	emplAS1.setAnnualSalary(500);
	emplAS1.setAnnualProductionBonus(100);
	emplAS1.print2();
	
	TeamLeader emplTL1(reqtrainhours, trainhoursattend, monthlybonus);
	emplTL1.setmonthlybonus(100);
	emplTL1.setteamname("BUDI");
	emplTL1.settrainhoursattend(6);
	emplTL1.setreqtrainhours(12);
	return 0;
}


