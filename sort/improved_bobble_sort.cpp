#include<iostream>

class Bobble_sort
{
private:


	int i,j,temp,flag,p;

public:

	void accept(int a[],int n)
	{
		for(i=0;i<n;++i)
		{
		  std::cout <<"enter the data";
		  std::cin >>a[i];

		}

	}

	void sorting(int a[],int n)
	{
		p=0;
		for(i=n-1;i>0;--i)
		{
			flag=0;
			p++;

			for(j=0;j<i;++j)
			{
				if(a[j]>a[j+1])
				{
					flag=1;
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}

			if(flag==0)
			{
				break;
			}


		}
			std::cout<<p<<" value pf pass"<<std::endl;

	}




	void display(int a[],int n)
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

	std::cout<<"how many element";
	std::cin >>n ;

	int a[n];

	std::cout<<std::endl;

	Bobble_sort ob;

	ob.accept(a,n);
	ob.sorting(a,n);
	ob.display(a,n);


	return 0;
}