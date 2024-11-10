#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <vector>
#include <algorithm>
#include "queue.h"

template <typename T>
void CP::queue<T>::remove_many(std::vector<size_t> pos){
  T *arr = new T[mCap*2]();
  std::sort(pos.begin(),pos.end());
  int idx=0,idx2=0;
  int n=mSize;
  for(int i{0} ; i<n ; i++){
    if(i==pos[idx]){
      idx++;
    }
    else{
      arr[idx2] = front();
      idx2++;
    }
    pop();
  }
  delete[] mData;
  mData = arr;
  mSize = n-pos.size();
  mFront = 0;
}

#endif
