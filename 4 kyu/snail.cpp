#include <iostream>
#include <vector>
#include <algorithm>

typedef std::vector<std::vector<int>> matrix_t;

std::vector<int> snail(matrix_t const& snail_map) 
{
    matrix_t mat = snail_map;
    std::vector<int> vec;
    for (size_t i = 0; i < mat.size(); ++i)
    {
	for (size_t j = 0; j < mat.size(); ++j)
	{
	    vec.push_back(mat[i][j]);
	    if (j == mat.size()-1)
	    {
		vec.push_back (mat[i++][j]);
		break;
	    }
	}

    }
    return vec;
}


int main(int argc, char* argv[])
{
    matrix_t mat {{1,2,3}, {8,9,4}, {7,6,5}};
    std::vector<int> res = snail (mat);

    for (auto const& x : res)
    {
	std::cout << x << "\n";
    }

    exit(EXIT_SUCCESS);
}
