//hexadecimal to decimal...power or base here used 16 
//0....9 and A,B,D,E,F 
//here thats why string should have to use 
#include <bits/stdc++.h>
using namespace std;

int hextodec (string n)
{
  int dec=0;
  int base=1;
  int s=n.size();
  for(int i=s-1; i>=0;i--){
    if (n[i]>='0' && n[i]<='9'){
      dec=dec+base*(n[i]-'0');
    }
    else if(n[i]>='A' && n[i]<='F'){
      dec=dec+base*(n[i]-'A'+10);
    }
    base*=16;
  }
  return dec;
}


int main()
{
  string n;
  cin>>n;
  cout<<hextodec(n)<<endl;
  
}
