//
//  ViewController.h
//  TexaGPSTEST
//
//  Created by ISSHO on 12/10/31.
//  Copyright (c)2012 ISSHO. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <TexaGPS/TexaGPSClient.h>

@interface ViewController : UIViewController
<MKMapViewDelegate,TexaGPSClientDelegate,CLLocationManagerDelegate>
{
    CLLocationManager* locationManager;
    TexaGPSClient* texaGPS;
    MKUserLocation* proxyUserLocation;
    MKUserLocation* rippleUserLocation;
    MKAnnotationView* lastLocationView;
}

@property (strong, nonatomic) IBOutlet MKMapView *mapTestView;
@property (strong, nonatomic) IBOutlet UIImageView *compassImageView;
@property (strong, nonatomic) IBOutlet UIButton *killButton;

@end
