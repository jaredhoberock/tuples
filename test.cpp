#include "tuples.hpp"
#include <array>
#include <iostream>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

int main()
{
  static_assert(tuples::tuple_like<std::pair<int,int>>);
  static_assert(tuples::tuple_like<std::tuple<int,float,char>>);
  static_assert(tuples::tuple_like<std::array<std::string,10>>);
  static_assert(not tuples::tuple_like<std::vector<int>>);

  std::cout << "OK" << std::endl;

  return 0;
}

