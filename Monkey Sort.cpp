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
