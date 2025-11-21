/* 
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/AUDIBLE
 Date: 22/11/25  
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc,fq;
    cin >> tc ;
    while(tc--){
        cin >> fq;
    
        if (fq>=67 && fq <=45000){
        cout << "YES" << endl;
        } 
        else{
        cout << "NO" << endl;
    }
    }
    return 0;
}
