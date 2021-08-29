//binary to decimal conversion
//decimmal initially=0; base is like 2^power alike pow function; thn decimal=decimal+base*remiender; base=base*2[this works as power increment]
#include <iostream>
using namespace std;

int btod (int n)
{
  int base=1;
  int decimal=0;
  while(n!=0)
  {
    int remiender=n%10;
    decimal=decimal+base*remiender;
    base=base*2;
    n=n/10;
  }
  return btod;
}

int main() {
  int n;
  cin>>n;

  cout<<btod(n)<<endl;
  return 0;
}
