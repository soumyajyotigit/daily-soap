//octal to decimal
//only here we have to multiply 8 with base as base of octal number=8

#include <iostream>
using namespace std;



int octaltodec (int n)
{
  int base=1;
  int decimal=0;
  while(n!=0)
  {
    int remiender=n%10;
    decimal=decimal+base*remiender;
    base=base*8;
    n=n/10;
  }
  return decimal;
}

int main() {
  int n;
  cin>>n;

  cout<<octaltodec(n)<<endl;
  return 0;
}
