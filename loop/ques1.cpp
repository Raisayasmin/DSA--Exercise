#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;
  int fact = 1;

  for(int i=num; i>0; i--){
     fact = fact * i;
  }
  cout << fact << endl;
  return 0;
}





























// #include <iostream>
// using namespace std;
// int main(){
//   int n=10;
//   int first = 0,sec=1;
//   cout << first << " " <<sec << " ";

//   for(int i=2; i<n; i++){
//     int third = first + sec;
//     first = sec;
//     sec = third;
//   }
//   cout << "\n";
//   return 0;
// }