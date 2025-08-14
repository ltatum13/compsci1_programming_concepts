#include <iostream>
using namespace std;

int CalculateCost(int age, int units) {
   int cost;
   if (age >= 18 && age <= 30) {
      if (units > 5) {
         cost = (units - 5) * 100; 
      }
      else {
         cost = 0;
      }
   }
   else {
      if (units < 20) {
         cost = units * 100;
      }
      else {
         cost = (units - 19) * 400 + 300;
      }
   }
   return cost;
}
    
int main() {
   int costReturned = CalculateCost(32, 16);
   
   cout << costReturned << endl;
   
   return 0;
}