#include<iostream.h> 
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
        cout<<arr[i]<<" "	;
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
int values=[9,34,52,71,48,32,34,52,18];

cout<<"the unsorted array is";
display();
cout<<"sorted array is";
Bubble_sort();
display();

}