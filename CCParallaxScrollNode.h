//
//  ParallaxScrollNode.h
//  ParallaxScrollNodeTest
//
//  Created by Jason Marziani on 3/26/12.
//  Copyright (c) 2012 Little Wins LLC. All rights reserved.
//
//  Made compatible with Cocos2d-x 2.x by Stefan Nguyen on 7/30/12.
//

#ifndef ParallaxScrollNodeTest_ParallaxScrollNode_h
#define ParallaxScrollNodeTest_ParallaxScrollNode_h

#include "cocos2d.h"
#include "CCParallaxScrollOffset.h"

#ifndef PTM_RATIO
#define PTM_RATIO 32
#endif

using namespace cocos2d;

class CCParallaxScrollNode : public cocos2d::Layer
{
public:
	virtual bool init();
	CREATE_FUNC(CCParallaxScrollNode);
  
  SpriteBatchNode batch;
  Size _range;
  
  cocos2d::Vector<CCParallaxScrollOffset *> _scrollOffsets;
  
  void addChild(Sprite *node, int z, Point r, Point p, Point so);
  void addChild(Sprite *node, int z, Point r, Point p, Point so, Point v);
  
  void removeChild(Sprite *node, bool cleanup);
  void updateWithVelocity(Point vel, float dt);
  void updateWithYPosition(float y, float dt);
  
  void addInfiniteScrollWithZ(int z, Point ratio, Point pos, Point dir, Sprite *firstObject, ...);
  void addInfiniteScrollXWithZ(int z, Point ratio, Point pos, Sprite* firstObject, ...);
  void addInfiniteScrollYWithZ(int z,  Point ratio, Point pos, Sprite* firstObject, ...);
  
  void addInfiniteScrollWithObjects(const cocos2d::Vector<Sprite *>& objects, int z, Point ratio, Point pos, Point dir);
  void addInfiniteScrollWithObjects(const cocos2d::Vector<Sprite *>& objects, int z, Point ratio, Point pos, Point dir, Point relVel);
  void addInfiniteScrollWithObjects(const cocos2d::Vector<Sprite *>& objects, int z, Point ratio, Point pos, Point dir, Point relVel, Point padding);
  
};

#endif
