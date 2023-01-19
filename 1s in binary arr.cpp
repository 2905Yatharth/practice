// No of 1s in Binary Array 

int countOnes(int arr[], int N)
{
    int l=0;
    int h=N-1;
    int mid;
    
    while(l<=h){
        int mid=(l+h)/2;
        
        if(arr[mid] == 0){
            if(arr[mid-1]==1){
                return mid;
            }
            else{
                h=mid-1;
            }
        }
        else{
            l=mid+1;
        }
    }
    //Your code here
}