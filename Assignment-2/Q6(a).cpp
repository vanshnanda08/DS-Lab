// Write a program to implement the following operations on a Sparse Matrix,
// assuming the matrix is represented using a triplet.
// Transpose of a matrix.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int row = 4,col=5;
int sparse[4][5] = {
    {0, 0, 3, 0, 4},
    {0, 0, 5, 7, 0},
    {0, 0, 0, 0, 0},
    {0, 2, 6, 0, 0}
};

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
