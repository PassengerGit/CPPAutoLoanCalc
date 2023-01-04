#include <iostream>

using namespace std;

int Loan;
int Months;
int Interest;
string DownpaymentCheck;
int Downpayment;
int PennsylvaniaPercentFee = 0.6 * Loan;

int main() {
  cout << "C++ Loan & Interest Calculator, Made in WIN\n";
  cout << "NOTE: This is an estimation, not an exact number. Do further research before confirming this 100%. This does not run off of an API like other programs, so innaccuracy can occur, please refer to bankrate.com for more accurate results if it does not work well for you.\n";
  cout << "How much is your loan? \n";
  cin >> Loan;
  cout << "How many months? \n";
  cin >> Months;
  cout << "How much interest? Be sure to put a 0. before the number, otherwise the program will error.\n";
  cin >> Interest;
  cout << "Do you have a down payment? [y|n]\n";
  cin >> DownpaymentCheck;
  if (DownpaymentCheck == "Y" || "Yes" || "y" || "yes" || "YES") {
    cout << "How much?\n";
    cin >> Downpayment;
    Loan == Loan - Downpayment;
    cout << "From down payment, loan, months, interest, your monthly payment is: $" << Loan / Months + Loan * Interest + PennsylvaniaPercentFee;
  } else {
    cout << "From loan, months, interest, your monthly payment is: $" << Loan / Months + Loan * Interest + PennsylvaniaPercentFee;
  }
}
