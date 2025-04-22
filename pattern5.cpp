#include<iostream>

using namespace std;

int main(){
    int n; //number of height

    cout << "Height: ";
    cin >> n;

    for(int i = 1; i <= n; i++){//outer loop
        for(int s = 1; s <= i-1; s++){
            cout<< " "; // loop to print spaces
        }
        for(int j = 1; j <= n-i+1; j++){ // loop to print symbol
            cout<< "*";
        }
        cout<< endl;
    }

    return 0;
}