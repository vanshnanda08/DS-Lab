// Space required to store any two-dimensional array is number oƒ ns × number oƒ columns.
// Assuming array is used to store elements of the following matrices,
// implement an efficient way that reduces the space requirement.
// Tri-diagonal Matrix.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n = 4;
  int arr[4][4] = {
      {2, 1, 0, 0},
      {3, 5, 2, 0},
      {0, 4, 6, 1},
      {0, 0, 7, 8}};

  vector<int> data;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i - j == -1)
      {
        data.push_back(arr[i][j]);
      }
      else if (i == j)
      {
        data.push_back(arr[i][j]);
      }
      else if (i - j == 1)
      {
        data.push_back(arr[i][j]);
      }
    }
  }

  cout << "Data stored: ";
  for (int i = 0; i < data.size(); i++)
    cout << data[i] << " ";

  cout << "\nTri-Diagonal Matrix:" << endl;
  int k = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i - j == -1)
      {
        cout << data[k++] << " ";
      }
      else if (i == j)
      {
        cout << data[k++] << " ";
      }
      else if (i - j == 1)
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
