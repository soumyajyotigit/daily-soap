#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p;
    cin >> p;
    if(p>=100 && p<=200)
    {
        for(int i=0;i<3;i++)
            cout<<p/4<<endl;

            cout<<p-(3*(p/4))<<endl;
    }
    else
        cout<<"INVALID INPUT";
    return 0;
}
