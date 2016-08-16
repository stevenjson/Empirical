//  This file is part of Empirical, https://github.com/devosoft/Empirical
//  Copyright (C) Michigan State University, 2016.
//  Released under the MIT Software license; see doc/LICENSE
//
//
//  Some examples code for using emp::Random

#include <iostream>
#include <vector>
#include "../../tools/Random.h"
#include "../../tools/random_utils.h"

int main()
{
  emp::Random random;

  std::cout << "Digits in random orders:" << std::endl;

  int num_samples = 10;
  for (int s  = 0; s < num_samples; s++) {
    emp::vector<int> permut = emp::GetPermutation(random, 10);
    for (int i = 0; i < 10; i++) {
      std::cout << permut[i];
    }
    std::cout << std::endl;
  }
}
