// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void KSorted(vector<int> &arr,int k){
    priority_queue <int,vector<int>,greater<int>> mnhp;

    for(int i=0;i<arr.size();i++){
        mnhp.push(arr[i]);
        if(mnhp.size()>k){
            arr[i-k]=mnhp.top();
            mnhp.pop();
        }
    }
    int lstInd=arr.size()-k;
    while(!mnhp.empty()){
        arr[lstInd++]=mnhp.top();
        mnhp.pop();
    }

}

void solve(){
    int n,k;
    cin>>n>>k;

    vector<int>arr(n);

    for(auto &it:arr)cin>>it;

    KSorted(arr,k);
    for(auto it:arr)cout<<it<<" ";
}

int main() {
    solve();
    return 0;
}