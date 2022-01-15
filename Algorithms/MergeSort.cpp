#include<iostream>
using namespace std;
#define MAXSIZE 15
template<class T> class arrayclass
{
  public:
  void MergeSort(int low,int high);
  void Merge(int low,int mid,int high);
  void readdata();
  void printdata();
  void swapnum(T&a,T&b);
  T arr[MAXSIZE];
  T b[MAXSIZE];
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
MergeSort(0, size-1);
}

template<class T> void arrayclass<T>:: Merge(int low, int mid,int high)
{
	int l1, l2, i;

   for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
      if(arr[l1] <= arr[l2])
         b[i] = arr[l1++];
      else
         b[i] = arr[l2++];
   }
   
   while(l1 <= mid)    
      b[i++] = arr[l1++];

   while(l2 <= high)   
      b[i++] = arr[l2++];

   for(i = low; i <= high; i++)
      arr[i] = b[i];
}
template<class T> void arrayclass<T>:: MergeSort(int l,int h)
{
	if(l<h)
	{
		int m;
		m=(l+h)/2;
		MergeSort(l,m);
		MergeSort(m+1,h);
		Merge(l,m,h);
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
