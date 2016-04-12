//
//  DataManager.hpp
//  FamilyRush
//
//  Created by 欧阳望 on 16/4/12.
//
//

#ifndef DataManager_hpp
#define DataManager_hpp

#include <stdio.h>

#include "cocos2d.h"
using namespace cocos2d;
using namespace std;

#include "Role.hpp"


#define Data_SIGLE DataManager::getInstance();

class DataManager
{
public:
    ~DataManager();
    
    static DataManager* getInstance();
    
    // all role list
    vector<Role* > m_RoleVector;
    
    
private:
    DataManager();
    
    static DataManager* mpInstance;
    
};

#endif /* DataManager_hpp */
