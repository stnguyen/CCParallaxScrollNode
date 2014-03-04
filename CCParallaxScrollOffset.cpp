//
//  CCParallaxScrollOffset.cpp
//  ParallaxScrollNodeTest
//
//  Created by Jason Marziani on 3/26/12.
//  Copyright (c) 2012 Little Wins LLC. All rights reserved.
//
//  Made compatible with Cocos2d-x 2.x by Stefan Nguyen on 7/30/12.
//

#include "CCParallaxScrollOffset.h"

using namespace cocos2d;

// on "init" you need to initialize your instance
bool CCParallaxScrollOffset::init()
{
	if ( !CCLayer::init() ) return false;
    
    this->setRelVelocity(Point(0,0));
    this->setScrollOffset(Point(0,0));
    this->setPosition(Point(0,0));
    this->setRatio(Point(0,0));
    return true;
}

CCParallaxScrollOffset* CCParallaxScrollOffset::scrollWithNode(Node *node, Point r, Point p, Point s){
    CCParallaxScrollOffset *offset = (CCParallaxScrollOffset*) CCParallaxScrollOffset::create();
	return (CCParallaxScrollOffset*)offset->initWithNode(node,r,p,s);
}

CCParallaxScrollOffset* CCParallaxScrollOffset::scrollWithNode(Node *node, Point r, Point p, Point s, Point v){
    CCParallaxScrollOffset *offset = (CCParallaxScrollOffset*) CCParallaxScrollOffset::create();
	return (CCParallaxScrollOffset*)offset->initWithNode(node,r,p,s,v);
}

CCParallaxScrollOffset* CCParallaxScrollOffset::initWithNode(Node *node, Point r, Point p, Point s, Point v){
    if(!this) return false;
    this->setRatio(r);
    this->setScrollOffset(s);
    this->setRelVelocity(v);
    this->setOrigPosition(p);
    node->setPosition(p);
    node->setAnchorPoint(Point(0, 0));
    this->setTheChild(node);
	return this;
}

CCParallaxScrollOffset* CCParallaxScrollOffset::initWithNode(Node *node, Point r, Point p, Point s){
	return this->initWithNode(node, r, p, p, Point(0,0));
}
