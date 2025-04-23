#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"Height: ";
    cin >> n;

    for(int i = 1; i <= n; i++){ //outer loop
        for(int j = 1; j <= n; j++){ //loop to print hollow square each row has a column of height
            if(j == 1 || j == n || i == 1 || i ==n){  //prints symbol if first colum, last column, first row, and last row
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