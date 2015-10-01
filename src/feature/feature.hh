// File: feature.hh
// Date: Fri May 03 03:36:57 2013 +0800
// Author: Yuxin Wu <ppwwyyxxc@gmail.com>

#pragma once

#include "lib/config.hh"
#include "lib/mat.h"
#include "lib/geometry.hh"
#include <cstring>

struct Descriptor {
	Vec2D coor;
	std::vector<float> descriptor;
};

std::vector<Descriptor> detect_SIFT(const Mat32f& img);

// A Scale-Space point
struct SSPoint {
	Coor coor;
	Vec2D real_coor;
	int pyr_id, scale_id; // octave / scale id
	float dir;
	float scale_factor;
};

std::vector<SSPoint> detect_extrema(const Mat32f& img);

