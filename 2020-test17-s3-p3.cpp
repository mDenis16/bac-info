#include <iostream>
#include <fstream>
using namespace std;
/* bac.txt
5
4 8 9 16 25
3
8
16
7
25
10
*/

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
            while(l <= r){ //binary search
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