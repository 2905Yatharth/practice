#include<algorithm>
int minRemovals(vector<int>& arr, int n, int k)
{
	// Write your code here.
    int answer=n;
  
    sort(arr.begin(),arr.end());
  
    for(int i=0;i<n;i++){
  
      for(int j=i;j<n;j++){
      
        if(arr[j]-arr[i]<=k){
                answer=min(answer,n-(j-i+1));
            }
        }
    }
  
  
    return answer;
}
