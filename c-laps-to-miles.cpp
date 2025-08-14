#include <iostream>
#include <iomanip>                 // For setprecision
using namespace std;

double LapsToMiles(double userLaps)
{
   double numLaps;
   return userLaps * 0.25;
}

int main() {
   double userLaps;
   cin >> userLaps;
   cout << fixed << setprecision(2);
   cout << LapsToMiles(userLaps) << endl;

   return 0;
}