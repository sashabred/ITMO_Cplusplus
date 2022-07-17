#pragma once
#include"Person.h"
#include <sstream>
#include <fstream>


class Student:public Person
{
public:
	Student(string name, string surname) : Person(name, surname) {
	};

	void setUniversityAddress(Address* work) {

		universityAddress = work;
	}

	string getUnvisersitykAddress() const {

		return universityAddress->getAddress();
	}

	void setUniversityTelephones(__int64 num) {
		universityTelephone = to_string(num);
	}

	string getUniversityTelephone() const {
		return universityTelephone;
	}

	virtual string getInfo() const {
		return  "ФИО: " + getFIO() + "\nНомер телефона:" + getTelephone() + "\nАдрес проживания: " + getHomeAddress() + "\nАдрес университета: " + getUnvisersitykAddress() + "\nТелефон университета: " + getUniversityTelephone();
	}

	virtual void save() const
	{
		ofstream fout("pInfoStudent" + Name + ".txt", ios::app);
		fout << getInfo() << endl;
		fout << endl;
		fout.close();
	}

	virtual string getContacts() {
		return  Telephone + ", " + universityTelephone;
	}

private:
	Address* universityAddress;
	string universityTelephone;
};

