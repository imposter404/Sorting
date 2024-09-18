#include<iostream>
using namespace std;

class sort{
	public :
		int* arr;
		int size;
		void values(int values[]) ;
		void display() ;
		void Insertion_sort();
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




void sort::Insertion_sort(){
	int key,j;
    for(int i=1;i<size;i++)
    {
		key=arr[i];
		j=i-1;
		while(key<arr[j] && j>=0)
		{
			swap(arr[j],arr[j+1]);
			j--;
		}
		arr[j+1]=key;
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
s.Insertion_sort();
return 0;

}
