#include <iostream>

using namespace std;

int main(){
    int n; //number of height

    cout << "Height: ";
    cin >> n;

   for(int i = 1; i <= n; i++){ //outer lopp
        for(int j = 1; j <= i; j++){//for loop for printing the row number increasing each loop
            cout<< i;
        }
        cout<<endl;
   }
    return 0;
}