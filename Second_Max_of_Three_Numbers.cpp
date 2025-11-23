/* 
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/SNDMAX
 Date: 22/11/25  
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc, x,y,z;
    cin >> tc;
    while (tc--){
    cin >> x >> y >> z;
    if ( y > x && y <z){
        cout << y <<endl;
    }
    else if ( x < y && x <z){
        cout << x <<endl;
    }
    else if( z > x && z < y ){
        cout << z <<endl;
    }
    }
    return 0;
}