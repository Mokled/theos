/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CAContext.h"


__attribute__((visibility("hidden")))
@interface CAContextImpl : CAContext {
@private
	Context* _impl;
}
-(id)initWithOptions:(id)options localContext:(bool)context;
-(id)initRemoteWithOptions:(id)options;
// inherited: -(void)invalidate;
// inherited: -(void)dealloc;
-(unsigned)contextId;
-(CGColorSpaceRef)colorSpace;
-(void)setColorSpace:(CGColorSpaceRef)space;
-(id)layer;
-(void)setLayer:(id)layer;
// inherited: -(void)orderAbove:(unsigned)above;
// inherited: -(void)orderBelow:(unsigned)below;
-(void)setLevel:(float)level;
-(float)level;
-(BOOL)valid;
// inherited: -(void)setFence:(unsigned)fence count:(unsigned)count;
// inherited: -(unsigned)createSlot;
// inherited: -(void)deleteSlot:(unsigned)slot;
// inherited: -(void)setObject:(id)object forSlot:(unsigned)slot;
-(Context*)renderContext;
@end
