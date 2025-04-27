#include <iostream>

using namespace std;

int main(){
    int n; //number of height

    cout << "Height: ";
    cin >> n;

   for(int i = 1; i <= n; i++){ //outer lopp
        int val = i % 2; //each row resets to whether 0 or 1
        for(int j = 1; j <= i; j++){//for loop for printing continuous binary number
           cout<< val;  //prints binary
           val = 1 - val; //resets value to next binary of current
        };
        cout<<endl;
   };
    return 0;
}