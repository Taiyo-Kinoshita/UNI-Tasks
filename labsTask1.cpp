#include <iostream>
using namespace std;


int main(){
  int num;
  cout << "Enter your age:";
  cin >> num;

  if (num >= 18){
    cout << "You are eligable to vote" << endl;
  }else{
    cout << "Wait untill you become 18" << endl;
  }
  return 0;
}