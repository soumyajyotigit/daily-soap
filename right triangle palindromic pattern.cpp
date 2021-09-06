//right triangle palindromic pattern
//        1
//      212
//    32123
//  4321234
//543212345

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int j;
    for(int i=1;i<=n;i++){
        for(j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        int k=i;
        for(; j<=(n*2)-i;j++){
            cout<<k--;
        }
        k=2;
        for(;j<=2*n-1;j++){
            cout<<k++;
        }

        cout<<endl;

    }
    return 0;
}
