#ifndef HISTOGRAM_H
#define HISTOGRAM_H
#include"status.h"
#include<map>

struct histogram {

  int L;
  std::vector<float> R;
  std::map<int, int> N;
  std::map<int, long double> outP;
  float K;

  void judge(int E);
  void getP(float outK);
  void initial(int l, int begin, int end, int step);

};

#endif
