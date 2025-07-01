//Program 3: 
#include<iostream> 
using namespace std; 
int main () {
 
int arr [4][4];
cout<<"Enter the elements for 4x4 Array:"<<endl;
 for (int r=0; r<4; r++) {
for (int c=0; c<4; c++) { 
cin>>arr[r][c];
}
}
int maxvalue=arr [0][0]; 
for (int r=0; r<4; r++) { 
for (int c=0; c<4; c++)
{
if(arr[r][c]>maxvalue)
 maxvalue=arr[r][c];
}
}
cout<<"the Maximum value in the array is:"<<maxvalue<<endl;
 return 0;}

