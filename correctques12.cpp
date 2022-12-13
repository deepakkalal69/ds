#include <iostream>
using namespace std;

template <typename T>
void Bubble_sort(T *arr, int n)
{
    cout << "You have opted for Bubble sort.\n";
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                T temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

template <typename M>
void Insertion_sort(M arr[], int n)
{
    cout << "You have opted for Insertion sort.\n";
    int j;
    for (int i = 1; i < n; i++)
    {
        M key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
template <typename t>
void Selection_sort(t arr[], int n)
{
    cout << "You have opted for Selection sort.\n";
    int min;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
            swap(arr[i], arr[min]);
        }
    }
}
template <typename T>
void print(T arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int *A;
    char *B;
    char ch;
    string ans = "y";
    int size;
    cout << "Menu 1.Array Choice 2.Print Array 3.Bubble sort 4.Insertion sort 5.Selection sort \n";
    int choice;

    while (ans == "yes" || ans == "y")
    {
        cout << "Enter your choice (1-5): ";
        cin >> choice;
        if (choice == 1)
        {

            cout << "which array do you want(i for int & c for char) : ";
            cin >> ch;
            if (ch == 'c')
            {
                cout << "Enter the sixze: ";
                cin >> size;
                B = new char[size];
                cout << "Enetr the array: ";
                for (int i = 0; i < size; i++)
                {
                    cin >> B[i];
                }
            }
            else
            {
                cout << "Enter the size: ";
                cin >> size;
                A = new int[size];
                cout << "Enter the array: ";
                for (int i = 0; i < size; i++)
                {
                    cin >> A[i];
                }
            }
        }
        else if (choice == 2)
        {
            if (ch == 'c')
            {
                cout << "Our array is: ";
                print(B, size);
            }
            else
            {
                cout << "Our array is: ";
                print(A, size);
            }
        }
        else if (choice == 3)
        {
            if (ch == 'c')
            {
                Bubble_sort(B, size);
                cout << "The sorted array is: ";
                print(B, size);
            }
            else
            {
                Bubble_sort(A, size);
                cout << "The sorted array is: ";
                print(A, size);
            }
        }
        else if (choice == 4)
        {
            if (ch == 'c')
            {
                Insertion_sort(B, size);
                cout << "The sorted array is: ";
                print(B, size);
            }
            else
            {
                Insertion_sort(A, size);
                cout << "The sorted array is: ";
                print(A, size);
            }
        }
        else if (choice == 5)
        {
            if (ch == 'c')
            {
                Selection_sort(B, size);
                cout << "The sorted array is: ";
                print(B, size);
            }
            else
            {
                Selection_sort(A, size);
                cout << "The sorted array is: ";
                print(A, size);
            }
        }
        else
            cout << "Invalid choice:\n";
        // cout<<"Enter choice again(1-5): ";
        // cin>>choice;
        cout << "Do you want to continue (yes(y)/no(n)): ";
        cin >> ans;
    }
    cout << "Program ended\n";
    return 0;
}