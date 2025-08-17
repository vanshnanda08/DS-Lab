// Space required to store any two-dimensional array is number oƒ ns × number oƒ columns.
// Assuming array is used to store elements of the following matrices,
// implement an efficient way that reduces the space requirement.
// Symmetric Matrix.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n = 4;
  int arr[4][4] = {
      {1, 2, 3, 4},
      {2, 5, 6, 7},
      {3, 6, 8, 9},
      {4, 7, 9, 10}};

  vector<int> data;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {

      data.push_back(arr[i][j]);
    }
  }

  for (int i = 0; i < data.size(); i++)
    cout << data[i] << " ";

  cout << "\nReconstructed Symmetric Matrix:" << endl;
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
        cout << arr[j][i] << " ";
      }
    }
    cout << endl;
  }

  return 0;
}
