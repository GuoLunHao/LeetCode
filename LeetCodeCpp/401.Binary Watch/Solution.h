class Solution {
public:
	vector<string> readBinaryWatch(int num) {
		vector<string> result;

		for (size_t hour = 0; hour < 12; hour++)
		{
			for (size_t minute = 0; minute < 60; minute++)
			{
				if (bitset<10>(hour << 6 | minute).count() == num)
				{
					result.emplace_back(to_string(hour) + (minute < 10 ? ":0" : ":") + to_string(minute));
				}
			}
		}
		return result;
	}
};