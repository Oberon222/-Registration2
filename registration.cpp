#include "registration.h"
#include <iostream>
#include <string>
#include <list>
#include <fstream>
using namespace std;
list<UserInfo> UsersList;
string fileName = "Info.txt";

void AddUser()
{
	UserInfo NewUser;
	cout << "Enter your name: ";
	cin >> NewUser.name;
	cout << "Enter your E-mail: ";
	cin >> NewUser.email;
	cout << "Enter your password: ";
	cin >> NewUser.password;

	UsersList.push_back(NewUser);

	ofstream fout;
	fout.open(fileName, fstream::app);
	bool isOpen = fout.is_open();
	if (isOpen == false) {
		cout << "Error";
	}
	fout << NewUser.name << endl;
	fout << NewUser.email << endl;
	fout << NewUser.password << endl;

	fout.close();
}

void ShowUsers()
{
	string data;
	int counter = 0;
	string fileName = "Info.txt";
	ifstream fin;
	fin.open(fileName);
	while (!fin.eof())
	{
		data = "";
		fin >> data;
		if (counter%3==0) {
			cout << data << endl;
		}
		counter++;
	}
		
}

void SerchUser()
{
	string UserName;
	string UserPassword;
	cout << "Enter user name: ";
	cin >> UserName;
	cout << "Enter user password: ";
	cin >> UserPassword;
	
	string fileName= "Info.txt";
	ifstream fin;
	fin.open(fileName);
	string data;
	while (!fin.eof())
	{
		data = "";

		getline(fin, data);
		if (data == UserName) {
			cout << "Hello " << data << endl;
		}
		
	}
}
