#include<iostream>
using namespace std;
#define MAXSIZE 15
template<class T> class arrayclass
{
  public:
  void linearsearch();
  void readdata();
  void printdata();
  T arr[MAXSIZE];
  int n;
};

template<class T>  void arrayclass<T>:: linearsearch()
{
  cout<<"Enter element to search: "<<endl;
  int found=0;
T key;
cin>>key;

	for(int i=0;i<n;i++)
	{
		
		if(arr[i]==key)
		{
		cout<<"Element present at "<<i+1<<" position."<<endl;
    found=1;
		}

	}
if(found==0)
{
  cout<<"Element not found."<<endl;
}

}
template<class T> void arrayclass<T>::readdata()
{
  cout<<"Enter number of elements:"<<endl;
  cin>>n;
  cout<<"Enter elements: "<<endl;
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
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
  a1.linearsearch();
  break;
  case 2:
  arrayclass<float>a2;
  a2.readdata();
  a2.linearsearch();
  break;
  case 3:
  arrayclass<char>a3;
  a3.readdata();
  a3.linearsearch();
  break;
  default:
  cout<<"Error"<<endl;
}

}
