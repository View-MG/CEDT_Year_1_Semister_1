#include<bits/stdc++.h>
using namespace std;

double fscf(int *seqs, unsigned int size, unsigned int pos) {
  if (pos + 1 >= size)
    return seqs[pos];

  return seqs[pos] + 1 / fscf(seqs, size, pos + 1);
}

int main() {
  int size;
  int seqs[500];
  cin >> size;
  for (int i=0; i < size; i++) {
    cin >> seqs[i];
    cout << std::setprecision(10) << fscf(seqs, i + 1, 0) << std::endl;
  }
}
