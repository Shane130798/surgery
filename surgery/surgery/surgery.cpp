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
	bool bVerify = false;
};

void login::GetDetails(string sUsernamepass, string sPasswordpass)
{
	string sUsername = sUsernamepass;
	string sPassword = sPasswordpass;
}

bool login::bCheckLogin()
{
	bool bVerify = false;
	if (sUsername == "Admin" && sPassword == "Password")
	{
		cout << bVerify;
		bVerify = true;
	}
	else
	{
		cout << "\n You've entered the incorrect Username or Password";
	}
 return bVerify = true;
}


int main()
{
	login ologin;
	string sUsername;
	string sPassword;
	bool bVerify;

	cout << "Welcome to the program";

	//for (int iCount; iCount < 3; iCount++)
	//{
		cout << "\n\n Please enter your Username: ";
		cin >> sUsername;
		cout << "\n please enter your Password: ";
		cin >> sPassword;
		ologin.GetDetails(sUsername, sPassword);
		ologin.bCheckLogin();
	//}
	_getch();
    return 0;
}

