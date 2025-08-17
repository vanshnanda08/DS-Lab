// Design the Logic to Find a Missing Number in a Sorted Array.
// Given an array of n-1  distinct integers in the range of 1 to n, find the missing number in it in a Sorted Array
// (a) Binary Search
#include <iostream>
using namespace std;

int missingEl(vector<int> &arr)
{
  int size = arr.size();

  int low = 0;
  int high = size - 1;

  while (low <= high)
  {
    int mid = low + (high - low) / 2;

    if (arr[mid] == mid + 1)
      low = mid + 1;
    else
      high = mid - 1;
  }
  return low + 1;
}
int main()
{
  int n;
  cout << "Enter array size:";
  cin >> n;
  vector<int> arr(n);

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int value = missingEl(arr);
  cout << "Missing Element: " << value;

  return 0;
}