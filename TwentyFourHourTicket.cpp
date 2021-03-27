#include <iostream>
#include "twentyfourhourticket.h"

using namespace std;

TwentyFourHourTicket::TwentyFourHourTicket(int serial, bool a, int aDate): ETicket(serial){
	
	activated = a;
	activation_date = aDate;	
}

void TwentyFourHourTicket::Use(){
	
	
 /*   if (activated==false)
	{
        activated=true;
        cout << "Activisation of 24H TICKET" << endl;
        activation_date=24;
	}
        
	
	if (activated==true){
	
		if (activation_date > 24) {
		

	  	cout << "24H TICKET: ------RED------" << endl;
        cout << endl;
    }
    else {
        cout << "24H TICKET: ------GREEN------" << endl;
        cout << endl;
    }

}
}*/
	
	
/*	cout <<(d < 10 ? "0" : "") << d << "/" <<
            (m < 10 ? "0" : "") << m << "/" <<
            (y < 1000 ? "0" : "") << y << endl;
            
     */       
	
	int dd, mm, yyyy;

    if (!activated){

        activated=true;
        cout << "Activisation of 24H TICKET" << endl;
        cout << "Enter date of validation for 24H TICKET (dd mm yyyy): ";
        cin >> dd>>mm>>yyyy;
	}
	  
    //create now
    time_t now = time(NULL);
   
    // create activation_date
    struct tm activationDateStructTemp;
    activationDateStructTemp = *localtime(&now);
    activationDateStructTemp.tm_mday = dd;
    activationDateStructTemp.tm_mon = mm-1; // month from 0 till 11;
    activationDateStructTemp.tm_year = yyyy-1900; // year since 1900;
    activation_date = mktime(&activationDateStructTemp);
    cout << "-----" << endl;
    cout << "activation_date ::: " << asctime(gmtime(&activation_date)) << endl;
    cout << "-----" << endl;

    // create activation_date+1 day in activation_date_plus_1_day
    activationDateStructTemp = *localtime(&activation_date);
    activationDateStructTemp.tm_mday++;
    time_t activation_date_plus_1_day = mktime(&activationDateStructTemp);
    cout << "activation_date + 1 day ::: " << asctime(gmtime(&activation_date_plus_1_day)) << endl;
    cout << "-----" << endl;
	
    // if activation_date_plus_1_day is > NOW then GREEN, otherwise RED
    if (difftime(activation_date_plus_1_day,now) < 1){
        cout << "24H TICKET: ------RED------" << endl;
        cout << endl;
    }
    else {
        cout << "24H TICKET: ------GREEN------" << endl;
        cout << endl;
    }
}

void TwentyFourHourTicket::Print() const{
	
	cout << "-------------------------------" << endl;
	cout <<endl;
	cout << "24H TICKET" << endl;
	cout << "Activated: " << activated << endl;


	cout << "Activation date: " << asctime(gmtime(&activation_date)) << endl;
	ETicket::Print();
	cout << endl;
	cout << "-------------------------------" << endl;
}
