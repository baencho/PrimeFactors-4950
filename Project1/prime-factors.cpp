#include <vector>
using std::vector;

class PrimeFactors {
public:
	std::vector<int> of(int n) {
		vector<int> result = {};
		if (n == 2) {
			result.push_back(2);
		}
		return result;
	}
};