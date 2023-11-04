#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    //cout<<"subarray: ";
    int k=0 ;
    while(k<n)
    {
        for(int i=k; i<n; i++)
        {
            for(int j=k; j<=i; j++)
            {
                cout<<a[j]<<" ";
            }
            cout<<endl;
            //cout<<"update new subarray:--"<<endl;
        }
        k++;

    }



    return 0;
}
