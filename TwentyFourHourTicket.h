#ifndef TWENTYFOURHOURTICKET_H
#define TWENTYFOURHOURTICKET_H

#include "eticket.h"
#include <time.h>

using namespace std;

class TwentyFourHourTicket : public ETicket{
	
	public:
		TwentyFourHourTicket (int, bool, int);
		virtual void Print() const;
		virtual void Use();
				
	private:
		time_t activation_date;
		bool activated;
		/*int activation_date;*/
};

#endif
