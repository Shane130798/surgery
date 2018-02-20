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

class doctor {
public:

	void GetAppointments();
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
	string sSpecialism = "Chiropractor";
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
		cout << "\n\n Please select from one of the below. ";
		cout << "1.Surgery Information \n";
		cout << "2.Doctors Info \n";
		cout << "3.Booking Ststem \n";
		cout << "4.Booking Overview \n";
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
		}
	} while (bExit = false);








	_getch();
    return 0;
}

