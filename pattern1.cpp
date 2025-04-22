#include<iostream>

using namespace std;

int main(){
    int height, multiplier; //input for tables height and what to multiply by

    cout <<"Enter table's height: ";
    cin >> height;
    cout<<"Enter multiplier: ";
    cin >> multiplier;

    for(int i = 1; i <= height; i++){
        cout<< multiplier << " x " << i << " = " << multiplier * i << endl;
    }

    return 0;
}