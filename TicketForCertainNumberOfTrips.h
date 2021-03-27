#ifndef TICKETFORCERTAINNUMBEROFTRIPS_H
#define TICKETFORCERTAINNUMBEROFTRIPS_H

#include "eticket.h"

using namespace std;

class TicketForCertainNumberOfTrips : public ETicket{
	
	public:
		TicketForCertainNumberOfTrips (int, int);
		virtual void Print() const;
		virtual void Use();	
		
	private:
		int trips;
	
};

#endif

