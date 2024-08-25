#include<iostream>

class LinearSearch
{
private:
    int *a; // Pointer for dynamic array allocation
    int n;  // Size of the array

public:
    // Constructor with an optional size parameter and dynamic array allocation
    LinearSearch(int size = 5) : n(size) 
    {
        a = new int[n];
        std::cout << "Array of size " << n << " created." << std::endl;
    }

    // Destructor to clean up dynamically allocated memory
    ~LinearSearch() 
    {
        delete[] a;
        std::cout << "Array memory cleaned up." << std::endl;
    }

    // Accept function to take array input
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

    // Linear search function
    int linear_search(int key) const
    {
        for(int i = 0; i < n; ++i)
        {
            if(a[i] == key)
                return i;
        }
        return -1;
    }
};

int main()
{
    int n;

    std::cout << "How many elements? ";
    std::cin >> n;

    LinearSearch ob(n); // Create object with a custom size

    ob.accept();
    ob.sorting();
    ob.display();

    int key;
   	std::cout <<std::endl<< "Enter the data to search: ";
    std::cin >> key;

    int pos = ob.linear_search(key);

    if(pos == -1)
    {
        std::cout << "No data found." << std::endl;
    }
    else
    {
        std::cout << "The data " << key << " was found at index " << pos << "." << std::endl;
    }

    return 0;
}
