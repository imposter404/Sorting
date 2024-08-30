#include<iostream>
using namespace std;

class sort{
	public :
		int* arr;
		int size;
		void values(int values[]) ;
		void display() ;
		void Bubble_sort();
};

void sort::values(int values[]){
	arr=new int[size];
	for(int i=0;i<size;i++)
	{
		arr[i]=values[i];
	}
}
void sort::	display(){
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}




void sort::Bubble_sort(){	
    for(int i=0;i<size;i++)
    {
    	for(int j=0;j<size-1-i;j++)
    	{
    		if(arr[j] > arr[j+1])
    		{
    			swap(arr[j],arr[j+1]);
    		}
    	}	
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";	
    }
}




int main(){
int values[]={22,54,15,87,34,26,21,12,9,11};
sort s;
s.size=sizeof(values)/sizeof(values[0]);
s.values(values);
cout<<"Unsorted array\n";
s.display();
cout<<"\nSorted array\n";
s.Bubble_sort();
return 0;

}