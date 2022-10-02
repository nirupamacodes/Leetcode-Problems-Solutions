class Solution {
public:
        vector<int> singleNumber(vector<int> &nums) {
	unordered_set<int> visited;
	// store num with odd freq into set
	for (auto &num: nums)
		if (visited.count(num))
			visited.erase(num);
		else visited.insert(num);
	// return ans
	return vector<int> (visited.begin(), visited.end());
}
    
};
