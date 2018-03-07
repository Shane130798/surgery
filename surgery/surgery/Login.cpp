// surgery.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <iostream>
#include <array>
#include <string>
#include <STDLIB.H>
#include <vector>
#include "classes.h"
#include <fstream>

using namespace std;


int main()
{
	login ologin; /*Declaring Object*/
	string sUsername; /*Declaring Variabled*/
	string sPassword;
	bool bVerify = false; /*Loop Preporation*/
	int iAttempts = 0;			/*^^^*/
	cout << "Welcome to the program";/*Displaying text to User*/

	/*Login Loop*/
	do {
		cout << "\n\n Please enter your Username: " << sUsername << "\n";
		cin >> sUsername;
		cout << "\n please enter your Password: " << sPassword << "\n";
		cin >> sPassword;
		ologin.GetDetails(sUsername, sPassword);
		bVerify = ologin.bCheckLogin();
		iAttempts++;
		if (iAttempts > 2) {
			exit(EXIT_FAILURE);
	}
		else {
			MainMenu();
		}
		
	} while (bVerify == false );
	cout << "\nYou've Logged in successfully";
	/*END login loop*/



	








	_getch();
    return 0;
}

