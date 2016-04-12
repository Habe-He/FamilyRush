//
//  Sister.hpp
//  FamilyRush
//
//  Created by 欧阳望 on 16/4/12.
//
//

#ifndef Sister_hpp
#define Sister_hpp

#include <stdio.h>

#include "cocos2d.h"

using namespace cocos2d;

//#include "RoleSprite.hpp"

#include "Role.hpp"

class Sister : public Role
{
public:
    Sister(){}
    ~Sister(){}
    
    bool initRoleInfo();
    
    virtual void getRoleState();
    virtual void roleHurt(float& _damage);
    virtual float getRoleHP();
    virtual cocos2d::Rect getRoleCollideRect();
};

#endif /* Sister_hpp */
