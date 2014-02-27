// FX.h
#import <Foundation/Foundation.h>

@interface FX : NSObject {
/*
@public
  int publicVar;
@private
  int privateVar;
  int privateVar2;
@protected
  int protectedVar;
*/


@interface FX : NSObject{
  NSString *_protocol;
  NSString *_serverIP;
  NSString *_serverPort;
  NSString *_grammar;
  NSMutableData *receivedData;
  NSString *_compoundURL;
}

-(void)setServerIP:(NSString *)serverIP serverPort:(NSString *)serverPort grammar:(NSString *)grammar protocol:(NSString *)protocol;
-(void)printCallInfo;
-(void)callURL;

@end

#pragma mark - Copyright stuff

/*
 
 FX.m
 cocoaFX
 
 Based on the mothership of all FileMaker CWP solutions: FX.php 6.0
 by Chris Hansen with Chris Adams, G G Thorsen, Masayuki Nii, and others
 
 Like it's mother project; FX.php, cocoaFX is also based on the same
 license namely: Artistic License and addendum (included with release)
 
 cocoaFX is a free open-source PHP class for accessing FileMaker and other databases.
 
 http://github.com/tyrfingmjolnir/cocoafx/
 */

#pragma mark - In the memory of my tribe; May Pahana be with you
