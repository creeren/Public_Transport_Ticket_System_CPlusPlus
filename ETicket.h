#ifndef ETICKET_H
#define ETICKET_H

#include <iostream>

using namespace std;

class ETicket{
		
	public:
		ETicket(int s){serial = s;}
		~ETicket(){};
		virtual void Use() = 0;
		virtual int Add(int) const {return 0;}
		virtual void Print() const {cout << "E ticket serial number: " << serial ;}
	
	protected: 
		int serial;
};

#endif
