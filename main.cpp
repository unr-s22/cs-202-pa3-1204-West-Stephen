#include <iostream>
#include "Money.h"
#include "Account.h"

int main(){
	
	Money m(100,10);
	Account account(300, 23);
	
	std::cout << account << std::endl;

	Money m1(200, 00);
	account.makeDeposit(m1);
	Money m2(300, 24);
	account.makeDeposit(m2);
	Money m3(501, 22);
	account.makeDeposit(m3);

	Money m4(300, 10);
	account.makeWithdrawals(m4);
	Money m5(201, 34);
	account.makeWithdrawals(m5);

	Money m6(m1+m2+m3-m4-m5+account);
	account.balance(m6);

	std::cout << account << std::endl;

	account.changeStatus();
	
	return 0;
};
