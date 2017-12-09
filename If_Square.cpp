#include <cmath>

bool is_square(int n)
{
  if (n <= 0) return false;
  return std::sqrt(n) == int(std::sqrt(n));
}