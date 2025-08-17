// Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping
// the adjacent elements if they are in wrong order. Code the Bubble sort with the
// following elements: 64,34,25,12,22,11,90
#include <iostream>
using namespace std;

void bubblesort(vector<int> &arr)
{
  int n = arr.size();
  int temp;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        temp = arr[j + 1]; // swap(arr[j],arr[j+1]) can also be used.
        arr[j + 1] = arr[j];
        arr[j] = temp;
      }
    }
  }
}
int main()
{
  vector<int> arr = {64, 34, 25, 12, 22, 11, 90};

  bubblesort(arr);

  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}