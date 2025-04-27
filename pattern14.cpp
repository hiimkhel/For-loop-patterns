#include<iostream>

using namespace std;

int main(){
    int n; 
    cout<< "Height: ";
    cin >> n;
    
    
    for(int i = 1; i <= n * 2 - 1; i++){ //outer loop create rows 2 times the given height -1
        int totalColsInRows =  i > n ? 2 * n - i: i; //create a variable for total colums in rows, conditional to track if rows is less than or exceeds the given height 
        //if exceeds printing loop for symbols would be ending if the row is greater than or equals to the twice the given height minus 1
        for(int s = 1; s <= n-totalColsInRows; s++){ //loop for printing spaces
            cout<< " ";
        }
        for(int j = 1; j <= 2 * totalColsInRows - 1; j++){ //loop for printing each rows
            cout << "*";
        }
        cout<< endl;
    }
    return 0;
}