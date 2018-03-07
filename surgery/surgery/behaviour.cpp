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
	bool bDoctor = false;

	if (sUsername == "Admin" && sPassword == "Password")
	{
		cout << "Correct\n";
		bVerify = true;
		bDoctor = true;
		return bVerify,bDoctor;

	}
	else if (sUsername == "Shane" && sPassword == "Wells")
	{
		cout << "Correct\n";
		bVerify = true;
		bDoctor = true;
		return bVerify, bDoctor;
	}
	else if (sUsername == "Joel" && sPassword == "Password")
	{
		cout << "Correct\n";
		bVerify = true;
		bDoctor = true;
		return bVerify, bDoctor;
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
		bVerify = false;
	}
	return bVerify;
}