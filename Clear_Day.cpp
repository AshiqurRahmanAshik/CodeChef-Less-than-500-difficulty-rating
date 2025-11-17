/* 
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CLEARDAY
 Date:   17/11/25
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int clearDay, cloudyDay, rainyDay;
    cin >> cloudyDay >> rainyDay;
    clearDay = 7-(cloudyDay+rainyDay);
    cout << clearDay;

    return 0;
}