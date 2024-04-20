// Purpose: Fibonacci calculation with recursion
// ========================================================================================================== //
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define all(x) (x).begin(), (x).end()                        // Sort The String From The Beginning.
#define rall(x) (x).rbegin(), (x).rend()                        // Sort The String From The End.
#define from_begin(array, num) sort(array, (array+num))                // Sort the array in ascending order.
#define from_end(array, num) sort((array), (array+num), greater<ll>())      // Sort the array in descending order.
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
#define Hero ios::sync_with_stdio(0), ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
const ll MAX_CHAR = 256;
using namespace std;

long long fib2(int n, ll current, ll next)
{
    if (n == 1)
       return next;
    else {
       return fib2 (n - 1, next, next +  current);
    }
}

long long fib(int n){
    return fib2 (n, 0, 1);
}

int main ()
{
    long long n;
    cout << "Please enter number of Fibonacci items you want: ";
    cin >> n;
    for (int i = 1; i <= n; i++){
        cout << setw(3) << i << "- " << fib(i) << endl;
    }
    return 0;
}
