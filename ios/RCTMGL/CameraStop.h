//
//  CameraStop.h
//  RCTMGL
//
//  Created by Nick Italiano on 9/5/17.
//  Copyright © 2017 Mapbox Inc. All rights reserved.
//

@import MGLRCT;

@interface CameraStop : NSObject

@property (nonatomic, strong) NSNumber *pitch;
@property (nonatomic, strong) NSNumber *heading;
@property (nonatomic, strong) NSNumber *zoom;
@property (nonatomic, strong) NSNumber *boundsPaddingLeft;
@property (nonatomic, strong) NSNumber *boundsPaddingRight;
@property (nonatomic, strong) NSNumber *boundsPaddingTop;
@property (nonatomic, strong) NSNumber *boundsPaddingBottom;
@property (nonatomic, strong) NSNumber *mode;
@property (nonatomic, assign) NSTimeInterval duration;

@property (nonatomic, assign) CLLocationCoordinate2D coordinate;
@property (nonatomic, assign) MGLCoordinateBounds bounds;

+ (CameraStop*)fromDictionary:(NSDictionary*)args;

@end
