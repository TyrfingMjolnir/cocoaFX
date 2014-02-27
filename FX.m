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
