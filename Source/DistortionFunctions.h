/*
  ==============================================================================

    DistortionFunctions.h
    Created: 23 Mar 2017 5:39:38pm
    Author:  VESELINOV, VLADISLAV SASHEV 

  ==============================================================================
*/

#ifndef DISTORTIONFUNCTIONS_H_INCLUDED
#define DISTORTIONFUNCTIONS_H_INCLUDED

namespace DistortionFunctions {
    float distortionOne(float input);
    float distortionTwo(float input);
    
    float overdrive(float input, float drive);
    
    // Functions from MusicDSP: http://musicdsp.org
    float softSaturation(float input, float param);
    float clipper(float input, float drive);
    
}

#endif  // DISTORTIONFUNCTIONS_H_INCLUDED
