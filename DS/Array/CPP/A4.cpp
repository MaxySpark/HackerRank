#include <bits/stdc++.h>

using namespace std;

vector <int> leftRotation(vector <int> a, int d) {
    // Complete this function
    vector<int> tempV;
    for(int i=0;i<d;i++) {
        tempV.push_back(a.at(i));
    }
    for(int i=0;i<a.size()-d;i++) {
        a[i]=a.at(i+d);
    }
    int count = 0;
    
    for(int i=a.size()-d;i<a.size();i++) {
        a[i]=tempV.at(count);
        count++;
    }
    
    return a;
}

/*

// Exceeded Time Limit

vector <int> leftRotation(vector <int> a, int d) {
    // Complete this function
    for(int i=0;i<d;i++) {
        int temp = a.at(0);
        for(int j=0;j<a.size()-1;j++) {
            a[j]=a.at(j+1);
        }
        a[a.size()-1]=temp;
    }
    return a;
}

*/

int main() {
    int n;
    int d;
    cin >> n >> d;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector <int> result = leftRotation(a, d);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}
