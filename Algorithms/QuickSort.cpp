#include<iostream>
using namespace std;
#define MAXSIZE 15
template<class T> class arrayclass
{
  public:
  void QuickSort(int low,int high);
  void readdata();
  void printdata();
  void swapnum(T&a,T&b);
  T arr[MAXSIZE];
  int size,high,low;
};
template<class T> 
void arrayclass<T>:: swapnum(T &a,T&b)
{
	T temp;
	temp=a;
	a=b;
	b=temp;
}
template<class T> void arrayclass<T>::printdata()
{
  cout<<"Sorted array is:"<<endl;
  for(int i=0;i<size;i++)
  {
      cout<<arr[i]<<" ";
  }
}
template<class T> void arrayclass<T>::readdata()
{
  cout<<"Enter number of elements:"<<endl;
  cin>>size;
  cout<<"Enter elements: "<<endl;
  for(int i=0;i<size;i++)
  {
      cin>>arr[i];
  }
  QuickSort(0, size-1);
}
template<class T>void arrayclass<T>::QuickSort (int low,int high)
{
	T pivot;
	int i,j;
	if(low<high)
	{
		pivot = arr[low];
		i=low+1;
		j=high;
	
	while(1)
	{
		while(arr[i]<pivot&&i<=high)
		{
			i++;
		}
		while(arr[j]>pivot&&j>=low)
		{
			j--;
		}
		if(i<j)
		{
			swapnum(arr[i],arr[j]);
		}
		
		else
		{
			break;
		}
	}
	arr[low]=arr[j];
	arr[j]=pivot;
	QuickSort(low,j-1);
	QuickSort(j+1,high);
}
}
int main()
{
int ch;
cout<<"Enter 1 for integer datatype"<<endl<<"2 for float datatype"<<endl<<"3 for char datatype"<<endl;
cin>>ch;
switch(ch)
{
  case 1:
  arrayclass<int> a1;
  a1.readdata();
  a1.printdata();
  break;
  case 2:
  arrayclass<float>a2;
  a2.readdata();
  a2.printdata();
  break;
  case 3:
  arrayclass<char>a3;
  a3.readdata();
  a3.printdata();
  break;
  default:
  cout<<"Error"<<endl;
}
}
