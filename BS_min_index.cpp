// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int minIndex(vector<int> &arr,int n){
    int start=0;
    int end=n-1;

    int mid;

    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]<arr[(mid+1)%n] && arr[mid]<arr[(mid+n-1)%n]) return mid;
        if(arr[mid]>arr[start]) start=mid+1;
        else end=mid;
    }
    return -1;
}

void solve(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(auto &it:arr)cin>>it;

    int min_index = minIndex(arr,n);
    cout<<min_index;
}

int main() {
    solve();
    return 0;
}