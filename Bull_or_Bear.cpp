/* 
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/BULLBEAR
 Date: 23/11/25   
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc,x,y;
    cin >> tc;
    while (tc--){
        cin >> x >> y;
        if (x > y){
            cout << "LOSS" << endl;
        }
        else if ( x < y ){
            cout << "PROFIT" << endl;
            
        }else{
            
            cout << "NEUTRAL" << endl;
        }
    }
    return 0;
}