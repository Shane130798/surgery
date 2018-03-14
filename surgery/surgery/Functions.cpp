#include "stdafx.h"
#include <conio.h>
#include <iostream>
#include <array>
#include <string>
#include <STDLIB.H>
#include <vector>
#include <fstream>
#include "Classes.h"
#include "Functions.h"

using namespace std;

void MainMenu()
{
	login ologin;
	ologin.bCheckLogin();
	
	//bDoctor = true;
	bool bExit = false;
	do {
		bool bDoctor = ologin.CheckDoctor();
		int iChoice = 0;
		
		if (bDoctor == true) {
			cout << "\n\n Please select from one of the below. \n";
			cout << "1.Surgery Information \n"; /*Viewing Doctors, etc.*/
			cout << "2.Doctors Info \n"; /*Doctor and Speciality, Appointtments*/
			cout << "3.Booking System \n";/*Booking New Patient in*/
			cout << "4.Booking Overview \n";/*Appointments booked into Surgery*/
			cout << "5.Exit Program \n\n";

			cin >> iChoice;
			switch (iChoice)
			{
			default:
				break;
			case 1:
				system("CLS");
				SurgeryMenu();
				cout << "Surgery Menu \n";
				
				break;
			case 2:
				system("CLS");
				DoctorsMenu();
				cout << "Doctors Menu \n";
				
				break;
			case 3:
				system("CLS");
				BookingMenu();
				cout << "Booking Menu \n";
				
				break;
			case 4:
				system("CLS");
				BookingOverview();
				cout << "Booking OverView \n";
				
				break;
			case 5:
				EXIT_FAILURE;
				bExit = true;
				break;
			} while (bExit == false);
		}
		else 
		{
			cout << "\n\n Please select from one of the below. \n";
			cout << "1.Surgery Information \n"; /*Viewing Doctors, etc.*/
			cout << "2.Booking System \n";/*Booking New Patient in*/
			cout << "3.Booking Overview \n";/*Appointments booked into Surgery*/
			cout << "4.Exit Program \n"; /*really? You actually need me to explain this.. Wot do u fink it dos, eh?*/

			cin >> iChoice;
			switch (iChoice)
			{
			default:
				break;
			case 1:
				SurgeryMenu();
				break;
			case 2:
				BookingMenu();
				break;
			case 3:
				BookingOverview();
				break;
			case 4:
				EXIT_FAILURE;
				bExit = true;
				break;
			} while (bExit == false);
		}
	} while (bExit == false);
}

void SurgeryMenu()
{
	bool bExit = false;
	int iChoice = 0;
	cout << "\nSurgeryMenu";
	cout << "\n\n Select from These options:";
	cout << "1. Option\n ";
	cout << "2. Option\n ";
	cout << "3. Option\n ";
	cout << "4. Back to Main Menu\n ";
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
			cout << "Main Menu:\n " << flush;
			system("CLS");
			bExit = true;
			break;
			
		}
	} while (bExit == false);
	MainMenu();
}

void DoctorsMenu()
{
	bool bExit = false;
	int iChoice = 0;
	cout << "/nSurgeryMenu";
	cout << "/n/n Select from These options:";
	cout << "1.View Appointments\n ";
	cout << "2. Option\n ";
	cout << "3. Option\n ";
	cout << "4. Back to Main Menu\n ";
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
			cout << "Main Menu: \n" << flush;
			system("CLS");
			bExit = true;
			break;
		}
	} while (bExit == false);
	MainMenu();
}

void BookingMenu()
{
	int iNoPatient = 1;
	vector <patient> oPatient(iNoPatient);
	system("CLS");
} 

void AddPatient()
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
	cout << "4. Main Menu\n ";
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
			cout << "Main Menu: \n" <<flush;
			system("CLS");
			bExit = true;
			break;
		}
	} while (bExit == false);
}