#include<iostream>
using namespace std;
class sort{
	public :
		int* arr;
		int  size;
		void values(int values[]) ;
		void display() ;
		void Shell_sort();
};
void sort::values(int values[]){
	arr=new int[size];
	for(int i=0;i<size;i++)
	{
		arr[i]=values[i];
	}
}