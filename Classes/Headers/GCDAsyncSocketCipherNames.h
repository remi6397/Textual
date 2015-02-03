
// See the contents of GCDAsyncSocketCipherNames.m for license information.

#import "TextualApplication.h"

@interface GCDAsyncSocket (GCDsyncSocketCipherNamesExtension)
- (NSString *)sslNegotiatedProtocolString;
- (NSString *)sslNegotiatedCipherSuiteString;
@end
