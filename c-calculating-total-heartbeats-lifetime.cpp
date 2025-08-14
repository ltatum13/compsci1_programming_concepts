#include <iostream>
using namespace std;

int main() {
   int userAgeYears;
   int userAgeDays;
   int userAgeMinutes;
   int totalHeartbeats;
   int avgBeatsPerMinute = 72;
   
   cout << "Enter your age in years: ";
   cin  >> userAgeYears;
   
   userAgeDays = userAgeYears * 365;               // Calculate days without leap years
   userAgeDays = userAgeDays + (userAgeYears / 4); // Add days for leap years
   
   cout << "You are " << userAgeDays << " days old." << endl;
   
   userAgeMinutes = userAgeDays * 24 * 60;         // 24 hours/day, 60 minutes/hour
   cout << "You are " << userAgeMinutes << " minutes old." << endl;

   totalHeartbeats = userAgeMinutes * avgBeatsPerMinute;
   cout << "Your heart has beat " << totalHeartbeats << " times." << endl;
   cout << endl;

   double milesTravel; // User input of miles to travel
   double hoursFly;    // Travel hours if flying those miles
   double hoursDrive;  // Travel hours if driving those miles
   
   cout << "Enter miles to travel: ";
   cin  >> milesTravel;
   
   hoursFly   = milesTravel / 500.0; // Plane flies 500 mph
   hoursDrive = milesTravel / 60.0;  // Car drives 60 mph
   
   cout << milesTravel << " miles would take:" << endl;
   cout << "   " << hoursFly << " hours to fly" << endl;
   cout << "   " << hoursDrive << " hours to drive" << endl;
   cout << endl;
   
   return 0;
}