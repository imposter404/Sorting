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

void sort::Counting_sort(int place){
	int max=10;

	int count[max];
	for(int i=0;i<max;i++)
	{
		count[i]=0;
	}

	for(int i=0;i<size;i++)
	{
		count[(arr[i]/place)%10]++;
	}

	for(int i=1;i<max+1;i++)
	{
		count[i]+=count[i-1];
	}

	output=new int[size];
	for(int i=size-1;i>=0;i--)
	{
		output[count[(arr[i]/place)%10]-1]=arr[i];
		count[(arr[i]/place)%10]--;
	}
}

void sort::Radix_sort(){
    int max=arr[0];
    for(int i=i;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }

    for(int place=1;max/place;place*=10)
    {
        Counting_sort(place);
    }
    
    for(int i=0;i<size;i++)
	{
		cout<<output[i]<<" ";
	}
}

int main(){
int values[]={911,458,64,215,450,666};
sort s;
s.size=sizeof(values)/sizeof(values[0]);
s.values(values);
cout<<"Unsorted array\n";
s.display();
cout<<"\nSorted array\n";
s.Radix_sort();
return 0;

}
