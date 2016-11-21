class Solution {
public:
	int findContentChildren(vector<int>& g, vector<int>& s) {
		sort(g.begin(), g.end());
		sort(s.begin(), s.end());

		int count = 0;

		vector<int>::iterator gIter = g.begin();
		vector<int>::iterator sIter = s.begin();
		while (gIter != g.end() && sIter != s.end())
		{
			if (*gIter <= *sIter)
			{
				count++;
				gIter++;
			}
			sIter++;
		}

		return count;
	}
};