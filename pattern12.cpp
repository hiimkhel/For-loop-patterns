#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"Height: ";
    cin >> n;

    for(int i = 1; i <= n; i++){ //outer loop
        for(int j = 1; j <= i; j++){ //loop to print hollow triangle each row has a column of height
            if(i == 1 || j == 1 || j == i || i == n){  //prints symbol if first colum, last column, first row, and last row
                cout<< "*";
            }
            else{
                cout<< " ";
            }
        }
        cout<< endl;
    }

    
    return 0;
}