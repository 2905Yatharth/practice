#include <bits/stdc++.h> 

bool checkFeasible(vector<int> arr, int n, int m, int mid){
    int stuCount=1;
    int pgSum=0;
    
    for(int i=0;i<n;i++){
        if(pgSum + arr[i] <= mid){
            pgSum=pgSum+arr[i];
        }
        else{
            stuCount++;
            if(stuCount > m || arr[i] > mid){
                return false;
            }
            pgSum=arr[i];
        }
    }
    return true;
}
int allocateBooks(vector<int> arr, int n, int m) {
    int l=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    int h=sum;
    int ans=-1;
    
    while(l<=h){
        int mid=(l+h)/2;
        if(checkFeasible(arr,n,m,mid)){
            h=mid-1;
            ans=mid;
        }
        else{
            l=mid+1;
        }
    }
    return ans;
    // Write your code here.
}