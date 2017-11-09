#ifndef GPUFIT_CONSTANTS_H_INCLUDED
#define GPUFIT_CONSTANTS_H_INCLUDED

// fitting model ID
enum ModelID : int { GAUSS_1D = 0, GAUSS_2D = 1, GAUSS_2D_ELLIPTIC = 2, GAUSS_2D_ROTATED = 3, CAUCHY_2D_ELLIPTIC = 4, LINEAR_1D = 5 };

// estimator ID
enum EstimatorID : int { LSE = 0, MLE = 1 };

// fit state
enum FitState : int { CONVERGED = 0, MAX_ITERATION = 1, SINGULAR_HESSIAN = 2, NEG_CURVATURE_MLE = 3, GPU_NOT_READY = 4 };

// return state
enum ReturnState : int { OK = 0, ERROR = -1 };

#endif
