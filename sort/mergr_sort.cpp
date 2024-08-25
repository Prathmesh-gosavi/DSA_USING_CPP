#include <iostream>
#include <string>

template <typename T>
class Merge
{
    int i, j;

public:
    // Constructor with default parameters
    Merge(int i = 0, int j = 0) : i(i), j(j) {}

    // Destructor
    ~Merge()
    {
        std::cout << "Destructor called" << std::endl;
    }

    void acceptInput(T arr[], int n)
    {
        for (i = 0; i < n; ++i)
        {
            std::cout << "Enter the data: ";
            std::cin >> arr[i];
        }
    }

    void merge(T arr[], int lb, int mid, int ub)
    {
        T temp[100]; // Assuming the array size will not exceed 100
        int k = lb;

        i = lb;
        j = mid + 1;

        while (i <= mid && j <= ub)
        {
            if (arr[i] < arr[j])
            {
                temp[k++] = arr[i++];
            }
            else
            {
                temp[k++] = arr[j++];
            }
        }

        while (i <= mid)
        {
            temp[k++] = arr[i++];
        }

        while (j <= ub)
        {
            temp[k++] = arr[j++];
        }

        // Copy the sorted subarray back into the original array
        for (k = lb; k <= ub; k++)
        {
            arr[k] = temp[k];
        }
    }

    void mergeSort(T arr[], int lb, int ub)
    {
        if (lb < ub)
        {
            int mid = (lb + ub) / 2;
            mergeSort(arr, lb, mid);
            mergeSort(arr, mid + 1, ub);
            merge(arr, lb, mid, ub);
        }
    }

    void displayArray(T arr[], int n)
    {
        std::cout << "Your sorted array:" << std::endl;
        for (i = 0; i < n; ++i)
        {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main()
{
    int n;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::cout << "Choose data type (1: int, 2: float, 3: string): ";
    int choice;
    std::cin >> choice;

    if (choice == 1)
    {
        int arr[n];
        Merge<int> ob;
        ob.acceptInput(arr, n);
        ob.mergeSort(arr, 0, n - 1);
        ob.displayArray(arr, n);
    }
    else if (choice == 2)
    {
        float arr[n];
        Merge<float> ob;
        ob.acceptInput(arr, n);
        ob.mergeSort(arr, 0, n - 1);
        ob.displayArray(arr, n);
    }
    else if (choice == 3)
    {
        std::string arr[n];
        Merge<std::string> ob;
        ob.acceptInput(arr, n);
        ob.mergeSort(arr, 0, n - 1);
        ob.displayArray(arr, n);
    }
    else
    {
        std::cout << "Invalid choice!" << std::endl;
    }

    return 0;
}
