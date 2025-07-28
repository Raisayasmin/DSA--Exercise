
#include <iostream>
using namespace std;
int main(){
  int num = 210;
  int originalnum = num;
  int sum = 0;

  while(num > 0){
  int digit = num % 10;
  int cube = digit * digit * digit;
  sum += cube;
  num = num / 10;
  }

  if(originalnum == sum){
    cout << "It's an armstrong number";
  } else {
    cout << "Not an Armstrong number";
  }
  return 0;
}