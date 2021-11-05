#include<bits/stdc++.h>
using namespace std;
long long int dtob(int n)
{
    int base=1;
    int binary=0;
    while(n!=0){
        int remiender=n%2;
        n/=2;
        binary=binary+base*remiender;
        base=base*10;
    }
    
    return binary;
   
}
int main()
{
    int n;
    cin>>n;
    cout<<dtob(n);
    return 0;
}
