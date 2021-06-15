#include <iostream>
#include <vector>

typedef std::vector<std::vector<int>> matrix_t;

matrix_t matrixAddition(matrix_t a, matrix_t b)
{
  for (size_t i = 0; i < a.size(); ++i)
  {
    for (size_t j = 0; j < a.size(); ++j)
    {
      a[i][j] += b[i][j];
    }
  }
  return a;
}
