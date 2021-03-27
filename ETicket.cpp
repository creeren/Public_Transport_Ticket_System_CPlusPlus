#include <iostream>
#include "eticket.h"

using namespace std;


ETicket::ETicket(int s){
	
	serial = s;
}

void ETicket::Print() const{
	
	cout << "E ticket serial number: " << serial ;
		
}
