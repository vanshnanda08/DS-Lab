// Space required to store any two-dimensional array is number oƒ ns × number oƒ columns.
// Assuming array is used to store elements of the following matrices,
// implement an efficient way that reduces the space requirement.
// Upper triangular Matrix.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n = 4;
  int arr[4][4] = {
      {4, 1, 2, 3},
      {0, 5, 6, 7},
      {0, 0, 8, 9},
      {0, 0, 0, 10}};

  vector<int> data;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (j >= i)
        data.push_back(arr[i][j]);
    }
  }

  for (int i = 0; i < data.size(); i++)
    cout << data[i] << " ";

  cout << "\nUpper triangular Matrix:" << endl;
  int k = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i <= j)
      {
        cout << data[k++] << " ";
      }
      else
      {
        cout << 0 << " ";
      }
    }
    cout << endl;
  }
  return 0;
}
