#include<iostream>

class Selection
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

	void selectionSort(int a[],int n)
	{
		
		
		for(i=0;i<n;++i)
		{
			for(j=i+1;j<n;++j)
			{
				if(a[i]>a[j])
				{
					temp_memory=a[i];
					a[i]=a[j];
					a[j]=temp_memory;
				}
			}

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

	Selection ob;

	ob.acceptInput(a,n);
	ob.selectionSort(a,n);
	ob.displayArray(a,n);


}