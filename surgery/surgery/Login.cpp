// surgery.cpp : Defines the entry point for the console application.
//

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

void login::GetDoctor(bool bDoctorpass)
{
	bDoctor = bDoctorpass;
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

bool login::CheckDoctor()
{
	login ologin;
	bool bDoctor = ologin.bDoctor;
	return bDoctor;
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
	login ologin;
	if (sUsername == "Admin" && sPassword == "Password")
	{
		cout << "Correct\n";
		bVerify = true;
		ologin.bDoctor = true;
		ologin.GetDoctor(bDoctor);
		return bVerify;

	}
	else if (sUsername == "Shane" && sPassword == "Wells")
	{
		cout << "Correct\n";
		bVerify = true;
		ologin.bDoctor = true;
		ologin.GetDoctor(bDoctor);
		return bVerify;
	}
	else if (sUsername == "Joel" && sPassword == "Password")
	{
		cout << "Correct\n";
		bVerify = true;
		ologin.bDoctor = true;
		ologin.GetDoctor(bDoctor);
		return bVerify;
	}

	else if (sUsername == "Sean" && sPassword == "Shearing")
	{
		cout << "Correct\n";
		bVerify = true;
		bDoctor = false;
		ologin.GetDoctor(bDoctor);
		return bVerify;
	}

	else
	{
		cout << "\n You've entered the incorrect Username or Password" << flush;
		system("cls");
		bVerify = false;
	}
	return bVerify;

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
		cout << "\n\n Please enter your Username: \n";
		cin >> sUsername;
		cout << "\n please enter your Password: \n";
		cin >> sPassword;
		ologin.GetDetails(sUsername, sPassword);
		bVerify = ologin.bCheckLogin();
		iAttempts++;
		cout << flush;
		system("CRS");
		if (iAttempts > 2) {
			exit(EXIT_FAILURE);
	}
		else{
			cout << "You've logged in successfully";
			MainMenu();
		};
		
	} while (bVerify == false );
	/*END login loop*/
    return 0;
}

