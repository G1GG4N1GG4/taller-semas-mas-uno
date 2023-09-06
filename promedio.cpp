#include <iostream>
using namespace std;
int main(){
  int n1,n2,n3,n4;
  cout<<"primera nota ";
  cin>>n1;
  cout<<"segunda nota ";
  cin>>n2;
  cout<<"tercera nota ";
  cin>>n3;
  cout<<"cuarta nota ";
  cin>>n4;
  cout<<" nota final ";
  cout<<(n1*0.25)+(n2*0.25)+(n3*0.2)+(n4*0.3);
  return 0;
}