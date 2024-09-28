#include<iostream> 
using namespace std;
class sort{
	public :
		int* arr;
		int* output;
		int size;
		void values(int values[]) ;
		void display() ;
		void Radix_sort();
        void Counting_sort(int place);
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