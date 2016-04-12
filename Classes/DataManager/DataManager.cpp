//
//  DataManager.cpp
//  FamilyRush
//
//  Created by 欧阳望 on 16/4/12.
//
//

#include "DataManager.hpp"

DataManager* DataManager::mpInstance = nullptr;

DataManager::DataManager()
{
    m_RoleVector.clear();
}

DataManager::~DataManager()
{
    m_RoleVector.clear();
}

DataManager* DataManager::getInstance()
{
    if (mpInstance == nullptr)
    {
        mpInstance = new DataManager();
    }
    
    return mpInstance;
}
