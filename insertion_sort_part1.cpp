#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

void _printVector(vector <int> ar_v){

    for(int x = 0; x < ar_v.size(); x++){
        cout << ar_v[x] << " ";
    }
    cout << endl;

}


void insertionSort(vector <int>  ar) {

//If if i > 0 and ar[n - 1] > ar[n] then ar[n] = ar[n - 1]
    int i = ar.size() - 1;
    int key = ar[i];

    while( i > 0 && key < ar[i - 1]){
        ar[i] = ar[i - 1];
        _printVector(ar);
        i--;
    }
    ar[i] = key;
    _printVector(ar);
    
    return;
}
int main(void) {
    vector <int>  _ar;
    int _ar_size;
    cin >> _ar_size;
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp); 
    }

    insertionSort(_ar);
    return 0;
}


