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

void sort::Heapify(int n,int i)
{
	int largest =i;
	int left=2*i +1;
	int right=2*i +2;
	if(left<n && arr[left]>arr[largest])
	{
		largest=left;
	}
	if(right<n && arr[right]>arr[largest])
	{
		largest=right;
	}
	if(largest != i )
	{
		swap(arr[i],arr[largest]);
		Heapify(n,largest);
	}
}


void sort::Heap_sort(){
	for(int i=size/2 -1;i>=0;i--)
	{
		Heapify(size,i);
	}
	for(int i=size-1;i>=0;i--)
	{
		swap(arr[0],arr[i]);
		Heapify(i,0);
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
