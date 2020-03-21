#include "registration.h"
#include <iostream>
#include <string>
#include <list>
#include <fstream>
using namespace std;

int main() {
	int action = 0;

	do
	{
		cout << "1.Add user" << endl;
		cout << "2. Show users" << endl;
		cout << "3. Serch user" << endl;
		cout << "4. Exit" << endl;
		cin >> action;

		switch (action)
		{
		case 1: 
		{
			AddUser();
			break;
		}
		case 2:
		{
			ShowUsers();
			break;
		}
		case 3:
		{
			SerchUser();
			break;
		}
		case 4:
		{
			cout << "Bye" << endl;
		}
		
		}

	} while (action!=4);



	system("pause");
	return 0;
}