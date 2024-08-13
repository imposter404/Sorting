#include<iostream>
class sort{
 public:
        int arr[];
        int size;
        void display();
};

void sort::display(){

for(int i=0;i<size;i++)
{
 cout<<arr[i];
}

}

int main(){
sort s;
int values[]={1,2,3,4,5,6,7,8,9,10}
cout<<"The unsorted array is";
s.display();
court<<"Sorted array : ";
return 0;
}