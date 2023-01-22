// Painters Partition Porblem 

bool isValid(vector<int> &boards, int k, int mid){
    int painterCount=1;
    int portSum=0;
    
    for(int i=0;i<boards.size();i++){
        if(portSum + boards[i] <= mid){
            portSum+=boards[i];
        }
        else{
            painterCount++;
            if(painterCount > k || boards[i] > mid ){
                return false;
            }
            portSum=boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int l=0;
    int sum=0;
    for(int i=0;i<boards.size();i++){
        sum=sum+boards[i];
    }
    int h=sum;
    int mid;
    int ans=-1;
    
    while(l<=h){
        int mid=(l+h)/2;
        
        if(isValid(boards,k,mid)){
            h=mid-1;
            ans=mid;
        }
        else{
            l=mid+1;
        }
    }
    return ans;
    //    Write your code here.
}