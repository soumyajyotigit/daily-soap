#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,num,rev=0,digit;
    cin>>num;
    n=num;
    while(num>0){
        digit=num%10;
        rev=(rev*10)+digit;
        num=num/10;
        
    }
    if(n==rev){
        cout<<"its a palindrome number";
    }
    else{
        cout<<"its not a palindrome number";
    }

    return 0;
    
}
