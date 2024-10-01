#include<bits/stdc++.h>
using namespace std;
int calculate_load(int curr_floor, int target_floor, int from_floor, int to_floor) {

  if (curr_floor == target_floor)
    return 0;

  if (curr_floor >= from_floor && curr_floor <= to_floor &&
      target_floor >= curr_floor) {
    return max(target_floor - to_floor, 0);
  }

  if (curr_floor <= from_floor && curr_floor >= to_floor &&
      target_floor <= curr_floor) {
    return max(to_floor - target_floor, 0);
  }

  return abs(curr_floor - to_floor) + abs(target_floor - curr_floor);
}
struct LiftSeq {
  int from;
  int to;
};
int main() {
  LiftSeq seqs[100000];
  int q;
  cin >> q;
  for (int i{1}; i <= q; ++i) {
    cin >> seqs[0].from; // input to un-used buffer
    cin >> seqs[i].from >> seqs[i].to;
  }
  int n;
  cin >> n;

  while (n--) {
    int curr_floor, target_floor;
    cin >> curr_floor >> target_floor;

    int mn_at{0};
    int mn{static_cast<int>(1e9)};
    for (int j{1}; j <= q; ++j) {

      if (int curr_load{calculate_load(curr_floor, target_floor, seqs[j].from,
                                       seqs[j].to)}; curr_load < mn) {
        mn = curr_load;
        mn_at = j;
      }
    }

    cout << ">> " << mn_at << "\n";
  }
}
