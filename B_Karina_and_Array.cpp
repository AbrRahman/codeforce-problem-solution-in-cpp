#include<bits/stdc++.h>
using namespace std;
void fun(void){
    int n;
    cin>>n;
   long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    long long int ans;
    if(a[0]*a[1]>=a[n-1]*a[n-2]){
        ans=a[0]*a[1];
    }else{
        ans=a[n-1]*a[n-2];
    }
    cout<<ans<<endl;
}
int main()
{
    int test;
    cin>>test;
    while (test--)
    {
        fun();
    }
    
    return 0;
}