#ifndef MLDEFINES_H

    #define MLDEFINES_H

    #define ML_APPNAME      "mlDefines.h:Change me!"
    #define ML_WIDTH        480
    #define ML_HEIGHT       480
    #define ML_RENDERSCALE  1


    #ifdef DEBUG
        #define trace(...)  SDL_Log( __VA_ARGS__ )
    #else
        #define trace(...)
    #endif

#endif