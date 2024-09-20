#include<iostream>
using namespace std;

class sort{
	public :
int* arr;
		int  size;
		void values(int values[]) ;
void display() ;
		void Heapify(int n,int i);
		void Heap_sort();
		
		
};

void sort::values(int values[]){
	arr=new int[size];
	for(int i=0;i<size;i++)
	{
		arr[i]=values[i];
	}
}

void sort::display(){
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}





int main(){
int values[]={1,12,9,5,6,10};
sort s;
s.size=sizeof(values)/sizeof(values[0]);
s.values(values);
cout<<"Unsorted array\n";
s.display();
cout<<"\nSorted array\n";
s.Heap_sort();
s.display();
return 0;

}
