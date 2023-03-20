#include <iostream>
#include <fstream>
using namespace std;
// bac.in 9731 50 112 20 8 16 8520 3 2520 1520
// bac.out  20 1520
int main(){

    ifstream bac("bac.in");
    ofstream bac("bac.out");
    int n; bac >> n;
    int u[2] = {n, n};
    while(bac >> n){
        if (n / 10 % 10 == 2 && n % 10 == 0){
            if (n < u[0])
                u[0] = n;
            else if ( n < u[1])
                u[1] = n;
        }
    }
    cout << u[0] << " " << u[1] << endl;
}