// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int KthLargest(vector<int> &arr,int k){
    priority_queue<int,vector<int>,greater<int>>mnhp;

    for(auto &it:arr){
        mnhp.push(it);
        if(mnhp.size()>k){
            mnhp.pop();
        }
    }
    return mnhp.top();
}

int KthSmallest(vector<int> &arr,int k){
    priority_queue<int> mxhp;

    for(auto &it:arr){
        mxhp.push(it);
        if(mxhp.size()>k){
            mxhp.pop();
        }
    }
    return mxhp.top();
}

void solve(){
    int n,k;
    cin>>n>>k;

    vector<int>arr(n);
    for(auto &it:arr)cin>>it;

    cout<<KthLargest(arr,k);
    cout<<endl;
    cout<<KthSmallest(arr,k);
}

int main() {
    solve();
    return 0;
}