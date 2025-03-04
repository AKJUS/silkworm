/*
   Copyright 2022 The Silkworm Authors

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

#include "random_number.hpp"

#include <algorithm>

#include <catch2/catch_test_macros.hpp>

namespace silkworm {

TEST_CASE("random numbers") {
    uint64_t a = 0;
    uint64_t b = 3;
    RandomNumber random_number(a, b);

    for (int i = 0; i < 100; ++i) {
        auto a_number = random_number.generate_one();
        REQUIRE((a <= a_number && a_number <= b));
    }
}

}  // namespace silkworm
