class Solution {
public:
    vector<int> findErrorNums(vector<int>& A) {
      vector<int> v(2);
      long long int s1 = accumulate(A.begin(), A.end(), 0);
      int n = A.size();
      long long int exp_sum = (n * (n + 1)) / 2;
      for (int i = 0; i < n; i++) {
         if (A[abs(A[i]) - 1] > 0) {
            A[abs(A[i]) - 1] = -A[abs(A[i]) - 1];
         }
         else {
            v[0] = abs(A[i]);
         break;
         }
      }
      v[1] = v[0] - (s1 - exp_sum);
      return v;
    }
};
