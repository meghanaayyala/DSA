#include<iostream>
using namespace std;
#define MAXSIZE 15
template<class T> class arrayclass
{
  public:
  void insertionsort();
  void readdata();
  void printdata();
  void swapnum(T&a,T&b);
  T arr[MAXSIZE];
  int size;
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
}
template<class T>void arrayclass<T>:: insertionsort()
{
	int i,pos;
	T temp;
	for(int i=1;i<size;i++)
	{
		pos=i;
		temp=arr[i];
		while(pos>0&&temp<arr[pos-1])
		{
			arr[pos]=arr[pos-1];
			pos--;
		}
		arr[pos]=temp;
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
  a1.insertionsort();
  a1.printdata();
  break;
  case 2:
  arrayclass<float>a2;
  a2.readdata();
  a2.insertionsort();
  a2.printdata();
  break;
  case 3:
  arrayclass<char>a3;
  a3.readdata();
  a3.insertionsort();
  a3.printdata();
  break;
  default:
  cout<<"Error"<<endl;
}
}
