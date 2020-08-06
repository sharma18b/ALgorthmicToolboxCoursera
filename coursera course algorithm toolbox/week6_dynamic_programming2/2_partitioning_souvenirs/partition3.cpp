#include <iostream>
#include <vector>

using std::vector;

int partition3(vector<int> &A,m/3) {
  int n = A.size();
  return 0;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> A(n);
  long int m=0;
  for (size_t i = 0; i < A.size(); ++i) {
    std::cin >> A[i];
    m+=A[i];
  }
  if (m<3 || m%3!=0) cout << 0 << endl;
  else std::cout << partition3(A,m/3) << '\n';
}
