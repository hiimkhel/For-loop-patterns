#include <iostream>

using namespace std;

int main(){
    int n; //number of height

    cout << "Height: ";
    cin >> n;
    int num; //global variable to track current number to print
   for(int i = 1; i <= n; i++){ //outer lopp
        for(int j = 1; j <= i; j++){//for loop for printing continuous number with the row number as number of each rows z
            num++; //increment by 1 each loop
            cout <<num << " ";
        }
        cout<<endl;
   }
    return 0;
}