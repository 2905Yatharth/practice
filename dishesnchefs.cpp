#include <vector>
using namespace std;

long long minimumTime(int m, vector<int> &a) {
    
    
    int n = a.size();

    
    long long mx = 0;
    for (int i = 0; i < n; ++i) {
        mx = max(mx, (long long)a[i]);
    }


    long long l = 1, r = mx * m, ans = mx * m;

  
    while (l <= r) {

        long long mid = (l + r) / 2;

        long long dishes = 0;
        for (int i = 0; i < n; ++i) {
            dishes += mid / a[i];
        }

       
        if (dishes < m) {
            l = mid + 1;
        }
        else {
            ans = mid;
            r = mid - 1;
        }
    }
// write your code here.

    return ans;
}
