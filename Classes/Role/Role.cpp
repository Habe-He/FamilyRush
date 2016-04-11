//
//  Role.cpp
//  FamilyRush
//
//  Created by 欧阳望 on 16/4/11.
//
//

#include "Role.hpp"

Role::Role()
{
    
}

Role::~Role()
{
    
}

Role* Role::createRole(RoleType _roleType)
{
    Role* _role = nullptr;
    switch (_roleType) {
        case RoleFather:
            break;
        case RoleMother:
            break;
        case RoleSister:
            break;
        case RoleGradeFather:
            break;
        case RoleGrademother:
            break;
    }
    
    return _role;
}

void Role::initAnimation()
{
    
}

void Role::getRoleState()
{
    
}

void Role::roleHurt(float& _damage)
{
    
}

float Role::getRoleHP()
{
    return 0.0f;
}

cocos2d::Rect Role::getRoleCollideRect()
{
    return Rect(0, 0, 0, 0);
}
