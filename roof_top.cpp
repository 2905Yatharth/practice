 int maxStep(int A[], int N)

    {

        int res=0;

        int count=0;

        for(int i=0; i<N-1; i++)

        {

            if(A[i]<A[i+1])

            {

                count++;

            }

            else

            {

                res=max(res,count);

                count=0;

            }

        }

        if(count>0)

        {

            res=max(res,count);

        }

        return res;

       //Your code here

    }

 
