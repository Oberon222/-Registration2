#pragma once
#include <iostream>
#include <string>
#include <list>
#include <fstream>
using namespace std;

struct UserInfo
{
	string name;
	string email;
	string password;

};

void AddUser();
void ShowUsers();
void SerchUser();