#ifndef DATA_DATA_POINT_H
#define DATA_DATA_POINT_H

#include "basedef.h"

struct data_point {
  /**
   * Collection of an individual observation's covariates and response.
   *
   * @param x   covariates for a single sample
   * @param y   response value for a single sample
   * @param idx index of that data point into the data set
   * @param w   weight of data point (default 1)
   */
  data_point(const mat& x, double y, unsigned idx, double w = 1) : x(x), y(y), idx(idx), w(w) {}

  mat x;
  double y;
  unsigned idx;
  double w;
};

#endif
