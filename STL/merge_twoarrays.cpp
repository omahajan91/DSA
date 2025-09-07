#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:     
    vector<int> merge(const vector<int>& vec1, const vector<int>& vec2) {
        vector<int> merged = vec1; 
        merged.insert(merged.end(), vec2.begin(), vec2.end()); 
        return merged;
    }
};

int main() {
    Solution sol;
    vector<int> vec1 = {1, 2, 3};
    vector<int> vec2 = {4, 5, 6};

    vector<int> merged = sol.merge(vec1, vec2);

    for (int num : merged) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
