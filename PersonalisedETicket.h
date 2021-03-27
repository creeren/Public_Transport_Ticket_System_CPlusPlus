#ifndef PERSONALISEDETICKET_H
#define PERSONALISEDETICKET_H

#include "eticket.h"


using namespace std;

class PersonalisedETicket : public ETicket{
	
	public:
		PersonalisedETicket (int, int, string, string);
		virtual void Print() const;
		virtual void Use();
		virtual int Add(int);
		
	private:
		int trips;
		string name;
		string surname;
};

#endif

