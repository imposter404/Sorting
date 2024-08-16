#include<iostream.h>

using namespace std;

class sort{ 
    public
      int *arr;
      int size 
      void display();
      void value();
};


void sort::display(){
for(int i = 0;i<size; i++)
{
   cout<<arr[i];
}

}


int main(){
int values=[3,2,89,34,51,62,41,77,92,23];

sort s;
cout<<"Unsorted array is ";
s.display();
cout<<"sorted array is ";
Selection_sort();



}