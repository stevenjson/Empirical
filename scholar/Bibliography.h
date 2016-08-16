//  This file is part of Empirical, https://github.com/devosoft/Empirical
//  Copyright (C) Michigan State University, 2016.
//  Released under the MIT Software license; see doc/LICENSE
//
//
//  A collection of references.

#ifndef EMP_BIBLIOGRAPHY_H
#define EMP_BIBLIOGRAPHY_H

#include "../tools/vector.h"
#include "Citation.h"

namespace emp {

  class Bibliography {
  private:
    emp::vector<Citation> refs;
    std::set<std::string> keywords;
  public:
    Bibliography() { ; }
    ~Bibliography() { ; }

    void AddRef(const Citation & in_ref) {
      refs.push_back(in_ref);
    }
  };

};

#endif
