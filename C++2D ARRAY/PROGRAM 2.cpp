//Program 2:
#include<iostream> 
using namespace std;
int main () {
int arr [3][3];
cout<<"Enter the value for Array:"<<endl;
 for (int r=0; r<3; r++) {
for (int c=0; c<3; c++) { 
cin>>arr[r][c];
}
}
int sum=0;
 
for (int r=0; r<3; r++) { 
for (int c=0; c<3; c++) { 
sum+=arr[r][c];
}
}
cout<<"The Sum of Array Elements:"<<sum<<endl;
 return 0;
}

