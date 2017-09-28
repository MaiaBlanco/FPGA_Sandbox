/****************************************************************
 * Copyright (c) 2017, James C. Hoe, CMU
 * All rights reserved.

 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:

 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.

 * 2. Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.

 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.

 * The views and conclusions contained in the software and
 * documentation are those of the authors and should not be
 * interpreted as representing official policies, either expressed or
 * implied, of the FreeBSD Project.
 ****************************************************************/

/*
 * CMU 18643 Fall 2017 Lab Exercise
 */

#include <math.h>
#include <float.h>
#include "data.h"

/* 
 * The below very neat implementation of float eqaul is taken from
 * http://floating-point-gui.de/errors/comparison/
 * 
 * Published at floating-point-gui.de under the Creative Commons
 * Attribution License (BY)
 * http://creativecommons.org/licenses/by/3.0/
 */ 

int nearlyEqual(float a, float b) {
  float absA = fabs(a);
  float absB = fabs(b);
  float diff = fabs(a - b);
  
  if (a == b) { // shortcut, handles infinities
    return 1;
  } else if (a == 0 || b == 0 || diff < FLT_MIN) {
    // a or b is zero or both are extremely close to it
    // relative error is less meaningful here
    return diff < (EPSILON * FLT_MIN);
  } else { // use relative error
    return diff / fmin((absA + absB), FLT_MAX) < EPSILON;
  }
}
