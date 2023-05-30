#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n],b[n],c[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
     for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int count =0;
    for(int i=0;i<n;i++){
       if(abs(a[i]-b[i])<=k){
         c[count]=b[i];
         count++;
       }
    }
    return 0;
}