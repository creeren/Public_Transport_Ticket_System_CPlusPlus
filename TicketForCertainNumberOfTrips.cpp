#include <iostream>
#include "ticketforcertainnumberoftrips.h"


TicketForCertainNumberOfTrips::TicketForCertainNumberOfTrips(int serial, int t): ETicket(serial){
	
	trips = t;	
}

void TicketForCertainNumberOfTrips::Use(){
	
	if (trips>0){
		
		cout << "TICKET FOR CERTAIN NUMBER OF TRIPS: ------GREEN------" << endl;
		trips--;
		cout << endl;
	}
	
	else {
	
		cout << "TICKET FOR CERTAIN NUMBER OF TRIPS: ------RED------" << endl;
		cout << endl;
	}	
}
void TicketForCertainNumberOfTrips::Print() const{
	
	cout << "-------------------------------" << endl;
	cout <<endl;
	cout << "TICKET FOR CERTAIN NUMBER OF TRIPS" << endl;
	cout << "Ticket rides left: " << trips <<endl;
	ETicket::Print();
	cout << endl;
	cout << "-------------------------------" << endl;
}

