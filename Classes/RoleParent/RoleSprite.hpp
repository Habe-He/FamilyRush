//
//  Role.hpp
//  FamilyRush
//
//  Created by 欧阳望 on 16/4/11.
//
//  role parents all role inter it

#ifndef RoleSprite_hpp
#define RoleSprite_hpp

#include <stdio.h>

#include "cocos2d.h"

using namespace cocos2d;

class RoleSprite : public Node
{
public:
    RoleSprite();
    virtual ~RoleSprite();
    
    // role state death/live/hurt
    virtual void getRoleState() = 0;
    
    //
    virtual void roleHurt(float& _damage) = 0;
    
    //
    virtual float getRoleHP() = 0;
    
    //
    virtual cocos2d::Rect getRoleCollideRect() = 0;
    
};

#endif /* Role_hpp */
