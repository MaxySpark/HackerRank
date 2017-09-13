#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int A[6][6];
    for(int i=0;i<6;i++) {
        for(int j=0;j<6;j++) {
            cin >> A[i][j];
        }
    }
    int B[16];
    int count=0;
    for(int i=0;i<=3;i++) {
        for(int j=0;j<=3;j++) {
            B[count] = A[i][j] + A[i][j+1] + A[i][j+2] + A[i+1][j+1] + A[i+2][j] + A[i+2][j+1] + A[i+2][j+2];
            count++;
        }
    }
    sort(B,B+16);
    cout<<B[15];
    return 0;   
}

// https://www.hackerrank.com/challenges/2d-array/problem