#include <iostream>
using namespace std;


void mswp(){
    int size_a, size_b, mines;
    cin >> size_a>> size_b>> mines;
    int mines_column = 2;
    int mines_rows = mines;
    int matrix_mines[mines_rows][mines_column];
    for (int i = 0; i < mines_rows; i++){
        for (int j = 0; j < mines_column; j++){
            cin >> matrix_mines[i][j];
        }    
    }
    int desk[size_a][size_b];
    for (int i = 0; i < size_a; i ++){
        for (int j = 0; j < size_b; j ++){
            desk[i][j] = false;//cells with nothing

        }
    }
    for (int i = 0; i < mines_rows; i++){
        for (int j= 0; j < mines_column; j++){
            desk[matrix_mines[i][0]][matrix_mines[i][1]] = 1;//bomb

        }
    }  
    int result[size_a][size_b];
    for (int i = 0; i < size_a; i++){
        for (int j = 0; j < size_b; j++){
            int sum_mines = 0;
            for (int x_cordinat = i - 1; x_cordinat <= i + 1; x_cordinat++){
                for (int y_cordinat = j - 1; y_cordinat <= j + 1; y_cordinat++){
                    if (x_cordinat > -1 && y_cordinat > - 1 && x_cordinat < size_a && y_cordinat < size_b){
                        if (desk[x_cordinat][y_cordinat] == 1){
                            sum_mines += 1;
                        }
                    }
                }
            }
            if (desk[i][j] == 1){
                result[i][j] = 0;}
            else{
                result[i][j] = sum_mines;}
        }
    }
    for (int i = 0; i < size_a; i++){
        for (int j = 0; j < size_b; j++){
            if (desk[i][j] == 1) {
                cout << " * ";
            }
            else if (result[i][j] == 0) {
                cout << " . ";
            }
            else {
                cout << " " << result[i][j] << " ";
            }
        }
        cout << endl;
    }
}


int main(){
    mswp();
    return 0;
}