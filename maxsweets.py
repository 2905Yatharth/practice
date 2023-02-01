def countSubArray(nums,minSweetness,k):
       c =0 
       s = 0 
       for num in nums:
           s+= num
           if s>=minSweetness:
               c+=1 
               s=0 
       return c>=k 
    # your code here   
def getMaximumSweetness(nums, k):
       low = min(nums)
       high = sum(nums)
       ans = 0   
       
       while low<=high:
           mid = low+(high-low)//2 
           
           if countSubArray(nums,mid,k+1):
               ans = mid 
               low =mid+1 
              
           else:
                high = mid-1 
                
       return ans 
