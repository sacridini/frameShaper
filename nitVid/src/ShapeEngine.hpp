//
//  ShapeEngine.hpp
//  nitVid
//
//  Created by Gingerpic on 11/22/16.
//
//

#ifndef ShapeEngine_hpp
#define ShapeEngine_hpp

#include "ofMain.h"

class ShapeEngine{
public:
    void setup();
    void draw();
    
    ofParameterGroup shapeParameters;
    ofParameter<int> red;
    ofParameter<int> green;
    ofParameter<int> blue;
    
    ofParameter<int> posX;
    ofParameter<int> posY;
    ofParameter<int> radius;
};

#endif /* ShapeEngine_hpp */
