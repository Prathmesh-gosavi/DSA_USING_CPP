#include<iostream>

class binary
{

    int *a,n;

public:

	binary(int size=5):n(size)
	{
		a = new int[n];
	}
	
	~binary()
	{
		delete[] a;
	} 
 


  void accept()
    {
        for(int i = 0; i < n; i++)
        {
            std::cout << "Enter the data: ";
            std::cin >> a[i];
        }
    }

    // Sorting function (Bubble Sort)
    void sorting()
    {
        for(int i = n - 1; i > 0; --i)
        {
            for(int j = 0; j < i; j++)
            {
                if(a[j] > a[j + 1])
                {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
    }

    // Display the sorted array
    void display() const
    {
        std::cout << "Your sorted array: ";
        for(int i = 0; i < n; i++)
        {
            std::cout << a[i] << " ";
        }
        std::cout << std::endl;
    }

    int binary_search(int key)
    {
    	int i,j;

    	i=0;
    	j=n-1;


    	while(i<=j)
    	{
    		int mid=(i+j)/2;

    		if(a[mid]==key)
    		{
    			return mid;
    		}
    		else if(a[mid]>key)
    		{
    			j=mid-1;
    		}
    		else
    		{
    			i=mid+1;
    		}

    	}
    	return -1;
    }
   

};


int main()
{

	int n;

	std::cout<<"enter the array size";
	std::cin>>n;


	binary *p =new binary(n);

	p->accept();
	p->sorting();
	p->display();

	int key;
    std::cout << "Enter the data to search: ";
    std::cin >> key;

    int pos = p->binary_search(key);

    if(pos == -1)
    {
        std::cout << "No data found." << std::endl;
    }
    else
    {
        std::cout << "The data " << key << " was found at index " << pos << "." << std::endl;
    }




	delete  p;
	return 0;
}