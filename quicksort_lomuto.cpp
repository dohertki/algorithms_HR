//============================================================================
// Name        : quicksort_lomuto.cpp
// Author      : Kierin Doherty
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


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


void  _print_vector(vector <int> v, int low, int high){


    for(int i = low ; i <= high ; i++){
        cout << v[i] << " ";
     }
    cout<<endl;
    return;
}

void swapV(vector <int> &ar, int a, int b){

    int c = ar[a];

    ar[a] = ar[b];
    ar[b] = c;

    return;
}


int partition(vector <int>  &ar, int low, int high) {
   // Enter code for partitioning and printing here.


//    int v_size = ar.size();
	int pivot = ar[high];
    int i = low - 1  ;

    for (int j = low; j < high; j++){
        if(ar[j] <= pivot){
            i++;
            swapV(ar, i, j);
         //   flag = 1;
        }
    }
    i++;
    swapV(ar, i, high);

    return i;

}

void quickSort(vector <int> &arr, int low, int high) {
   // Complete this function

    int p;
    int v_size = arr.size();
    if( low < high){

        p = partition(arr, low, high);
        _print_vector(arr,0 , --v_size);
        quickSort(arr, low, p-1 );
       
        quickSort(arr, p + 1, high);

    }
    return;



}




int main() {

  //  int arr[] = {1,3,9,8,2,7,5};

    vector<int> _ar;
  //  vector <int>  _ar(arr, arr + sizeof(arr) / sizeof(arr[0]))  ;
    int _ar_size = 7;

 //   cout<< "Fixed. Enter the size:"<< endl;
    cin >> _ar_size;
//    cout<< "The size is: "<< _ar_size << endl;
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
//        cout << "Enter value " << _ar_i +1 << " :" ;
        cin >> _ar_tmp;
//        cout << endl;
        _ar.push_back(_ar_tmp);
    }

   _ar_size--;

    quickSort(_ar, 0, _ar_size);

  //  _print_vector(_ar,0 , _ar_size);

    return 0;
}
