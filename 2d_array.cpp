#include<iostream>
using namespace std;

// #Row sum
void rowSum(int arr[3][3]){
    for(int i = 0; i < 3; i++){
        int sum = 0;
        for(int j = 0; j < 3; j++){
            sum += arr[i][j];
        }
        cout << "Sum of " << i << " row is " << sum << endl;
    }
}

//Print like a wave
void wavePrint(int arr[3][3]){
    for(int j = 0; j < 3; j++){
        if(j % 2 == 0){
            for(int i = 0; i < 3; i++){
                cout << arr[i][j] << " ";
            }
        }else{
            for(int i = 2; i >= 0; i--){
                cout << arr[i][j] << " ";
            }
        }
    }
}
int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int rowI=0;
        int colI=col-1;

        while(rowI<row && colI>=0){
            int ele = matrix[rowI][colI];
            if(ele == target){
                return true;
            }
            else if(ele < target){
                rowI++;
            }
            else{
                colI--;
            }
        }
        return false;
    }
};