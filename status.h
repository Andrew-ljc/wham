#ifndef STATUS_H
#define STATUS_H

#include<math.h>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#include<vector>

struct status {
  int L;
  float K;
  std::vector<int> s;
  int sum;
  int ener;

  status() {};
  status(int nL, float nK);

  int de(int, int);
  void go(int, int);
  void flip(int, int);
};

#endif
