#pragma once

#include"Person.h"
#include <sstream>
#include <fstream>

class Doctor : public Person
{
public:
	Doctor(string name, string surname) : Person(name, surname) {
	};

	void setWorkAddress(Address* work) {

		workAddress = work;
	}

	 string getWorkAddress() const{
	
		 return workAddress->getAddress();
	}

	virtual string getInfo() const {
		return "ФИО: " + getFIO() + "\nНомер телефона:" + getTelephone() + "\nАдрес проживания: " + getHomeAddress()+ "\nАдрес работы: " + getWorkAddress();
	}

	void setWorkTelephone(__int64 num) {
		workTelephone = to_string(num);
	}

	virtual void save() const
	{
		ofstream fout("pInfoDoctor" + Name + ".txt", ios::app);
		fout << getInfo() << endl;
		fout << endl;
		fout.close();
	}
	
	virtual string getContacts() {
		return  Telephone + ", " + workTelephone;
	}

private:
	Address* workAddress;
	string workTelephone;

};

