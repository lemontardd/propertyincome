#include <iostream>
using namespace std;
int main()
{
   double condoPrice, rent, net1, net2, tax, hoa;
   int res1, res2, time1, time2;

   cout << "--------------------------------------" << endl;
   cout << "Information" << endl;
   cout << "Price of Condo: ";
   cin >> condoPrice;
   cout << "Monthly Rent Per Person: ";
   cin >> rent;
   cout << "Annual Property Tax: ";
   cin >> tax;
   cout << "Annual HOA Fee: ";
   cin >> hoa;
   cout << "--------------------------------------" << endl;
   cout << "First Time Period" << endl;
   cout << "Number of Residence: ";
   cin >> res1;
   cout << "Years Occcupied: ";
   cin >> time1;
   cout << "--------------------------------------" << endl;
   cout << "Second Time Period" << endl;
   cout << "Number of Residence: ";
   cin >> res2;
   cout << "Years Occcupied: ";
   cin >> time2;
   cout << "--------------------------------------" << endl;

   cout << "Yearly Results" << endl;
   for (int i = 0; i <= time1; i++)
   {
      net1 = -condoPrice + (res1 * i * rent * 12) - (condoPrice * tax) * i - hoa * i;
      cout << "Year " << i << ":  $" << net1 << endl;
   }
   for (int j = 1; j <= time2; j++)
   {
      net2 = -condoPrice + (res1 * (time1 + j) * rent * 12) + (res2 * j * rent * 12) - (condoPrice * tax) * (time1 + j) - hoa * (time1 + j);
      cout << "Year " << j + time1 << ":  $" << net2 << endl;
   }
   cout << "--------------------------------------" << endl;

   return 0;
}