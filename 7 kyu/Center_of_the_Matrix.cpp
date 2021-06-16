#include <vector>
#include <optional>
#include <unordered_map>

using opt_int_t = std::optional<int>;
using matrix_t = std::vector<std::vector<int>>;

opt_int_t center(const matrix_t& mat) 
{
    int i {1};
    std::unordered_map<int, int> mp;
    for (auto it = mat.begin(); it != mat.end(); ++it)
    {
        for (auto jt = it->begin(); jt != it->end(); ++jt)
        {
            mp[i] = *jt; ++i;
        }
    }
    if (i & 0x01) return std::nullopt;
    else return mp[i / 2];
}

