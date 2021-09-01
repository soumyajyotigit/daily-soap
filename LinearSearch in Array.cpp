//in a user defiened array user will give a key output should be the index of the key if it is in the array
#include <iostream>
using namespace std;

//function for key search
int linearsearch (int arr[],int n,int key){
  for(int i=0;i<n;i++){
    if(arr[i]==key){
      return i;
    } 
  }
  return -1;
}

//array create and key input and output of key index
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int key;
  cin>>key;
  cout<<linearsearch(arr, n, key)<<endl;
  return 0;
}
