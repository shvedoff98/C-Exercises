#include <numeric>
#include <iostream>
#include <vector>
int get_sum(int a, int b)
{
  int stop, number;  
  if (a == b) return a;
  if (a > b) 
  { 
      stop = a; number = b; 
  } else { 
      stop = b; number = a;
  }
    
  std::cout << number << " " << stop << "\n"; 
  std::vector<int>numbers;

  while(number <= stop)
    {
      numbers.push_back(number);
      ++number;
    }
  return std::accumulate(numbers.begin(), numbers.end(), 0);
}

int main()
{

    std::cout << get_sum(-1,2) << "\n";
}
