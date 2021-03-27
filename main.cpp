#include <iostream>
#include "ticketforcertainnumberoftrips.h"
#include "personalisedeticket.h"
#include "twentyfourhourticket.h"

using namespace std;

int main(){
	
	TicketForCertainNumberOfTrips zeroTrips(254854788, 0);
	zeroTrips.Use();
	TicketForCertainNumberOfTrips fiveTrips(254854788, 5);
	fiveTrips.Use();
	
	PersonalisedETicket personalised(258758866, 0, "Emily", "Madler");
	personalised.Use();
	personalised.Print();

	PersonalisedETicket personalised1(258758866, 2, "Kim", "Madler");
	personalised1.Print();
	personalised1.Add(4);
	personalised1.Use();
	personalised1.Add(3);
	personalised1.Use();
	
	TwentyFourHourTicket twentyFourHour(555855266, false, 24);
	twentyFourHour.Use();
	
	TwentyFourHourTicket twentyFourHour1(555855266, true, 25);
	twentyFourHour1.Use();
	
	ETicket *arrayofETicket[6];
	arrayofETicket[0]=&zeroTrips; 
	arrayofETicket[1]=&fiveTrips;
	arrayofETicket[2]=&personalised;
	arrayofETicket[3]=&personalised1; 
	arrayofETicket[4]=&twentyFourHour;
	arrayofETicket[5]=&twentyFourHour1;

	for (int i=0; i<6; i++){
		
		arrayofETicket[i]->Print();	
		arrayofETicket[i]->Use();			
	}

	return 0;
}
