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
void sort::display(){
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void sort::Shell_sort(){
	for(int i=size/2;i>0;i/=2)
	{
		for(int j=i;j<size;j++)
		{
			int temp=arr[j];
			int k;
			for(k=j;k>=i && arr[k-i]>temp;k-=i)
			{
				arr[k]=arr[k-i];
			}
			arr[k]=temp;
		}
	}

}


int main(){
int values[]={9,8,3,7,5,6,4,1};
sort s;
s.size=sizeof(values)/sizeof(values[0]);
s.values(values);
cout<<"Unsorted array\n";
s.display();
cout<<"\nSorted array\n";
s.Shell_sort();
s.display();
return 0;

}
