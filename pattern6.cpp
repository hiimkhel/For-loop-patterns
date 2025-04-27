#include <iostream>

using namespace std;

int main(){
    int n; //number of height

    cout << "Height: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int s = 1; s <= n-i; s++){ //for loops to print spaces
            cout<< " ";
        }
        for(int j = 1; j <= 2 * i - 1; j++){ //for loops to print symbol and each rows is an odd number
            cout<< "*";
        }
        cout<<endl;
    }
    return 0;
}