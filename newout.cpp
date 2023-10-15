// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
int position;
cin>>position;
for(int i=position;i<n-1;i++){
    arr[i]=arr[i+1];
}
cout<<"New modified array"<<endl;
for(int i=0;i<n-1;i++){
    cout<<arr[i]<<endl;
}

    return 0;
}
