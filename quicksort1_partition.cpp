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


void  _print_vector(vector <int> v){

    
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
     }
    return;
}

void partition(vector <int>  ar) {
   // Enter code for partitioning and printing here. 
    int pivot = ar[0];
    vector <int> left, equal, right;
    equal.push_back(pivot);
    for(int i = 1; i < ar.size(); i++){

        if( ar[i] >= pivot)
            right.push_back(ar[i]);

        if( ar[i] < pivot)
            left.push_back(ar[i]);
    }

    _print_vector(left);
    _print_vector(equal);
    _print_vector(right);
    cout << endl;
    return;
}


int main(void){
   vector <int>  _ar;
   int _ar_size;
   cin >> _ar_size;
    
     for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp); 
    }

   partition(_ar);
   
   return 0;
}


