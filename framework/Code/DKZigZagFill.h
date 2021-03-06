/**
 @author Contributions from the community; see CONTRIBUTORS.md
 @date 2005-2015
 @copyright GNU LGPL3; see LICENSE
*/

#import "DKFill.h"

@interface DKZigZagFill : DKFill <NSCoding, NSCopying> {
@private
	CGFloat mWavelength;
	CGFloat mAmplitude;
	CGFloat mSpread;
}

/**  */
- (void)setWavelength:(CGFloat)w;
- (CGFloat)wavelength;

- (void)setAmplitude:(CGFloat)amp;
- (CGFloat)amplitude;

- (void)setSpread:(CGFloat)sp;
- (CGFloat)spread;

@end
