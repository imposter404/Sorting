#include<iostream>

class sort{
    public:
    int* arr;
    int size;
    void display();
};

void sort:: display(){
  for(int i=0;i<size;i++)
  {
    cout<<arr[i]<<" ";
  }
}


Void Quick_sort(int arr[],int a,int b){
if(a<b)
{
int p= partition(arr,a,b)
Quick_sort(arr,a,p-1)
Quick_sort(arr,p+1,b);

}


}





int main(){
int values =[23,42,65,91,36,72,02];
cout<<"the unsorted array is ";
sort s;
s.display();
cout<<"the sorted array is ";
quick_sort();
s.display();

}