/* 
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/TOP10
 Date:   17/11/25
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc, place;
    cin >> tc;
    while(tc--){
         cin >> place;
    if(place<=10){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    }
    return 0;
}