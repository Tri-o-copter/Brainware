/*
 * File: tricopter_simulation_rtw_private.h
 *
 * Code generated for Simulink model 'tricopter_simulation_rtw'.
 *
 * Model version                  : 1.242
 * Simulink Coder version         : 8.1 (R2011b) 08-Jul-2011
 * TLC version                    : 8.1 (Jul  9 2011)
 * C/C++ source code generated on : Mon Mar 23 12:14:52 2015
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: 32-bit Generic
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objectives: Unspecified
 * Validation result: Passed (0), Warning (1), Error (0)
 */

#ifndef RTW_HEADER_tricopter_simulation_rtw_private_h_
#define RTW_HEADER_tricopter_simulation_rtw_private_h_
#include "rtwtypes.h"
#define CALL_EVENT                     (-1)
#ifndef __RTWTYPES_H__
#error This file requires rtwtypes.h to be included
#else
#ifdef TMWTYPES_PREVIOUSLY_INCLUDED
#error This file requires rtwtypes.h to be included before tmwtypes.h
#else

/* Check for inclusion of an incorrect version of rtwtypes.h */
#ifndef RTWTYPES_ID_C08S16I32L32N32F1
#error This code was generated with a different "rtwtypes.h" than the file included
#endif                                 /* RTWTYPES_ID_C08S16I32L32N32F1 */
#endif                                 /* TMWTYPES_PREVIOUSLY_INCLUDED */
#endif                                 /* __RTWTYPES_H__ */

extern void rt_mldivide_U1d3x3_U2d3_Yd3x1_snf(const real_T u0[9], const real_T
  u1[3], real_T y[3]);

/* Exported functions */
extern real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
  uint32_T maxIndex);

#endif                                 /* RTW_HEADER_tricopter_simulation_rtw_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
