// Aggressive Cows



bool checkFeasible(vector<int> &stalls, int k, int mid){
    int cowCount=1;
    int recPos=stalls[0];
    
    for(int i=0;i<stalls.size();i++){
        if(stalls[i]-recPos >= mid){
            cowCount++;
            if(cowCount == k){
                return true;
            }
            recPos=stalls[i];
        }
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
    int l=0;
    int Max=0;
    for(int i=0;i<stalls.size();i++){
        Max=max(stalls[i],Max);
    }
    int h=Max;
    int ans=-1;
    
    while(l<=h){
        int mid=(l+h)/2;
        if(checkFeasible(stalls,k,mid)){
            l=mid+1;
            ans=mid;
        }
        else{
            h=mid-1;
        }
    }
    return ans;
    
   
    //    Write your code here.
}