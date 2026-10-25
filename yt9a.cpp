# include <iostream> 
using namespace std ;
int main (){
    int arr [] = { 10,20,30,40,50} ;
    int sum = 0 ;
    for ( int index = 0 ; index <= 4 ; index ++){
        sum = sum + arr[index] ;
        }
        cout << " total sum :" <<sum << endl ;
        return 0 ;
}