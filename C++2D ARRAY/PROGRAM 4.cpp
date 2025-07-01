//PROGRAM 4
#include <iostream> 
#include <iomanip> 
using namespace std; 
int main () {
int table [3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
cout << " The Vales of 2D array in the form of Table:" << endl;
 for (int i = 0; i < 3; ++i) {
for (int j = 0; j < 4; ++j) { 
cout << setw(5) << table[i][j];
}
cout << endl;
}
return 0;}

