/*
   Copyright 2024 The Silkworm Authors

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

#pragma once

#include <tuple>

namespace silkworm::db::kv::api {

using Version = std::tuple<uint32_t, uint32_t, uint32_t>;

//! Current KV API protocol version.
inline constexpr Version kCurrentVersion{5, 1, 0};

}  // namespace silkworm::db::kv::api
