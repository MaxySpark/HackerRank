#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int insertIndex(int x,int lastAnswer,int N) {
    return ((x^lastAnswer) % N);
}

int main() {
    int N,Q;
    cin >> N;
    cin >> Q;

    vector<vector<int>> seq;

    int lastAnswer=0;
    int QL[Q][3];

    for(int i=0;i<Q;i++) {
        for(int j=0;j<3;j++) {

            cin >> QL[i][j];

        }
    }
    seq.resize(N);

    for(int i=0;i<Q;i++) {
        if(QL[i][0]==1) {

            int temp = insertIndex(QL[i][1],lastAnswer,N);
            seq[temp].push_back(QL[i][2]);

        } else if(QL[i][0]==2) {

            int temp = insertIndex(QL[i][1],lastAnswer,N);
            lastAnswer = seq[temp][QL[i][2] % seq[temp].size()];
            cout<<lastAnswer<<endl;
        }
    }

    return 0;
}

