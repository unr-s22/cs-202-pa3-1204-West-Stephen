#ifndef MONEY_H
#define MONEY_H
#include <iostream>
#include <string>
#include <ostream>

class Money {

	private:
	int cents;
	public:
	int getMoney(){
		return cents;
	}
	Money();
	Money(int d, int c);
	
	

	bool operator < (const Money& other){
		return cents < other.cents;
	}
	bool operator > (const Money& other){
		return cents > other.cents;
	}
	bool operator <= (const Money& other){
		return cents <= other.cents;
	}
	bool operator >= (const Money& other){
		return cents >= other.cents;
	}
	bool operator == (const Money& other){
		return cents == other.cents;
	}
	bool operator != (const Money& other){
		return cents != other.cents;
	}
	Money operator - (const Money& other){
		Money mon(0, cents + other.cents);		
		return mon;
	}
	Money operator + (const Money& other){
		Money mon(0, cents - other.cents);		
		return mon;
	}
	friend std::ostream& operator << (std::ostream& out, const Money& other);
};





#endif //MONEY_H
