#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int countOccurance(vector<string> list,string str) {
    int count = 0;
    for(int i=0;i<list.size();i++) {
        if(list.at(i)==str) {
            count++;
        }
    }
    return count;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N;
    cin>>N;
    vector<string> list;
    vector<string> query;
    for(int i=0;i<N;i++) {
        string temp;
        cin>>temp;
        list.push_back(temp);
        
    }
    int Q;
    cin>>Q;
    int Total[Q];
    for(int i=0;i<Q;i++) {
        string temp;
        cin>>temp;
        query.push_back(temp);
        
    }
    for(int i =0;i<Q;i++) {
        Total[i] = countOccurance(list,query.at(i));
        cout<<Total[i]<<endl;
    }

    return 0;
}
