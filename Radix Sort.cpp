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