// some changes are required 

int maxVaccinesAdministered(int n, int dayNumber, int maxVaccines)
{
    int left = dayNumber;
    int right = n - 1 - dayNumber;
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
