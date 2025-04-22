#include<iostream>

using namespace std;

int main(){
    int n; //number of height

    cout << "Height: ";
    cin >> n;

    for(int i = 1; i <= n; i++){ //outer for loop
        for(int s = 0; s <= n-i;s++){ // for loop for printing spaces
            cout<< " ";
        }
        for(int j = 1; j <= i; j++){ //for loop for printing symbol
            cout<< "*";
        }
        cout<< endl;
    }

    return 0;
}