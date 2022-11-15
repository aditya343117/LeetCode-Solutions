class Solution {
public:
    int clumsy(int N) {
      if (N==0||N == 1|| N== 2) return N;
	if (N == 3) return 6;
	if (N == 4) return 7;
	if (N % 4 == 1) return N + 2;
	if (N % 4 == 2) return N + 2;
	if (N % 4 == 3) return N - 1;
	return N + 1;  
    }
};