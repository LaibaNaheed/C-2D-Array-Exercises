//Program 1:
#include<iostream>
using namespace std; 
int main ()
 {
int array [10];
cout<<"Enter the integer value you want to store:"<<endl; 
for (int i=0; i<10; ++i) {
cout<<"Enter the value of index "<<i<<":";
 cin>>array[i];
}
int repvalue, index;
cout<<"Enter the replacement value:";
 cin>>repvalue;
cout<<"Enter the index (0 to 9) for replacement:";
 cin>>index;
do { array[index]=repvalue;
}
while (index<0||index>=10); 
cout<<"\nUpdated array: "; 
for (int i=0; i<10; ++i) 
{ cout<<array[i]<<" ";
}
return 0;
}
 

