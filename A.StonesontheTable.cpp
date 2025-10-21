#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int count = 0;
    int tempM;
    string s;
    int n;cin>>n;
    cin>>s;
    for(int i = 0;i<n-1;i++){
        if(s[i] == s[i+1]){
            count++;
        }
    }
    cout<<count<<"\n";
    return 0;

}