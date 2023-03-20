#include <iostream>
#include <fstream>
using namespace std;


int main(){
    ifstream bac("bac.txt");
    int n; bac >> n;
    int* sir1 = new int[n];
   
    for (size_t i = 0; i < n; i++)
       bac >> sir1[i];

    int c = 0;
    int nr;
    while(bac >> nr)
        {
            int sol = -1; int l = 0; int r = n;
            while(l <= r){
                int m = (l + r) / 2;
                if (sir1[m] == nr){
                    c++;
                    break;
                }
                if (sir1[m] > nr)
                    r = m - 1;
                else if (sir1[m] < nr)
                    l = m + 1;

            }
        }

    cout << c++;
}