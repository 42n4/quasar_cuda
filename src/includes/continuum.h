#ifndef CONTINUUM_H
#define CONTINUUM_H

#include "../kernels/cuda_rcpp_common.h"

extern "C"
void calculateDcfun(
    const double *h_wavelengths,
    double *h_dcfuns,
    double *h_cfuns,
    const double8 *h_reglin, 	// Parametry prostej regresji liniowej
    const double8 *h_creglin, 	// Parametry prostej regresji liniowej
  const size_t width,
  const size_t height
);

extern "C"
void reduceChisqs(
    double *h_chisq,
    const size_t *h_sizes,
    const size_t width
);

extern "C"
void fixContinuumReglin(
    double8 *h_continuum_reglin,
    double8 *h_reglin,
    const size_t size
);

extern "C"
void calculateContinuumFunction(
    const double *h_wavelengths,
    double *h_cfun,
    const double8 *h_reglin_vector,
    const size_t width,
    const size_t height
);

#endif