#include <iostream>

using namespace std;

int main(){
    int n;
    cout <<"Height: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int s = 1; s <= 1; s++){
            if(i % 2 == 0){
                cout << " ";
            }
        }
        for(int j = 1; j <= n; j++){
            cout<< "*";
        }
        cout<< endl;
    }
    return 0;
}