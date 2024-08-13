#include<iostream>

class Insersion
{
	int i,j,temp_memory;

public:

	void acceptInput(int a[],int n)
	{
		for(i=0;i<n;++i)
		{
		  std::cout <<"enter the data";
		  std::cin >>a[i];

		}

	}

	void insersionSort(int a[],int n)
	{
		
		for(i=1;i<n;++i)
		{
			temp_memory=a[i];

			for(j=i-1;j>=0;--j)
			{
				if(a[j]>temp_memory)
				{
					a[j+1]=a[j];
				}
				else
				{
					break;
				}
			}

			a[j+1]=temp_memory;//shift a t memory
		}
	}




	void displayArray(int a[],int n)
	{

		std::cout<<"your sorted array";
		for(i=0;i<n;++i)
		{
			std::cout<<a[i]<<" ";

		}
	}
};


int main()
{

	int n;

	std::cout<<"enter the value of n:";
	std::cin >>n;

	int a[n];

	Insersion ob;

	ob.acceptInput(a,n);
	ob.insersionSort(a,n);
	ob.displayArray(a,n);


}