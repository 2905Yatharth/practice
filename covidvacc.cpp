// some changes are required 
// works fine

int solve(int mid, int left, int right)
{
    int sum = mid * mid;
    
    if (mid - 1 >= left)
    {
        int k = mid - 1 - left;
        sum -= k * (k + 1) / 2;
    }
    
    else
    {
        sum += left - mid + 1;
    }

    if (mid - 1 >= right)
    {
        int k = mid - 1 - right;
        sum -= k * (k + 1) / 2;
    }
    
    else
    {
        sum += right - mid + 1;
    }

    return sum;
}

int maxVaccinesAdministered(int n, int dayNum, int maxVaccines)
{
    int left = dayNum;
    int right = n - 1 - dayNum;
    int start = 1;

    int end = maxVaccines;

    while (start <= end)
    {
        int mid = (end - start) / 2 + start;
        int x = solve(mid, left, right);

        if (x == maxVaccines)
        {
            return mid;
        }

        if (x < maxVaccines)
        {
            start = mid + 1;
        }

        else end = mid - 1;
    }

    return end;
  // your code here
}
