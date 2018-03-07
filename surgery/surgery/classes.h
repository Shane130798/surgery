#pragma once



#ifndef Surgery

class Surgery {
public:

protected:
	string sname = "Baytree Surgery";
	string sLocation = "Baytree Park, Weston Super Mare";
	//Appointments
private:

};
 #endif

#ifndef Appointment 

 // !Appointment 

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
#endif

#ifndef Doctor
class doctor {
public:
protected:
	string sDoctorName[2] = { "Shane wells", "Tom Pherrit" };
	string sSpecialism;
	/*Appointments*/

private:

};
#endif // !Doctor

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
#ifndef login

/*login Class*/
class login {
public:
	void GetDetails(string sUsernamepass, string sPasswordpass);
	bool bCheckLogin();
protected:
	string sUsername = "";
	string sPassword = "";
};
#endif
