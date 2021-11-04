#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,num,rev=0,digit;
    cin>>num;
    while(num>0){
        digit=num%10;
        rev=(rev*10)+digit;
        num=num/10;
        
    }

    cout<<rev;

    return 0;
    
}
