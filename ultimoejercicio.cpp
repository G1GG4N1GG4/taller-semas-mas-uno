#include <iostream>
using namespace std;
int main(){
  int n;
  double no,suma;
  cout<<"cuántas notas quiere meter ";
  cin>>n;
  if (n<=0 and n>4){
    cout<<"ponga un número q sirva";
    return 1;
  }
  for(int i=1; i<=n; ++i ){
    cout<<"nota "<<i<<": ";
    cin>>no;
    if (n<=0 and n>5){
      cout<<"ponga una nota q es ";
      return 1;
    }
    suma +=no;
  }
  double promedio =suma/n;
  cout<<"promedio :"<<promedio<<"\n";
  cout<<"tercera nota: "<<promedio*0.2;
return 0;
}