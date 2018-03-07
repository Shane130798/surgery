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

void Appointment::BookingForm()
{
	cout << "Please enter the Name of the Patient: "; cin >> sPatientName;
	cout << "\n Please enter the Address of the Patient: "; cin >> sPatientAddress;
	cout << "\n Please enter the Ailment of the Patient: "; cin >> sPatientAilment;
	cout << "\n please enter the Number of ICE: "; cin >> sPatientNumber;
	cout << "\n Please enter a Date for Appointment dd/mm/yyyy : "; cin >> sDate;
	cout << "\n Please enter a Time for Appointment between 9AM - 5PM : "; cin >> sTime;
	bool bExit = false;
	do {
		cout << "Is the Patient under 18 Years? answer 1 for Yes 0 for no: "; int iChoice = 0; cin >> iChoice;

		switch (iChoice)
		{
		default:
			cout << "You've selected an invalid option Please Select again\n\n\n\n";
			break;
		case 1:
			Appointment::sDoctorName = "Joel";
			bExit = true;
			break;
		case 0:
			Appointment::sDoctorName = "Shane";
			bExit = true;
			break;
		};
	} while (bExit = false);
}

void Appointment::GetBookingDetails(int iRoomNumberpass, string sPatientNamepass, string sDoctorNamepass, string sPatientNumberpass, string sPatientAddresspass, string sPatientAilmentpass, string sTimepass, string sDatepass)
{
	int iRoomNumber = iRoomNumberpass;
	string sDoctorName = sDoctorNamepass;
	string sPatientNumber = sPatientNumberpass;
	string sPatientAddress = sPatientAddresspass;
	string sPatientAilment = sPatientAilmentpass;
	string sTime = sTimepass;
	string sDate = sDatepass;
	string sPatientName = sPatientNamepass;
}

void Appointment::OutputAppointments()
{
	//cout stuff here
}


/*Perameter Passing*/
void login::GetDetails(string sUsernamepass, string sPasswordpass)
{
	sUsername = sUsernamepass;
	sPassword = sPasswordpass;
}
/*login Validation*/
bool login::bCheckLogin()
{
	bool bVerify = false;

	if (sUsername == "Admin" && sPassword == "Password")
	{
		cout << "Correct\n";
		bVerify = true;
		return bVerify;
	}
	else if (sUsername == "Shane" && sPassword == "Wells")
	{
		cout << "Correct\n";
		bVerify = true;
		return bVerify;
	}
	else if (sUsername == "Joel" && sPassword == "Password")
	{
		cout << "Correct\n";
		bVerify = true;
		return bVerify;
	}

	else if (sUsername == "Sean" && sPassword == "Searing")
	{
		cout << "Correct\n";
		bVerify = true;
		return bVerify;
	}

	else
	{
		cout << "\n You've entered the incorrect Username or Password";
	}
	return bVerify;
}