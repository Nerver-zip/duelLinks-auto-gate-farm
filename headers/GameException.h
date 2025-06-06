#ifndef GAMEEXCEPTION_H
#define GAMEEXCEPTION_H

#include <opencv2/opencv.hpp>
#include <windows.h>
#include <iostream>
#include <unordered_map>
#include "Util.h"

class GameException {
public:
    bool checkConnectionError();
    bool checkGameCrash();
    bool checkFatalError();
    bool handleConnectionError();
    bool handleGameCrash();
    bool handleFatalError();
    bool handleOutlierEvent();
};

#endif