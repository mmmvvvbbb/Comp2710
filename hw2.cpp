//Matthew Bonsall
//MVB0005
//Compiled using g++ compiler
//hw2.cpp

#include <iostream>
#include <iomanip>
using namespace std;

int doubleLength(double d){
	int i = 3;
	while (d > 1){
		d /= 10;
		i ++;
	}
	return i;
}

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
	

	double month_interest, total_interest, principal;
	int cur_month = 0;
	total_interest = 0;
	int balWidth = doubleLength(loan_amount)+5;
	int payWidth = doubleLength(month_pay) +3;
	if(payWidth < 10){
		payWidth = 10;
	}
	
	if(month_pay <= interest_rate*loan_amount/100){
		cout << "\nThe owed interest is greater than the payment!\n";
		return 0;
	}
	cout << "\n******************************************************";
	cout << "\n\tAmortization Table";
	cout << "\n******************************************************";
	cout << endl<< left << setw(7) << "Month"; 
	cout << setw(balWidth) << "Balance";
	cout << setw(payWidth) << "Payment";
	cout << setw(7)        << "Rate";
	cout << setw(payWidth) << "Interest"; 
	cout << setw(payWidth) << "Principal";
	cout << setw(8)        << "\n0";
	cout                   << "$"; 
	cout << setw(balWidth-1) << loan_amount;
	cout << setw(payWidth) << "N/A"; 
	cout << setw(7)        << "N/A"; 
	cout << setw(payWidth) << "N/A"; 
	cout << setw(payWidth) << "N/A";	
	payWidth--;
	balWidth--;
	while(loan_amount > 0){
		month_interest =  loan_amount*interest_rate/100;
		total_interest += month_interest;
		principal = month_pay - month_interest; 
		loan_amount -= principal;
		if(loan_amount <= 0){
			principal = loan_amount + principal;
			loan_amount = 0;
		}
		cout << "\n"<< setw(7) << ++cur_month;
		cout << "$" << setw(balWidth) << loan_amount;
		cout << "$" << setw(payWidth) << month_pay;
		cout <<        setw(7) << interest_rate;
		cout << "$" << setw(payWidth) << month_interest;
		cout << "$" << setw(payWidth) << principal;
		
	}
	cout << "\n******************************************************";
	cout << "\nIt takes " << cur_month << " months to pay off the loan.";
	cout << "\nTotal interest paid is: $" << total_interest << "\n"; 
	
return 0;
}

