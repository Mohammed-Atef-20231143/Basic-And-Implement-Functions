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
using namespace std;

/*
 --> This Function "stringRepeat" Will Repeat The String:
 ----> string st: The String That Will Be Repeated
 ----> long long r: The Number Of Repeating
 ----> string sep: The Separator Between The Repeated Strings
 ----> return string
 */

string stringRepeat (string st, ll r = 2, string sep = ""){
    string result;
    for (int i = 0; i < r; ++i) {
        result += st;
        if (i < r-1){result += sep;}
    }
    return result;
}

/*
 --> The join function concatenates elements of a "vector<string>" into a single string, with each
     element separated by a specified separator "sep". The default separator is a space character " ".
 */

string join (vector<string> names, string sep = " "){
  string result;
  for (int i = 0; i < names.size(); i++){
    result += names[i];
    if (i != names.size() -1) {result += sep;}
  }
  return result;
}

// This function is designed to split a string into individual words based on a specified delimiter.

string split(string str, string del = " "){
    vector<string> temp;
    string res = "";
    int start, end = del.size() * -1;
    do {
        start = end + del.size();
        end = str.find(del, start);
        string x = str.substr(start, end - start);
        if (!temp.empty()) {temp.push_back(x);}
    } while (end != -1);
    for (int i = 0; i < temp.size(); ++i) {
        res += temp[i];
        if (i != temp.size()-1) {res += " ";}
    }
    return res;
}

int main() {
    Hero;
    ll num;
    string txt, cr;
    cin >> txt >> num >> cr;
    cout << stringRepeat(txt, num, cr) << endl;
    cout << join({"FCAI", "Cairo", "University"}) << endl;
    cout << split("geeks_for_geeks", "_") << endl;
    
    return 0;
}
