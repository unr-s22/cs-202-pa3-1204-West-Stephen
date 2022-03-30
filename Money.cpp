#include "Money.h"


Money::Money(){
	cents =0;
};

Money::Money(int d, int c){
	cents = (100*d) + c;
};



std::ostream& operator << (std::ostream& out, const Money& other){
		out << "$" << other.cents/100 << "." << other.cents-(other.cents/100)*100 << std::endl;
}


