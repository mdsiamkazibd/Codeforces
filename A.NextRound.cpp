#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,k;
    cin>>n>>k;
    vector<int> nums;
    int count = 0;
    for(int i = 0;i<n;i++){
        int temp;cin>>temp;
        nums.push_back(temp);

    }
    for(int i = 0;i<n;i++){
        if(nums[k-1] <= nums[i] && nums[i] != 0)count++;
    }
    cout<<count<<"\n";
    return 0;
}