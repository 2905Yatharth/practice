int maxWater(int height[], int n) 
    { 
        //Your code here
        if(n<=2)
        {
            return 0;
        }
        int i=0,j=n-1,maxwater=0,mini=0;
        while(i<j-1)
        {
           mini = min(height[i],height[j]);
           maxwater = max(maxwater,mini*(j-1-i));
           if(mini == height[j])
           {
               j--;
           }
           else
           {
               i++;
           }
        }
        return maxwater;
    } 