// Design the Logic to Find a Missing Number in a Sorted Array.
// Given an array of n-1  distinct integers in the range of 1 to n, find the missing number in it in a Sorted Array
// (a) Linear time
#include <iostream>
using namespace std;

int missingEl(vector<int> &arr)
{
  int size = arr.size();

  for (int i = 0; i < size; i++)
  {
    if (arr[i] != i + 1)
      return i + 1;
  }
  return -1;
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
  cout << "Missing Element:" << value;

  return 0;
}