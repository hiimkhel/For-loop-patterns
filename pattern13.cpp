#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout<<"Height: ";
    cin >> n;
    int counter;
    
    int triangle[50][50] = {2};
    for(int i = 1; i <= n; i++){ //outer loop
        for(int s = 1; s <= n-i; s++){//prints right spaces
            cout << " ";
        }
        for(int j = 1; j <= i; j++){ 
            if(j == 1 || j == i){
                triangle[i][j] = 1;
            }else{
                triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
            }
            cout << triangle[i][j] << " ";
        }
        cout<< endl;
    }
    /* Same pattern but implemented using dynamic array
    vector<vector<int>> triangle;

    for (int i = 0; i < n; i++) {
        vector<int> row(i + 1); // create a row of size i+1

        row[0] = 1;             // first element is always 1
        row[i] = 1;             // last element is always 1

        // fill the in-between elements using previous row
        for (int j = 1; j < i; j++) {
            row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }

        triangle.push_back(row); // add the row to the triangle
    }

    // Print the triangle
    for (int i = 0; i < triangle.size(); i++) {
        for (int s = 0; s < n - i - 1; s++) {
            cout << " "; // print spaces to center the triangle
        }
        for (int j = 0; j < triangle[i].size(); j++) {
            cout << triangle[i][j] << " ";
        }
        cout << endl;
    }*/

    
    return 0;
}