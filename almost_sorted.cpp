// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int BS(vector<int>&arr,int num){
    int start=0;
    int end=arr.size()-1;
    int mid;

    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==num)return mid;
        if(mid-1>=0 && arr[mid-1]==num)return mid-1;
        if(mid+1<arr.size() && arr[mid+1]==num)return mid+1;
        // if(mid-1>=0 && num<arr[mid-1])end=mid-2;
        // if(mid+1<arr.size() && num>arr[mid+1])start=mid+2;

        if(num<arr[mid])end=mid-2;
        if(num>arr[mid])start=mid+2;
    }
    return -1;
}

void solve(){
    int n,num;
    cin>>n>>num;
    vector<int>arr(n);
    for(auto &it:arr)cin>>it;
    cout<<BS(arr,num);
}

int main() {
    solve();
    return 0;
}