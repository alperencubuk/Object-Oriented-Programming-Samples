#include <iostream>

using namespace std;

int main()
{
    int **y = new int*[4];

    for(int i = 0; i < 4; i ++){
        y[i] = new int[5];
    }

    for(int i = 0; i < 4; i ++){
        for(int j = 0; j < 5; j++){
            y[i][j] = 1;
        }
    }

    y[0][0] = -2;
    y[1][0] = 0;
    y[1][1] = 0;
    y[2][1] = 0;
    y[2][2] = 0;
    y[2][3] = 0;
    y[3][3] = -1;

    int exit = 0;
    int left = 0;
    int right = 0;
    while(!exit){

        if(y[left + 1][right] == 0 || y[left][right+1] == -1 ) {
            left ++;
        } else if(y[left][right+1] == 0 || y[left][right+1] == -1 ){
            right ++;
        } else if(y[left-1][right] == 0 || y[left-1][right] == -1) {
            left --;
        }
    }




    return 0;
}
