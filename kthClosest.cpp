// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

vector<int> KClosest(vector<int> &arr,int num,int k){
    priority_queue <pair<int,int>> mxhp;

    for(auto it:arr){
        mxhp.push({abs(it-num),it});
        if(mxhp.size()>k)mxhp.pop();
    }

    vector<int>res;

    while(!mxhp.empty()){
        res.push_back(mxhp.top().second);
        mxhp.pop();
    }

    return res;

}

void solve(){
    int n,num,k;
    cin>>n>>num>>k;

    vector<int>arr(n);

    for(auto &it:arr)cin>>it;

    vector<int>res=KClosest(arr,num,k);
    for(auto it:res)cout<<it<<" ";
}

int main() {
    solve();
    return 0;
}