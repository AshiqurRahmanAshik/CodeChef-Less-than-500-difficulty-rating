/* 
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/DETSCORE
 Date:   18/11/25
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc, totalPoints,passedTestCase;
    cin >> tc ;
    while (tc--){
        cin >> totalPoints;
        cin >> passedTestCase;
        int result = (totalPoints/10)*passedTestCase;
        cout << result << endl;
    }

    return 0;
}