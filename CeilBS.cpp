#include<bits/stdc++.h>
using namespace std;

int CeilBS(vector<int> &arr,int num){
    int start=0;
    int end=arr.size();
    int mid;
    int res=-1;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==num)return arr[mid];
        if(arr[mid]<num){
            res=arr[mid];
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return res;
}

void solve(){
    int n,num;
    cin>>n>>num;
    vector<int> arr(n);
    for(auto &it:arr)cin>>it;
    cout<<CeilBS(arr,num);
}

int main(){
    solve();
}