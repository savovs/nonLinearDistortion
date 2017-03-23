/*
  ==============================================================================

    DistortionFunctions.cpp
    Created: 23 Mar 2017 5:39:38pm
    Author:  VESELINOV, VLADISLAV SASHEV 

  ==============================================================================
*/

#include "DistortionFunctions.h"
#include <math.h>
//#include <stdio.h>

using namespace DistortionFunctions;


// First two functions from here:
// http://www.mitpressjournals.org/doi/pdf/10.1162/comj.2009.33.2.85
float DistortionFunctions::distortionOne(float signal)
{
    return 3 * signal / 2 * ((1 - pow(signal, 2) / 3));
}


float DistortionFunctions::distortionTwo(float signal)
{
    // if signal > 0 sign is minus
    const float sign = signal > 0 ? 1.0f : -1.0f;
    
    return sign * (fabs(2 * signal) - pow(signal, 2));
}