#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

class sort{
	public :
		int* arr;
		int  size;
		void values(int values[]) ;
		void display() ;
		bool isSorted();
		void Sorted();
		void Monkey_sort();
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

bool sort::isSorted(){
	for(int i=0;i<size-1;i++)
	{
		if(arr[i]>arr[i+1])
		{
			return true;
		}
	}
	return false;
}



void sort::Sorted(){
	for(int i=0;i<size;i++)
	{
		int j;
		int temp;
		j=rand() % size;

		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
}


void sort::Monkey_sort(){
	int y=0;
	srand(time(0));
	while(isSorted())
	{
		Sorted();
		y++;
	}
	cout<<"No of Try : "<<y<<"\n";
}






int main(){
int values[]={9,8,3,7,5,6,4,1};
sort s;
s.size=sizeof(values)/sizeof(values[0]);
s.values(values);
cout<<"Unsorted array\n";
s.display();
cout<<"\nSorted array\n";
s.Monkey_sort();
s.display();
return 0;

}
