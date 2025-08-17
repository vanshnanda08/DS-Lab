// Implement the Binary search algorithm regarded as a fast search algorithm with 
// run-time complexity of Ο(log n) in comparison to the Linear Search.
#include <iostream>
using namespace std;

int binarysearch(vector<int> &arr, int target)
{
  int size = arr.size();
  int low = 0;
  int high = size - 1;
  while (low <= high)
  {
    int mid = low + (high - low) / 2;
    if (arr[mid] == target)
      return mid;
    if (arr[mid] < target)
    {
      low = mid + 1;
    }
    else
      high = mid - 1;
  }
  return -1;
}

int main()
{

  vector<int> arr = {1, 2, 3, 4, 5};

  int element;
  cout << "Enter element to be searched:";
  cin >> element;

  int n = binarysearch(arr, element);

  if (n == -1)
    cout << "Element not found.";
  else
    cout << "Element fount at " << n << " index.";

  return 0;
}
