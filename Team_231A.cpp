#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<vector<int>> nums;
    int n;
    int ans = 0;
    cin>>n;

    for(int i = 0;i<n;i++){
        int count = 0;
        vector<int> row;
        for(int j = 0;j<3;j++){
            int temp;
            cin>>temp;
            if(temp == 1)count++;
            row.push_back(temp);
        }
        nums.push_back(row);
        if(count>=2)ans++;
    }
    cout<< ans<<"\n";
    return 0;
}