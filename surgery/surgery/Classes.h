#pragma once
#include "stdafx.h"
#include <conio.h>
#include <iostream>
#include <array>
#include <string>
#include <STDLIB.H>
#include <vector>
#include <fstream>

using namespace std;

#ifndef Surgery

class Surgery {
public:

protected:
	string sName = "Baytree Surgery";
	string sLocation = "Baytree Park, Weston Super Mare";
	//Appointments
private:

};
#endif // !

#ifndef Appointment
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
#endif // !Appointment

#ifndef doctor
class doctor {
public:
protected:
	string sDoctorName[2] = { "Shane wells", "Tom Pherrit" };
	string sSpecialism;
	/*Appointments*/

private:

};
#endif // !doctor

#ifndef patient
class patient {
public:

protected:
	string spatientName;
	string sNumber;
	string sAddress;
	string sAilment;

private:

};
#endif

#ifndef Login
class login {
public:
	void GetDetails(string sUsernamepass, string sPasswordpass);
	bool bCheckLogin();
	bool CheckDoctor();
	void GetDoctor(bool bDoctorpass);
protected:
	string sUsername = "";
	string sPassword = "";
	bool bDoctor = false;
};
#endif