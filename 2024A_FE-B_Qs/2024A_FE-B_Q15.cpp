#include<iostream>
using namespace std;

int main(){

    double pmat[3][3] = {
        {0.3, 0.4, 0.3},
        {0.2, 0.7, 0.1},
        {0.25, 0.5, 0.25}
    };

    double dmat[3][3];
    double smat[3][3];

    int i, j, k, m;

    // dmat = pmat (initial)
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            dmat[i][j] = pmat[i][j];

    // loop 2 times → total = P³
    for(m = 0; m < 2; m++){
        // reset smat
        for(i = 0; i < 3; i++)
            for(j = 0; j < 3; j++)
                smat[i][j] = 0;
        // matrix multiplication
        for(i = 0; i < 3; i++)
            for(j = 0; j < 3; j++)
                for(k = 0; k < 3; k++)
                    smat[i][j] += dmat[i][k] * pmat[k][j];
        // update dmat
        for(i = 0; i < 3; i++)
            for(j = 0; j < 3; j++)
                dmat[i][j] = smat[i][j];
    }

    // output result (P³)
    cout << "Final Matrix:" << endl;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            cout << dmat[i][j] << "  ";
        cout << endl;
    }

    return 0;
}
