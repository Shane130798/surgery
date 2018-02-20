// surgery.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <iostream>
#include <array>
#include <string>
#include <STDLIB.H>

using namespace std;

class Surgery {
public:

protected:
	string sname;
	string sLocation;
	string sDoctors;
	/*Appointments*/
private:

};

class Appointment {
public:
	void OutputAppointments();
	void BookingForm();
	void GetBookingDetails(int iRoomNumberpass, string sPatientNamepass, string sDoctorNamepass, string sPatientNumberpass, string sPatientAddresspass, string sPatientAilmentpass, string sTimepass, string sDatepass);
protected:
	int iRoomNumber = 0;
	string sDoctorName;
	string sPatientName;
	string sPatientNumber;
	string sPatientAddress;
	string sPatientAilment;
	string sTime;
	string sDate;
};

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
void Appointment::GetBookingDetails(int iRoomNumberpass, string sPatientNamepass,string sDoctorNamepass, string sPatientNumberpass, string sPatientAddresspass, string sPatientAilmentpass, string sTimepass, string sDatepass)
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

class doctor {
public:
protected:
	string sDoctorName;
	string sSpecialism;
	/*Appointments*/

private:

};

class doctor1 : public doctor {
public:
	void GetAppointmentsDoc1();
protected:
	string sDocotorName = "Shane";
	string sSpecialism = "Ze Doctor";
	/*appointments*/
private:


};

class doctor2 : public doctor {
public:
	void GetAppointmentsDoc2();
protected:
	string sDocotorName = "Joel";
	string sSpecialism = "Paediatrician";
	/*appointments*/
private:


};

class patient {
public:

protected:
	string spatientName;
	string sNumber;
	string sAddress;
	string sAilment;

private:

};


/*login Class*/
class login {
public:
	void GetDetails(string sUsernamepass, string sPasswordpass);
	bool bCheckLogin();
protected:
	string sUsername = "";
	string sPassword = "";
};
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

	else
	{
		cout << "\n You've entered the incorrect Username or Password";
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
		cout << "\n\n Please enter your Username: ";
		cin >> sUsername;
		cout << "\n please enter your Password: ";
		cin >> sPassword;
		ologin.GetDetails(sUsername, sPassword);
		bVerify = ologin.bCheckLogin();
		iAttempts++;
		if (iAttempts > 2) {
			exit(EXIT_FAILURE);
	}
		else {

		}
		
	} while (bVerify == false );
	cout << "\nYou've Logged in successfully";
	/*END login loop*/



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
			/*do this*/
			break;
		case 2:
			/*do this*/
			break;
		case 3:
			/*do this*/
			break;
		case 4:
			/*do this*/
			break;
		case 5:
			_getch();
			EXIT_FAILURE;
		}
	} while (bExit = false);








	_getch();
    return 0;
}

