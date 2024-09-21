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


void sort::Counting_sort(){
	int max=arr[0];
	for(int i=1;i<size;i++)
	{
	    if(arr[i] > max)
	    {
	        max=arr[i];
	    }
	}

	int a1[max+1];
	for(int i=0;i<max+1;i++)
	{
		a1[i]=0;
	}

	for(int i=0;i<size;i++)
	{
		a1[arr[i]]++;
	}

	for(int i=1;i<max+1;i++)
	{
		a1[i]+=a1[i-1];
	}

	int output[size];
	for(int i=0;i<size;i++)
	{
		output[a1[arr[i]]-1]=arr[i];
		a1[arr[i]]--;
	}
	for(int i=0;i<size;i++)
	{
		cout<<output[i]<<" ";
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