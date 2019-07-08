// This program will compute ticket price and sold tickets per game

#include <iostream>;
using namespace std;

int main ()
{
 int d1;
 int d2;
 int payment;
 int netBalance;
 cout << " Please input the days on the billing cycle followed by the days before the billing when it was paid " << endl;
 cout << " Also input your net balance and the amount of payment you have transacted " << endl;
 cin >> d1;
 cin >> d2;
 cin >> netBalance;
 cin >> payment;
 cout << " Your average daily balance is = " << (netBalance * d1 - payment * d2) / d1 << endl;
 cout << " Your interest is = " << ((netBalance * d1 - payment * d2) / d1) * 0.0152 << endl;
 
 system ("pause");
 return 0;
}
