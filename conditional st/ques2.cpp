#include <iostream>
using namespace std;

int main(){
  int year;
  cout << "Enter the year: ";
  cin >> year;

  if(year % 4 == 0|| year % 400 == 0){
    cout << "It's a Leap year";
  } else {
    cout << "It's not a Leap year";
  }
  return 0;
}