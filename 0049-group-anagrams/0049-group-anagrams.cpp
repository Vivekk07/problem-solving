#include <array>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        struct ArrayHasher {
            std::size_t operator()(const std::array<int, 26>& arr) const {
            std::size_t seed = 0;
            for (const auto& i : arr) {
              seed ^= std::hash<int>{}(i) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
            }
            return seed;
          }
        };

        std::unordered_map<std::array<int, 26>, std::vector<std::string>, ArrayHasher> m1 = {};
        vector<vector<string>> res;

        for (auto& str : strs) {
            array<int, 26> count{};
            for (auto& c : str) {
                count[c - 'a']++;
            }
            m1.emplace(count, vector<string>()).first->second.emplace_back(str);
        }

        for (auto& m : m1) {
            res.emplace_back(m.second);
        }
        return res;

    }
};