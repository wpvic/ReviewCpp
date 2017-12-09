#include <vector>
#include <math.h>       /* pow */

int square_sum(const std::vector<int>& numbers)
{
    int sum = 0;
    for ( int i = 0; i<numbers.size();i++)
    {
      sum+=pow(numbers[i],2);  
    }
    return sum;
}