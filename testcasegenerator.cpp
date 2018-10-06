#include <bits/stdc++.h>
using namespace std;
int main() {
  int N = 10;
  for (int i = 0; i < 10; i++) {
    ostringstream oss;
    oss << "test" << i << ".in";
    string filename = oss.str();
    ofstream fout(filename);
    fout << i << " " << 2 * i << endl;
    fout.close();
  }
  return 0;
}