#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
#include "Box2D/Box2D.h"
#define PTM_RATIO 32.0
class HelloWorld : public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();
    virtual void update(float dt);

    // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);
private:
    b2World *_world;
    b2Body *_body;
    cocos2d::Sprite *_ball;
    
    void kick(float dt);
};

#endif // __HELLOWORLD_SCENE_H__
