#include<bits/stdc++.h>

using namespace std;

int solution(int n){
    int x = 0;
    while (n--)
    {
        string s;
        cin >> s;
        if(s == "X++" || s == "++X"){
            x++;
        }
        else{
            x--;
        }
    }
    return x;
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;cin>>n;
    cout<<solution(n)<<"\n";
    return 0;
}