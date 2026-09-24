#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>

//fmod: divide and take the left
//round: round to the nearest integer
//ceil: round up
//floor: round down
// if: calculate (any numbers)
//switch: just for int, char, enum (int numbers)

using std::cout;
using std::string;
using std::fixed;
using std::setprecision;
using std::cin;
using std::getline;
using std::ws;

int main(){
   char day;

   cout << "what day is it today ?:";
   cin >> day;

   switch(day)
   {
      case '1':
      cout << "sunday";
      break;

      case '2':
      cout << "monday";
      break;

      case '3':
      cout << "tuesday";
      break;

      case '4':
      cout << "wednesday";
      break;

      case '5':
      cout << "thursday";
      break;

      case '6':
      cout << "friday";
      break;

      case '7':
      cout << 'saturday';
      break;
   }
   system("pause");
   return 0;
}

   