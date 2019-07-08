#include <iostream>;
using namespace std;

int main ()
{
 int TicketPriceGA;
 int TicketPricePremium;
 int TicketPriceSideline;
 int TicketPriceBox;
 int TicketSoldGA;
 int TicketSoldPremium;
 int TicketSoldSideline;
 int TicketSoldBox;
 cout << "Please enter the number of tickets sold from GA to Box, to be followed by the price also from GA  to Box" << endl;
 cin >> TicketSoldGA;
 cin >> TicketSoldPremium;
 cin >> TicketSoldSideline;
 cin >> TicketSoldBox;
 cin >> TicketPriceGA;
 cin >> TicketPricePremium;
 cin >> TicketPriceSideline;
 cin >> TicketPriceBox;
 cout << " Total Sales from GA = " << TicketSoldGA * TicketPriceGA << endl;
 cout << " Total Sales from Premium = " << TicketSoldPremium * TicketPricePremium << endl;
 cout << " Total Sales from Sideline = " << TicketSoldSideline * TicketPriceSideline << endl;
 cout << " Total Sales from Box = " << TicketSoldBox * TicketPriceBox << endl;
 cout << " Total Sales from the game = " << (TicketSoldGA * TicketPriceGA) + (TicketSoldPremium * TicketPricePremium) + (TicketSoldSideline * TicketPriceSideline) + (TicketSoldBox * TicketPriceBox) << endl;
 system ("pause");
 return 0;
}
