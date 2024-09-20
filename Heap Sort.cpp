#include<iostream>
using namespace std;
int main(){
int values[]={1,12,9,5,6,10};
sort s;
s.size=sizeof(values)/sizeof(values[0]);
s.values(values);
cout<<"Unsorted array\n";
s.display();


}
