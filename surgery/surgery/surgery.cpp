// surgery.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <iostream>
#include <array>
#include <string>

using namespace std;

class login {
	void GetDetails(string sUsernamepass, string sPasswordpass);

private:
	string sUsername = "";
	string sPassword = "";
};

void GetDetails(string sUsernamepass, string sPasswordpass)
{
	string sUsername = sUsernamepass;
	string sPassword = sPasswordpass;


}


int main()
{
	login ologin;

	string sUsername;
	string sPassword;

	cout << "Welcome to the program";
	cout << "\n\n Please enter your Username: ";
	cin >> sUsername;
	cout << "\n please enter your Password: ";
	cin >> sPassword;

	oLogin:GetDetails(sUsername, sPassword);

    return 0;
}

