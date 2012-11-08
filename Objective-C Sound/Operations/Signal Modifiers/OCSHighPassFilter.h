//
//  OCSHighPassFilter.h
//  Objective-C Sound
//
//  Auto-generated from database on 11/6/12.
//  Copyright (c) 2012 Hear For Yourself. All rights reserved.
//

#import "OCSAudio.h"
#import "OCSParameter+Operation.h"

/** A first-order recursive high-pass filter with variable frequency response.
 
 A complement to the OCSLowPassFilter.
 */

@interface OCSHighPassFilter : OCSAudio

/// Instantiates the high pass filter
/// @param sourceAudio The audio to be filtered
/// @param halfPowerPoint The response curve's half-power point, in Hertz. Half power is defined as peak power / root 2.
- (id)initWithSourceAudio:(OCSAudio *)sourceAudio
           halfPowerPoint:(OCSControl *)halfPowerPoint;

@end