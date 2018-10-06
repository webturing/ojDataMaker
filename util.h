#ifndef _OJ_DATA_UTIL_HEAD_
#define _OJ_DATA_UTIL_HEAD_
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
namespace oj_tools {
void init() { srand(time(NULL)); }
LL randLong() {
  LL x = rand();
  LL y = rand();
  return (x << 16) + y;
}
inline double randDouble() { return (double)rand() / RAND_MAX; }

inline int randInt(int start, int end) {
  return (int)((end - start + 1) * randDouble() + start);
}
vector<int> randIntsNormalDistribution(int start, int end, int size = 10) {
  vector<int> v(size, 0);
  for (int i = 0; i < size; i++) {
    int tot = 0;
    for (int j = 0; j < 2; j++)
      tot += randInt(start, end);
    v[i] = tot / 2;
  }
  return v;
}
vector<int> randIntsPossionDistribution(int start, int end, int size = 10) {
  vector<int> v(size, 0);
  for (int i = 0; i < size; i++) {
    int x = randInt(start, end);
    int y = randInt(start, end);
    v[i] = min(x, y);
  }
  return v;
}
vector<int> randInts(int start, int end, int size = 10) {
  vector<int> v(size, 0);
  for (int i = 0; i < size; i++)
    v[i] = randInt(start, end);
  return v;
}
vector<int> equalDifferInts(int start, int end, int size = 10) {
  vector<int> v(size);
  int dif = (end - start + 1) / size;
  v[0] = start;
  for (int i = 1; i < size; i++) {
    v[i] = v[i - 1] + dif;
  }
  v[size - 1] = end;
  return v;
}
vector<int> equalRatioInts(int start, int end, int size = 10) {
  vector<int> v(size, 0);
  if (start == 0)
    ++start;
  double q = pow(1.0 * end / start, 1.0 / (size - 1));
  cout << q << endl;
  v[0] = start;
  for (int i = 1; i < size; i++)
    v[i] = (int)(v[i - 1] * q);
  v[size - 1] = end;
  return v;
}
} // namespace oj_tools
#endif