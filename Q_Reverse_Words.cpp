#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    getline(cin,s);

    stringstream ss(s);
    string word;
    string ans;
    while (ss>>word)
    {
        for(int i=word.size()-1;i>=0;i--){
            ans.push_back(word[i]);
        }
      ans.push_back(' ');
    }
    ans.pop_back();
    cout<<ans;
    return 0;
}