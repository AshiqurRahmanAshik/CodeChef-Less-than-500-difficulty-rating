/* 
Problem Link:https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CANDIVIDE 
 Date:22/11/25   
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc, x;
    cin >> tc;
    while (tc--){
        cin >> x;
        if (x%3==0){
            cout <<"YES" <<endl;
        }else{
            cout <<"NO" <<endl;

        }
    }
    return 0;
}