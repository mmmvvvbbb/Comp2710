//Matthew Bonsall
//MVB0005
//Compiled using g++ compiler
//hw2.cpp

#include <iostream>
using namespace std;

int main(){
	double loan_amount, interest_rate;
	int month_pay;
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "Loan Amount: ";
	cin >>  loan_amount;
	cout << "Interest Rate (% per year): ";
	cin >> interest_rate;
	interest_rate /= 12;
	cout << "Monthly Payments: ";
	cin >> month_pay;
	
	cout << "\n******************************************************";
	cout << "\n\tAmortization Table";
	cout << "\n******************************************************";

	int cur_month = 0;
	double month_interest, total_interest, principal;
	total_interest = 0;
	if(month_pay <= interest_rate*loan_amount/100){
		cout << "\nThe owed interest is greater than the payment!\n";
		return 0;
	}
	cout << "\nMonth\tBalance\tPayment\tRate\tInterest  Principal";
	cout << "\n0\t$" << loan_amount << "\tN/A\tN/A\tN/A\tN/A";	
	while(loan_amount > 0){
		month_interest =  loan_amount*interest_rate/100;
		total_interest += month_interest;
		principal = month_pay - month_interest; 
		loan_amount -= principal;
		if(loan_amount <= 0){
			principal = loan_amount + principal;
			loan_amount = 0;
		}
		cout << "\n" << ++cur_month << "\t";
		cout << "$" << loan_amount << "\t";
		cout << "$" << month_pay << "\t";
		cout <<  interest_rate << "\t";
		cout << "$" << month_interest << "\t";
		cout << "$" << principal;
		
	}
	cout << "\n******************************************************";
	cout << "\nIt takes " << cur_month << " months to pay off the loan.";
	cout << "\nTotal interest paid is: $" << total_interest << "\n"; 
	
return 0;
}

