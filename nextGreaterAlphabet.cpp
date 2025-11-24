#include<bits/stdc++.h>
using namespace std;

char nextGreaterAlphabet(vector<char> &arr,char alpha){
    int start=0;
    int end=arr.size()-1;
    int mid;
    int res='0';
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]>alpha){
            res=arr[mid];
            end=mid-1;
        }
        else start=mid+1;
    }
    return res;
}

void solve(){
    int n;
    cin>>n;
    char alpha;
    cin>>alpha;
    vector<char> arr(n);
    for(auto &it:arr)cin>>it;
    cout<<nextGreaterAlphabet(arr,alpha);
}

int main(){
    solve();
}