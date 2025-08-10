// Find the Transpose of a Matrix
#include <iostream>
using namespace std;

int main()
{
  int rows, cols;
  int matrix[10][10], transpose[10][10];

  cout << "Enter rows and columns of matrix: ";
  cin >> rows >> cols;

  cout << "Enter matrix elements:\n";
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cin >> matrix[i][j];
    }
  }

  // Finding transpose
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      transpose[j][i] = matrix[i][j];
    }
  }

  cout << "\nTranspose of the matrix:\n";
  for (int i = 0; i < cols; i++)
  {
    for (int j = 0; j < rows; j++)
    {
      cout << transpose[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
