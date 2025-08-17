// Space required to store any two-dimensional array is number oƒ rows × number oƒ columns.
// Assuming array is used to store elements of the following matrices,
// implement an efficient way that reduces the space requirement.
// Diagonal Matrix
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int row, col;
  cin >> row >> col;
  int arr[row][col];

  vector<int> data;

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cin >> arr[i][j];
    }
  }
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if (i == j)
        data.push_back(arr[i][j]);
    }
  }
  cout << "Data stored:  ";
  for (int i = 0; i < data.size(); i++)
  {
    cout << data[i] << " ";
  }

  cout << "\nDiagonal Matrix:" << endl;
  int k = 0;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if (i == j)
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