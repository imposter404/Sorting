#include<iostream>

class sort{
    public:
    int* arr;
    int size;
void values(int values[]) ;
    void display();
};

void sort::values(int values[]){
	arr=new int[size];
for(int i=0;i<size;i++)
	{
		arr[i]=values[i];
	
	}
}


void sort:: display(){
  for(int i=0;i<size;i++)
  {
    cout<<arr[i]<<" ";
  }
}


int partition(int arr[],int a,int b)
{
	int p=arr[b];
int i=a-1;
for(int j=a;j<b;j++)
{
if(arr[j]<=p)
	
		
	
	




Void Quick_sort(int arr[],int a,int b){
if(a<b)
{
int p= partition(arr,a,b)
Quick_sort(arr,a,p-1)
Quick_sort(arr,p+1,b);

}


}





int main(){
int values =[23,42,65,91,36,72,02];
sort s;
s.size=sizeof(values)/sizeof(values[0]);
s.values(values);
cout<<"the unsorted array is ";

s.display();
cout<<"the sorted array is ";
quick_sort();
s.display();
return 0;
}