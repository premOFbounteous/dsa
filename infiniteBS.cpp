#include<bits/stdc++.h>
using namespace std;

int BS(vector<int> & arr,int s,int e,int num){
    int start=s;
    int end=e;
    int mid;

    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==num)return mid;
        if(arr[mid]>num)end=mid-1;
        else start=mid+1;
    }

    return -1;
}

int infiniteBS(vector<int> &arr,int num){
    int start=0;
    int end=1;

    while(arr[end]<num){
        start=end;
        end*=2;
    }

    return BS(arr,start,end,num);
    
}

void solve(){
    int n;
    cin>>n;
    int num;
    cin>>num;
    vector<int> arr(n);
    for(auto &it:arr)cin>>it;
    cout<<infiniteBS(arr,num);
}

int main(){
    solve();
}