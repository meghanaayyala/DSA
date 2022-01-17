#include <iostream>
#define MAXSIZE 15
using namespace std;
template<class T> class arrayclass
{
  public:
  void insert(T x,int n);
  int Delete(int n);
  void readdata();
  void printdata();
  void swapnum(T&a,T&b);
  T heap[MAXSIZE]={0};
  T temp[MAXSIZE]={0};
  void heapsort(int n);
  int size;
};
template<class T> int arrayclass<T>::Delete(int n)
{
int p,c,temp,x;
if(n==0)
{
  cout<<"Empty"<<endl;
  return 0;
}
x=heap[1];
temp=heap[n--];
p=1,c=2;
while(c<=n)
{
  if(c<n&&heap[c]<heap[c+1])
  {
    c++;
  }
  if(temp>=heap[c])
  {
    break;
  }
  heap[p]=heap[c];
  p=c;
  c=2*c;
}
heap[p]=temp;
return x;
}
template<class T> void arrayclass<T>::readdata()
{
  cout<<"Enter number of elements:"<<endl;
  cin>>size;
  T ele;
  cout<<"Enter elements: "<<endl;
  for(int i=0,j=0;i<size;i++,j++)
  {
      cin>>ele;
      insert(ele,j);
}
heapsort(size);
}
template<class T> void arrayclass<T>::heapsort(int n)
{
  int i,j;
  for(i=n,j=0;i>0;i--,j++)
  {
    temp[j]=Delete(i);
  }
}
template<class T> void arrayclass<T>::printdata()
{
  cout<<"Sorted array in Descending Order:"<<endl;
  for(int i=0;i<size;i++)
  {
      cout<<temp[i]<<" ";
  }
  cout<<endl;
  cout<<"Sorted array in Ascending Order:"<<endl;
  for(int i=size-1;i>=0;i--)
  {
      cout<<temp[i]<<" ";
  }
  cout<<endl;
}
template <class T> void arrayclass<T>::insert(T x,int n)
{
    if(n==MAXSIZE-1)
    {
        cout<<"Full"<<endl;
        return;
    }
    int i=++n;
    while(i!=1&&x>heap[i/2])
    {
        heap[i]=heap[i/2];
        i=i/2;
    }
    heap[i]=x;
}
int main()
{
int ch;
cout<<"Enter 1 for integer datatype"<<endl<<"2 for float datatype"<<endl<<"3 for char datatype"<<endl;
cin>>ch;
switch(ch)
{
  case 1:
  {
  arrayclass<int> a1;
  a1.readdata();
  a1.printdata();
  break;
  }
  case 2:
  {
  arrayclass<float>a2;
  a2.readdata();
  a2.printdata();
  break;
  }
  case 3:
  {
  arrayclass<char>a3;
  a3.readdata();
  a3.printdata();
  }
  break;
  default:
  cout<<"Error"<<endl;
}
}
















