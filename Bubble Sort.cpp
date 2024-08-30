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



void display(){
for(i=0;i<size;i++){

for(j=0;j<size;i++)
{
if(arr[j] > arr[j+1])
    		{
    			swap(arr[j],arr[j+1]);
    		}
}

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