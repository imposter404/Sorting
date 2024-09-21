#include<iostream>

class sort{
	public :
		int* arr;
		int size;
		void values(int values[]) ;
		void display() ;
		void Counting_sort();
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


void sort::display(){
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}





int main(){
int values[]={4,2,2,8,3,3,1};
sort s;
s.size=sizeof(values)/sizeof(values[0]);
s.values(values);
cout<<"Unsorted array\n";
s.display();
cout<<"\nSorted array\n";
s.Counting_sort();
return 0;

}