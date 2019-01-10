//
// Created by Saijun Hu on 2019/1/9.
//

#include <iostream>
using namespace std;

/*请实现折半查找，并按顺序输出被访问的元素下标*/
template <typename T>
int binSearch(T arr[], int n, T key){
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        cout<<mid<<endl;
        if (key == arr[mid]) {return mid;}
        else if (key < arr[mid]) {high = mid-1;}
        else{ low = mid + 1;}
    }
    return -1;
}

int main()
{
    int n, m;
    int key1;
    double key2;
    cin >> n >> m >> key1 >> key2;
    int* arr_int = new int[n];
    double* arr_double = new double[m];
    for (int i = 0; i < n; ++i)
        cin >> arr_int[i];
    for (int i = 0; i < m; ++i)
        cin >> arr_double[i];
    binSearch(arr_int, n, key1);
    binSearch(arr_double, m, key2);
    return 0;
}
