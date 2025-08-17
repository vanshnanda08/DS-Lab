// Space required to store any two-dimensional array is number oƒ ns × number oƒ columns.
// Assuming array is used to store elements of the following matrices,
// implement an efficient way that reduces the space requirement.
// Lower triangular Matrix.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n = 4;
  int arr[4][4] = {
      {5, 0, 0, 0},
      {3, 8, 0, 0},
      {2, 6, 9, 0},
      {1, 4, 7, 2}};

  vector<int> data;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i >= j)
        data.push_back(arr[i][j]);
    }
  }
  cout << "Data Stored: ";
  for (int i = 0; i < data.size(); i++)
    cout << data[i] << " ";

  cout << "\nLower triangular Matrix:" << endl;
  int k = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (j <= i)
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
