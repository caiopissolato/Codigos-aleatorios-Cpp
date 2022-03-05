#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
  int n;
  int i = 1;
  int x = 2;
  cout<<"Entre até quanto vc deseja multiplicar: ";
  cin>>n;
  while(x <= n){
    cout<<x<<"\n";
    x = x * 2;

  }
  return 0;
}
