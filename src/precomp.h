//
//  precomp.h
//  iff
//
//  Created by Fabien Sanglard on 12/27/2013.
//  Copyright (c) 2013 Fabien Sanglard. All rights reserved.
//

#ifndef iff_precomp_h
#define iff_precomp_h

#ifdef __cplusplus
extern "C" {
#endif
#include <stdlib.h>
#include <stdio.h>
    
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
    #include <string.h>
    #include <vector>
    #include <map>
    #include <math.h>
    #include <stdint.h>

    #include "SDL2/SDL.h"
    #include "SDL2/SDL_opengl.h"

// Reusable Realspace Classes
    #include "Base.h"
    #include "ByteStream.h"
    #include "TreArchive.h"
    #include "Matrix.h"
    #include "Camera.h"
    #include "Texture.h"
    #include "RSImage.h"
    #include "Renderer.h"
    #include "IffLexer.h"
    #include "PakArchive.h"
    #include "RSPalette.h"
    #include "RSEntity.h"
    #include "RSMusic.h"
    #include "RSSound.h"
    #include "RSMapTextureSet.h"
    #include "RSArea.h"
    #include "RLECodex.h"

// Strike commander specific.
    #include "SCObjectViewer.h"
    #include "SCDogFightMenu.h"
    #include "SCMainMenu.h"


/*
    

    #include "IFFChunkReader.h"
    #include "IFFReader.h"

    #include "RealSpaceObject.h"
    #include "IFFObjectReader.h"

    #include "gfx.h"
    #include "pak.h"



    #include "IFFReader.h"
 */
#endif










#endif
