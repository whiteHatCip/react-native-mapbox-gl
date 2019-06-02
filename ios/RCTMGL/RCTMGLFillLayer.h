//
//  RCTMGLFillLayer.h
//  RCTMGL
//
//  Created by Nick Italiano on 9/8/17.
//  Copyright © 2017 Mapbox Inc. All rights reserved.
//

#import "RCTMGLLayer.h"
@import MGLRCT;

@interface RCTMGLFillLayer<MGLFillStyleLayer> : RCTMGLLayer

@property (nonatomic, copy) NSString *sourceLayerID;

@end
