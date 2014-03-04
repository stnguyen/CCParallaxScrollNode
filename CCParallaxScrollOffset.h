//
//  CCParallaxScrollOffset.h
//  ParallaxScrollNodeTest
//
//  Created by Jason Marziani on 3/26/12.
//  Made compatible with Cocos2d-x 2.x by Stefan Nguyen on 7/30/12.
//
//  Copyright (c) 2012 Vinova Pte Ltd. All rights reserved.
//
//  Made compatible with Cocos2d-x 2.x by Stefan Nguyen on 7/30/12.
//

#ifndef ParallaxScrollNodeTest_CCParallaxScrollOffset_h
#define ParallaxScrollNodeTest_CCParallaxScrollOffset_h

#include "cocos2d.h"
using namespace cocos2d;

class CCParallaxScrollOffset : public cocos2d::Layer
{
public:
	virtual bool init();  
	CREATE_FUNC(CCParallaxScrollOffset);
    //
    CC_SYNTHESIZE(Point, scrollOffset, ScrollOffset);
    CC_SYNTHESIZE(Point, origPosition, OrigPosition);
    CC_SYNTHESIZE(Point, relVelocity, RelVelocity);
    CC_SYNTHESIZE(Point, ratio, Ratio);
    CC_SYNTHESIZE(Point, buffer, Buffer);
    CC_SYNTHESIZE(Node*, theChild, TheChild);
    
    static CCParallaxScrollOffset* scrollWithNode(Node *node, Point r, Point p, Point s);
    static CCParallaxScrollOffset* scrollWithNode(Node *node, Point r, Point p, Point s, Point v);
    CCParallaxScrollOffset* initWithNode(Node *node, Point r, Point p, Point s, Point v);
    CCParallaxScrollOffset* initWithNode(Node *node, Point r, Point p, Point s);
};

#endif
