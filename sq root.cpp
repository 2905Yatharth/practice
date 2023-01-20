//Square root

long long int floorSqrt(long long int x) 
{
    long long int l=1,h=x,mid,ans=-1;
    
    while(l<=h){
        long long int mid =(l+h)/2;
        long long int midSq = mid*mid;
        
        if(midSq == x){
            return mid;
        }
        
        else if(midSq > x){
            h=mid-1;
        }
        
        else if(midSq < x){
            l=mid+1;
            ans =mid;
        }
    }
    return ans;
    // Your code goes here   
}