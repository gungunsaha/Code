#include <iostream>
using namespace std ;
void printarray (int arr[] , int size){
    for ( int index = 0 ; index< size ; index++){
        cout << arr[index] << " " ;
    }
}
void flipzeroone (int arr[] , int size){
    for (int index = 0 ; index < size ; index++ ){
        if (arr[index] ==1) {
            arr [index ]= 0 ;
        }
        else {
            arr[index] =1 ;
        }
    }
}
int main (){
    int arr []= {1,1,0,0,0,1,0,1};
    int size = 8 ;
    cout << "before;" ;
    printarray ( arr , size );
    cout << endl;
    flipzeroone ( arr , size) ;
    cout << "after : " ;
    printarray ( arr , size );
    cout << endl;
return 0 ;
}