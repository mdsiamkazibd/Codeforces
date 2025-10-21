#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;cin>>n;
    float sum = 0;
    for(int i = 0;i<n;i++){
        float temp;cin>>temp;
        sum += temp;
    }
    cout<<(float) sum/n<<"\n";
    return 0;
}