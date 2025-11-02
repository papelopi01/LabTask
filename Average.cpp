#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter elements :";
    cin>>n;
    int arr[n];
    int sum = 0;
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<":";
        cin>>arr[i];
        sum +=arr[i];
    }
    cout<<"Average "<<(float)sum/n;
    return 0;


}
