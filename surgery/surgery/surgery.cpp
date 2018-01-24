// surgery.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <iostream>
#include <array>
#include <string>
#include <STDLIB.H>

using namespace std;

class login {
public:
	void GetDetails(string sUsernamepass, string sPasswordpass);
	bool bCheckLogin();
protected:
	string sUsername = "";
	string sPassword = "";
};

void login::GetDetails(string sUsernamepass, string sPasswordpass)
{
	sUsername = sUsernamepass;
	sPassword = sPasswordpass;
}

bool login::bCheckLogin()
{
	bool bVerify = false;

	if (sUsername == "Admin" && sPassword == "Password")
	{
		cout << "Correct";
		bVerify = true;
	}
	else
	{
		cout << "\n You've entered the incorrect Username or Password";
	}
 return bVerify;
}


int main()
{
	login ologin;
	string sUsername;
	string sPassword;
	bool bVerify = false;
	int iAttempts = 0;
	cout << "Welcome to the program";

	//for (int iCount; iCount < 3; iCount++)
	//{
	do {
		cout << "\n\n Please enter your Username: ";
		cin >> sUsername;
		cout << "\n please enter your Password: ";
		cin >> sPassword;
		ologin.GetDetails(sUsername, sPassword);
		bVerify = ologin.bCheckLogin();
		iAttempts++;
	} while (bVerify == false || iAttempts > 2);
	//}
	_getch();
    return 0;
}

