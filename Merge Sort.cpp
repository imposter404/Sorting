#include<iostream>
using namespace std;

class sort{
	public :
		int* arr;
		int size;
		void values(int values[]) ;
		void display() ;
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

void merge(int arr[],int a,int c,int b)
{
	int l1=c-a+1;
	int l2=b-c; 
	int a1[l1],a2[l2];
	for(int i=0;i<l1;i++)
	{
		a1[i]=arr[a+i];
	}
	for(int i=0;i<l2;i++)
	{
		a2[i]=arr[c+1+i];
	}
	int i,j,k;
	i=0;
	j=0;
	k=a;

	while(i<l1 && j<l2)
	{
		if(a1[i]<=a2[j])
		{
			arr[k]=a1[i];
			i++;
		}
		else{
			arr[k]=a2[j];
			j++;
		}
		k++;
	}
	while(i<l1)
	{
		arr[k] = a1[i];
		i++;
		k++;
	}
	while(j<l2)
	{
		arr[k] = a2[j];
		j++;
		k++;
	}
}


void Merge_sort(int arr[],int a,int b){
	if(a<b)
	{
		int c=a+(b-a)/2;
		Merge_sort(arr,a,c);
		Merge_sort(arr,c+1,b);
		merge(arr,a,c,b);
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
Merge_sort(s.arr,0,s.size-1);
s.display();
return 0;

}
