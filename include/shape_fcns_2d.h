/**
 * \file shape_fcns_2d.h
 * This header contains the shape functions for 2D bilinear
 * elements.  They are derived from the 1D shape functions in
 * shape_fcns_1d.h.  They are used in several places throughout
 * the code.
 *
 * \author James Grisham
 * \date 05/22/2015
 */

#ifndef TWO_D_HEADER
#define TWO_D_HEADER

#include <iostream>
#include <cstdlib>
#include <vector>
#include <initializer_list>
#include "shape_fcns_1d.h"

// This is the mapping between ijk and a (N_a defined as N_ijk)
namespace mapping {
const std::vector<int> i_ord({0,1,1,0});
const std::vector<int> j_ord({0,0,1,1});
}

// i = 0,1,1,0
// j = 0,0,1,1
/**
  This is the 2D shape function.

  @param[in]  a is an integer index.
  @param[in]  xi is the first coordinate in the computational plane.
  @param[in]  eta is the second coordinate in the computational plane.
  @return Returns the value of the i-th shape function for the given xi-eta points.
 */

template <typename T> 
T N(const int a, const T xi, const T eta) {
	return psi(mapping::i_ord[a],xi)*psi(mapping::j_ord[a],eta);
}

/**
  This is the derivative of the 2D shape function with respect to xi.

  @param[in]  a is an integer index.
  @param[in]  xi is the first coordinate in the computational plane.
  @param[in]  eta is the second coordinate in the computational plane.
  @return Returns the value of the i-th shape function for the given xi-eta points.
 */

template <typename T> 
T dNdxi(const int a, const T xi, const T eta) {
	return dpsi(mapping::i_ord[a],xi)*psi(mapping::j_ord[a],eta);
}

/**
  This is the derivative of the 2D shape function with respect to eta.

  @param[in]  a is an integer index.
  @param[in]  xi is the first coordinate in the computational plane.
  @param[in]  eta is the second coordinate in the computational plane.
  @return Returns the value of the i-th shape function for the given xi-eta points.
 */

template <typename T> 
T dNdeta(const int a, const T xi, const T eta) {
	return psi(mapping::i_ord[a],xi)*dpsi(mapping::j_ord[a],eta);
}

#endif
