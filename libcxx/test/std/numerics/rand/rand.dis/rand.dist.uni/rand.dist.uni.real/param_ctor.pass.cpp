//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

// <random>

// template<class RealType = double>
// class uniform_real_distribution
// {
//     class param_type;

#include <random>
#include <limits>
#include <cassert>

int main(int, char**)
{
    {
        typedef std::uniform_real_distribution<float> D;
        typedef D::param_type param_type;
        param_type p;
        assert(p.a() == 0);
        assert(p.b() == 1);
    }
    {
        typedef std::uniform_real_distribution<float> D;
        typedef D::param_type param_type;
        param_type p(5);
        assert(p.a() == 5);
        assert(p.b() == 1);
    }
    {
        typedef std::uniform_real_distribution<float> D;
        typedef D::param_type param_type;
        param_type p(5, 10);
        assert(p.a() == 5);
        assert(p.b() == 10);
    }

  return 0;
}
