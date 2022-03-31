#include "Account.h"
#include "Money.h"

Account::Account(int dollars, int cents): Money(dollars, cents) {
	
	totDollars = dollars;
	totCents = cents;

}

void Account::makeWithdrawals(Money m){
	withdrawals.push_back(m);	
	flag = true;
	numWithdrawals++;
}

void Account::makeDeposit(Money m){
	deposits.push_back(m);
	flag = true;
	numDeposits++;
}

void Account::balance(Money m) {
	
	bal.push_back(m);

}

void Account::updateBal() const {
	
	std::cout << "Updated" << std::endl << std::endl;
	
}

void Account::changeStatus() {

	flag = false;
}
	

std::ostream& operator << (std::ostream& out, const Account& other){

	if (other.flag == false){	
		 
	out << "Account Details"  << std::endl;
	out << "----------------------------" << std::endl;
 	out << "Current Balance: " << other.totDollars << "." << other.totCents 
	<< std::endl;
	out << "----------------------------" << std::endl;
	out << "Number of Deposits: " << other.numDeposits << std::endl;
	out << "----------------------------" << std::endl;

	for (int i = 0; i < other.numDeposits;  i++) {
		
		out << other.deposits[i]; 

	}
	out << "Number of Withdrawals: " << other.numWithdrawals << std::endl;
	out << "----------------------------" << std::endl;

	for (int j = 0; j < other.numWithdrawals;  j++) {
		
		out << other.withdrawals[j];

	}

	}

	else if (other.flag == true) {

	other.updateBal();	
		 
	out << "Account Details"  << std::endl;
	out << "----------------------------" << std::endl;
 	out << "Current Balance: " << other.bal[0];
	out << "----------------------------" << std::endl;
	out << "Number of Deposits: " << other.numDeposits << std::endl;
	out << "----------------------------" << std::endl;

	for (int i = 0; i < other.numDeposits;  i++) {
		
		out << other.deposits[i]; 

	}
	
	out << "----------------------------" << std::endl;
	out << "Number of Withdrawals: " << other.numWithdrawals << std::endl;
	out << "----------------------------" << std::endl;

	for (int j = 0; j < other.numWithdrawals;  j++) {
		
		out << other.withdrawals[j];

	}
	}

	return out;
 
	}


