// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

bool isValid(vector<int>&arr,int k,int mid){
    int sum=0;
    int noS=1;

    for(auto &it:arr){
        sum+=it;
        if(sum>mid){
            sum=it;
            noS++;
        }
        if(noS>k)return 0;
        
    }

    return 1;
}

void solve(){
    int n,k;
    cin>>n>>k;

    vector<int>arr(n);
    for(auto &it:arr)cin>>it;

    int maxPages=0;
    int sumPages=0;
    for(int i=0;i<n;i++){
        maxPages=max(maxPages,arr[i]);
        sumPages+=arr[i];
    }

    int start=maxPages;
    int end=sumPages;
    int mid;
    int res=0;

    while(start<=end){
        mid=start+(end-start)/2;
        if(isValid(arr,k,mid)){
            res=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    cout<<res;
}

int main() {
    solve();    
    return 0;
}