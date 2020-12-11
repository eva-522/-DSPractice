#include <iostream> 
 
using namespace std; 

const int i=2;
const int j=3;
int x,y;
int array[]={1,2,3,4,5,6};
int *p=array; 

get(int i,int j)
{
	return *(p+y*i+x);
}

set(int i,int j,int v)
{
	*(p+y*i+x)=v;
}

void dump()
{
	for(y=0;y<j;y++)  
	{ 
		for(x=0;x<i;x++)  
		{      
			cout<<"array["<<y<<"]"<<"["<<x<<"]"<<"="<<get(i,j)<<"  ";
		}    
		cout<<endl;
	}
}

int main()
{
 	dump();
}
