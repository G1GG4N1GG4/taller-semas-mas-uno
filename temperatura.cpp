#include <iostream>
using namespace std;
int main(){
  int temp, op ;
  cout<<"temperatura ";
  cin>>temp;
  cout<<"celsius 1, farenjain 2, kelvin 3";
  cin>>op;
  switch (op){
    case 1:
    cout<<"farenjain "<<temp*1.8+32<<"\n";
    cout<<"kelvin "<<temp-273.15<<"\n";
    break;
   case 2:
    cout<<"celsius "<<temp-32/1.8<<"\n";
    cout<<"kelvin "<<5/9*(temp-32)-273.15<<"\n";
    break;
     case 3:
    cout<<"farenjain "<<temp-273.15<<"\n";
    cout<<"celsius"<< 1.8*(temp-273.15)+32<<"\n";
    break;
  }
  return 0;
}