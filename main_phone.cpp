#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "PhoneNumber.h"

int main(){
    PhoneNumber phone;
    cout<<"Entre com o numero nesta forma (123) 456-7890:"<<endl;
    cin>>phone;
    cout<<phone<<endl;
    return 0;
}