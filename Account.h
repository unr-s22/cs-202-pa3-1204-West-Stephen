#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <string>
#include <ostream>
#include <vector>
#include "Money.h"


class Account : public Money {

private:
	
	int totDollars;
	int totCents;	
	int numWithdrawals = 0;
	int numDeposits = 0;

	std::vector<Money> deposits;
	std::vector<Money> withdrawals;
	std::vector<Money> bal;

	bool flag = false;
	

public:
	
	explicit Account();
	explicit Account(int dollars, int cents);	
	
	void makeWithdrawals(Money m);
	void makeDeposit(Money m);
	void balance(Money m);
	
	void updateBal() const;
	void changeStatus();
	
	friend std::ostream& operator << (std::ostream& out, const Account& 
	other);
	
};




#endif //ACCOUNT_H
