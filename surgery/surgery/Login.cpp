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

void SurgeryMenu()
{
	bool bExit = false;
	int iChoice = 0;
	cout << "/nSurgeryMenu";
	cout << "/n/n Select from These options:";
	cout << "1. Option\n ";
	cout << "2. Option\n ";
	cout << "3. Option\n ";
	cout << "4. Option\n ";
	cin >> iChoice;

	do {
		switch (iChoice) {
		default:
			cout << "Please Select from the options above.\n";
		case 1:
			cout << "You have selected: ";
			break;
		case 2:
			cout << "You have selected: ";
			break;
		case 3:
			cout << "You have selected: ";
			break;
		case 4:
			cout << "You have selected: ";
			break;
		}
	} while (bExit = false);
}

void DoctorsMenu()
{
	bool bExit = false;
	int iChoice = 0;
	cout << "/nSurgeryMenu";
	cout << "/n/n Select from These options:";
	cout << "1. Option\n ";
	cout << "2. Option\n ";
	cout << "3. Option\n ";
	cout << "4. Option\n ";
	cin >> iChoice;

	do {
		switch (iChoice) {
		default:
			cout << "Please Select from the options above.";
		case 1:
			cout << "You have selected: ";
			break;
		case 2:
			cout << "You have selected: ";
			break;
		case 3:
			cout << "You have selected: ";
			break;
		case 4:
			cout << "You have selected: ";
			break;
		}
	} while (bExit = false);
}

void BookingMenu()
{

}

void BookingOverview()
{
	bool bExit = false;
	int iChoice = 0;
	cout << "/nSurgeryMenu";
	cout << "/n/n Select from These options:";
	cout << "1. Option\n ";
	cout << "2. Option\n ";
	cout << "3. Option\n ";
	cout << "4. Option\n ";
	cin >> iChoice;

	do {
		switch (iChoice) {
		default:
			cout << "Please Select from the options above.";
		case 1:
			cout << "You have selected: ";
			break;
		case 2:
			cout << "You have selected: ";
			break;
		case 3:
			cout << "You have selected: ";
			break;
		case 4:
			cout << "You have selected: ";
			break;
		}
	} while (bExit = false);
}

void MainMenu()
{
	bool bExit = false;

	do {
		int iChoice = 0;
		cout << "\n\n Please select from one of the below. \n";
		cout << "1.Surgery Information \n"; /*Viewing Doctors, etc.*/
		cout << "2.Doctors Info \n"; /*Doctor and Speciality, Appointtments*/
		cout << "3.Booking System \n";/*Booking New Patient in*/
		cout << "4.Booking Overview \n";/*Appointments booked into Surgery*/
		cout << "5.Exit Program \n"; /*really? You actually need me to explain this.. Wot do u fink it dos, eh?*/
		cin >> iChoice;
		switch (iChoice)
		{
		default:
			break;
		case 1:
			SurgeryMenu();
			break;
		case 2:
			DoctorsMenu();
			break;
		case 3:
			BookingMenu();
			break;
		case 4:
			BookingOverview();
			break;
		case 5:
			_getch();
			EXIT_FAILURE;
		}
	} while (bExit = false);
}

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

