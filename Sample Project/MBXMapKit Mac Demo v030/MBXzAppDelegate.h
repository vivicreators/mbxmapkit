//
//  MBXzAppDelegate.h
//  MBXMapKit Mac Demo v030
//
//  Created by Will Snook on 3/6/14.
//  Copyright (c) 2014 MapBox. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <MapKit/MapKit.h>
#import "MBXRasterTileOverlay.h"
#import "MBXOfflineMapDownloader.h"

@interface MBXzAppDelegate : NSObject <NSApplicationDelegate, MKMapViewDelegate, MBXRasterTileOverlayDelegate, MBXOfflineMapDownloaderDelegate>

@property (assign) IBOutlet NSWindow *window;

@end