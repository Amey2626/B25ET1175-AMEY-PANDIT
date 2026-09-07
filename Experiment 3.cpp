#include <iostream>
using namespace std;
void readArray(int arr[], int n);
void displayArray(const int arr[], int n);
void swapValues(int &a, int &b);
void sortArray(int arr[], int n);
int main()
{
    int arr[50];
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    readArray(arr, n);
    cout << "\nOriginal Array: ";
    displayArray(arr, n);
    sortArray(arr, n);
    cout << "\nSorted Array: ";
    displayArray(arr, n);
    return 0;
}
void readArray(int arr[], int n)
{
    cout << "Enter " << n << " elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void displayArray(const int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}
void swapValues(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void sortArray(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swapValues(arr[j], arr[j + 1]);
            }
        }
    }
}