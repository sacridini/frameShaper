//
//  VideoClass.hpp
//  nitVid
//
//  Created by Gingerpic on 11/22/16.
//
//

#ifndef VideoClass_hpp
#define VideoClass_hpp

#include "ofMain.h"
#include "ofxGui.h"

class VideoClass{

public:
    bool showGui;
    
    int count_1 = 0;
    int count_2 = 0;
    int count_3 = 0;
    int count_4 = 0;
    int count_5 = 0;
    int count_6 = 0;
    int count_7 = 0;
    int count_8 = 0;
    int count_9 = 0;
    int count_0 = 0;
    
    float videoPosition_1;
    float videoPosition_2;
    float videoPosition_3;
    float videoPosition_4;
    float videoPosition_5;
    float videoPosition_6;
    float videoPosition_7;
    float videoPosition_8;
    float videoPosition_9;
    float videoPosition_0;

    void setup();
    void update();
    void draw();
    void keyPressed(int key);
    
    void playPressed();
    void stopPressed();
    void pauseVideo();
    
    ofxPanel gui;
    
    ofxButton play;
    ofxButton stop;
    ofxButton pause;
    ofxFloatSlider volume;
    ofxFloatSlider speed;
    
    ofVideoPlayer video;
};

#endif /* VideoClass_hpp */
