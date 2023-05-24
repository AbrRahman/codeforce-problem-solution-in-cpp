#include<bits/stdc++.h>
using namespace std;
int main()
{

    int test;
    cin>>test;
    for(int p=1;p<=test;p++){

         int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min_num = INT_MAX;
    for(int i=0;i<n-1;i++){
         for(int j=i+1;j<n;j++){
            int x=i+1;
            int y=j+1;
            int sum = arr[i]+arr[j]+y-x;
            min_num = min(min_num,sum);
         }
    } 
    cout<<min_num<<endl;
    }
    return 0;
}