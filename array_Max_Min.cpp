//user gives array elements and find out 2 elements those are max and min 
#include <climits>
using namespace std;

int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int maxno=INT_MIN;
  int minno=INT_MAX;
  for(int i=0;i<n;i++){
    if (arr[i]>maxno){  //maxno=max(maxno,arr[i];    instade of if loop
      maxno=arr[i];
    }
    if (arr[i]<minno){  //minno=min(minno,arr[i];   without using the if loop
      minno=arr[i];
    }
    
  }
  cout<<maxno<<endl<<minno<<endl;
  return 0;

}
