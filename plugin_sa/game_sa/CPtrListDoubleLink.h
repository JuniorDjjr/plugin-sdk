/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_SA.h"
#include "CPtrList.h"
#include "CPtrNodeDoubleLink.h"

class PLUGIN_API CPtrListDoubleLink : public CPtrList {
public:
    inline CPtrNodeDoubleLink *GetNode() {
        return reinterpret_cast<CPtrNodeDoubleLink *>(pNode);
    }

    void Flush();
    ~CPtrListDoubleLink();

    /*
    ~CPtrListDoubleLink() {
        Flush();
    }
    */

    void AddItem(void* item);
    void DeleteItem(void* item);
};

VALIDATE_SIZE(CPtrListDoubleLink, 4);