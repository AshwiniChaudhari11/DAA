// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void sort(int arr[],int n){
    int i;
   
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }}

}
int main() {
   int n;
   cin>>n;
   int arr[n];
   cout<<"enter array elements";
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }cout<<endl;
   sort(arr,n);
   cout<<"sorted array";