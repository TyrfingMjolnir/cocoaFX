#import "FX.h"

@implementation FX

-(id)init {
  self = [super init];
  if( self != nil ) {
    _protocol = @"http";
    _serverIP = @"127.0.0.1";
    _serverPort = @"80";
    _grammar = @"fmp7";
  }
  return self;
}

-(void)setServerIP:(NSString *)serverIP
        serverPort:(NSString *)serverPort
           grammar:(NSString *)grammar
          protocol:(NSString *)protocol {
  _serverIP   = serverIP;
  _serverPort   = serverPort;
  _grammar   = grammar;
  _protocol   = protocol;
}

-(void)printCallInfo {
  _compoundURL = [NSString stringWithFormat: @"%@://%@:%@",
        _protocol,
        _serverIP,
        _serverPort];
  NSLog( @"%@", _compoundURL);
}

-(void)callURL {
  // Create the request.
  NSURLRequest *theRequest=[NSURLRequest requestWithURL:[NSURL URLWithString:_compoundURL ]
                                            cachePolicy:NSURLRequestUseProtocolCachePolicy
                                        timeoutInterval:60.0];
  
  // Create the NSMutableData to hold the received data.
  // receivedData is an instance variable declared elsewhere.
  receivedData = [NSMutableData dataWithCapacity: 0];
  
  // create the connection with the request
  // and start loading the data
  NSURLConnection *theConnection=[[NSURLConnection alloc] initWithRequest:theRequest delegate:self];
  if (!theConnection) {
    // Release the receivedData object.
    receivedData = nil;
    
    // Inform the user that the connection failed.
  }
  
  NSLog( @"%@", receivedData );
  
}

#pragma mark - Copyright stuff

/*
 
 FX.m
 cocoaFX
 
 Created by Gjermund Gusland Thorsen on 13.02.14.
 Copyright (c) 2014 Gjermund Gusland Thorsen. All rights deserved.
 
 
 Based on the mothership of all FileMaker CWP solutions: FX.php 6.0
 by Chris Hansen with Chris Adams, G G Thorsen, Masayuki Nii, and others
 
 Like it's mother project; FX.php, cocoaFX is also based on the same
 license namely: Artistic License and addendum (included with release)
 
 cocoaFX is a free open-source PHP class for accessing FileMaker and other databases.
 
 http://github.com/tyrfingmjolnir/cocoafx/
 */

#pragma mark - In the memory of my tribe; May Pahana be with you
