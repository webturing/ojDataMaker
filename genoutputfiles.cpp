#include <bits/stdc++.h>
using namespace std;
int main() {
  int N = 10;
  for (int i = 0; i < N; i++) {
    ostringstream oss;
    oss << "./main <test" << i << ".in >test" << i << ".out";
    cout << oss.str() << endl;
    system(oss.str().c_str());
  }
  return 0;
}