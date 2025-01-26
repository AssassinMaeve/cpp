#include<iostream>
using namespace std;


void waveprint(int **arr, int rows, int cols){
    for ( int i = 0 ; i < cols ; i++){
        if (i % 2 == 0){
            for(int j = 0 ; j < rows ; j++){
                cout << arr[j][i] << " ";
            }
        } else {
            for (int j = rows - 1 ; j >= 0 ; j--){
                cout << arr[j][i] << " ";
            }
        }
    }
    cout << endl;
}

int main(){
    int rows;
    int cols;

    cout << "Enter the rows and cols " << endl;
    cin >> rows >> cols;

    int** arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }

    cout << "Enter the elements of the array: " << endl;
for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
        cin >> arr[i][j];
    }
}

cout << "The elements in the array are: " << endl;
for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
        cout << arr[i][j] << " ";
    }
    cout << endl;
}
    
    cout << "This is the waveprint " << endl;
    waveprint(arr, rows, cols);

    return 0;
}