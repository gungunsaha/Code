#include <iostream>
using namespace std ;
void printarray (int arr[] , int size){
    for (int index = 0 ; index< size ; index ++){
        cout << arr[index] << endl;
    }
}
void storemultipleof10 (int arr[] , int size){
    int count = 1 ;
    for ( int index = 0 ; index < size ; index ++){
        arr[index] = 10*count ;
        count ++ ;
    }
}
int main (){
    int arr[10] ;
    int size = 10 ;
    storemultipleof10 (arr ,size);
    printarray(arr, size) ;
    return 0 ;
}