#include <vector>
#include <iostream>
#include <exception>

template<class T>
std::vector<T> add_arrays(const std::vector<T>& array1, const std::vector<T>& array2) 
{
    std::vector<T> res;
    if (array1.size() != array2.size()) throw std::runtime_error("Size is same!");
  
    for (size_t i = 0; i < array1.size(); ++i)
    {
      res.push_back(array1[i] + array2[i]);
    }
    return res;
}


int main(int argc, char* argv[])
{
    std::vector<int> vec1 {1, 2};
    std::vector<int> vec2 {2, 3};

    add_arrays(vec1, vec2);

    return 0;
}
