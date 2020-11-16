#ifndef __RAY_H__
#define __RAY_H__

#include "vec.h"

class Object;
class Ray {
public:
  vec3 endPoint;  // endpoint of ray where t=0
  vec3 direction; // direction of the ray - unit vector

  Ray() : endPoint(0, 0, 0), direction(0, 0, 1) {}
  Ray(const vec3 &endpoint_input, const vec3 &direction_input)
      : endPoint(endpoint_input), direction(direction_input.normalized()) {}

  vec3 point(double t) const { return endPoint + direction * t; }
};
#endif
