#include <iostream>
#include "personalisedeticket.h"

PersonalisedETicket::PersonalisedETicket(int serial, int t, string n, string s): ETicket(serial){
	
	trips = t;
	name = n;
	surname = s;
}

void PersonalisedETicket::Use(){
	
	if (trips>0){
		
		cout << "PERSONALISED TICKET: ------GREEN------" << endl;
		trips--;
		cout << endl;
	}
	
	else {
	
		cout << "PERSONALISED TICKET: ------RED------" << endl;
		cout << endl;
	}

}

int PersonalisedETicket::Add(int x){
	
	cout << "Top up PERSONALISED TICKET for: " << x <<" rides" << endl;
	cout << endl;
	return trips+=x;	
}

void PersonalisedETicket::Print() const{
	
	cout << "-------------------------------" << endl;
	cout << endl;
	cout << "PERSONALISED TICKET" << endl;
	cout << name << " " << surname << endl;
	cout << "Ticket rides left: " << trips <<endl;
	ETicket::Print();
	cout << endl;
	cout << "-------------------------------" << endl;

}

