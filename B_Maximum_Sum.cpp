#include<bits/stdc++.h>
using namespace std;
int main()
{
          int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0+i;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    };
    int initalIdx=0;
    int lestIdex = n;
    int p =0;
    int q=1;
    for(int i=0;i<k;i++){
        if(arr[p]+arr[p+1]<arr[n-q]){
            initalIdx = p+2;
        }else{
            lestIdex = n-q;
             q++;
        }
        p+=2;
    }
    long long int sum =0;
    for(int i=initalIdx;i<lestIdex;i++){
        sum+=arr[i];
    }

     cout<<initalIdx<<" "<<lestIdex<<endl;

     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }

    return 0;
}