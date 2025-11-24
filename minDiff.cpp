#include<bits/stdc++.h>
using namespace std;


int minDiffBS(vector<int> &arr,int num){
    
    int start=0;
    int end=arr.size()-1;
    int mid;

    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==num){
            return mid;
        }
        if(arr[mid]>num)end=mid-1;
        else start=mid+1;
    }

    if (end < 0) return start;               //edge case
    if (start >= arr.size()) return end;  //edge case

    if(abs(arr[end]-num)<abs(arr[start]-num))return end;
    else return start;
    
}

void solve(){
    int n;
    cin>>n;
    int num=1;
    cin>>num;
    vector<int> arr(n);
    for(auto &it:arr)cin>>it;
    cout<<minDiffBS(arr,num);
}

int main(){
    solve();
}