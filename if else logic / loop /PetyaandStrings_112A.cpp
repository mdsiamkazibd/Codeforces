#include<bits/stdc++.h>

using namespace std;

int solution(string a,string b){
    int a_i = 0;
    int b_i = 0;
    for(int i = 0;i<a.length();i++){
        char a_c = tolower(a[i]);
        char b_c = towlower(b[i]);
        if(a_c > b_c){
            a_i ++;
            b_i --;break;
        }else if(a_c < b_c){
            b_i++;
            a_i --;break;
        }

    }
    if(a_i > b_i){
        return 1;
    }else if(a_i < b_i){
        return -1;
    }
    return 0;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string a,b;
    cin>>a>>b;
    cout<<solution(a,b)<<"\n";
    return 0;
}