//left index
int leftIndex(int N, int arr[], int X){
    int l=0;
    int h=N-1;
    int mid;
    int ans=-1;
    
    while(l<=h){
        int mid=(l+h)/2;
        
        if(X < arr[mid]){
            h=mid-1;
        }
        
        else if(X > arr[mid]){
            l=mid+1;
        }
        
        else{
            ans=mid;
            h=mid-1;
        }
    }
    return ans;
    // Your code here
    
}
