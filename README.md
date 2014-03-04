## Parallax Scrolling for Cocos2d-X 3.x

This code is 100% based on the [CCParallaxScrollingNode project for
cocos2d-iphone](https://github.com/aramkocharyan/cocos2d).

[Jason Marziani](https://github.com/jasonmarziani/CCParallaxScrollNode)
ported it to Cocos2d-X, but the project is not compatible with Cocos2d-X
3.x, so I forked and modified.

Tested with Cocos2d-X v3 beta 2

------------------------------------------------------

#### Usage

Include the following files in your project

    CCParallaxScrollNode.h
    CCParallaxScrollNode.cpp
    CCParallaxScrollOffset.h
    CCParallaxScrollOffset.cpp

Use it

    Sprite *bg1 = Sprite::create("bg1-0.jpg");
    Sprite *bg2 = Sprite::create("bg1-1.jpg");
    Sprite *bg3 = Sprite::create("bg1-2.jpg");

    mParallaxBg->addInfiniteScrollXWithZ(0, Point(1, 1), Point(0,0), bg1, bg2, bg3, NULL);
    this->addChild(mParallaxBg);

    // in update()
    mParallaxBg->updateWithVelocity(Point(-VELOCITY_X/PTM_RATIO, 0), delta);

--------------------------------------------------------

The MIT License

Copyright (c) 2012 Little Wins LLC

Permission is hereby granted, free of charge, to any person obtaining a
copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be included
in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
