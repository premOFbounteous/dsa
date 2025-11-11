// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int minIndex(vector<int> &arr,int n){
    int start=0;
    int end=n-1;

    int mid;

    while(start<end){
        mid=start+(end-start)/2;
        if(arr[mid]>arr[end]) start=mid+1;
        else end=mid;
    }
    return start;
}

int BinarySearch(vector<int>& arr,int s,int e,int num){
    int start=s;
    int end=e;
    int mid;

    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==num)return mid;
        if(arr[mid]<num)start=mid+1;
        else end=mid-1;
    }
    return -1;
}

void solve(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(auto &it:arr)cin>>it;

    int min_index = minIndex(arr,n);
    // cout<<min_index;

    int num;
    cin>>num;

    int res=BinarySearch(arr,0,min_index-1,num);
    if(res<0) res=BinarySearch(arr,min_index,n-1,num);
    cout<<res;

}

int main() {
    solve();
    return 0;
}