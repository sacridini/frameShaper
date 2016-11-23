//
//  VideoClass.cpp
//  nitVid
//
//  Created by Gingerpic on 11/22/16.
//
//

#include "VideoClass.hpp"

void VideoClass::setup(){
    showGui = true;
    video.load("Chronos.mp4");
    
    gui.setup();
    gui.add(volume.setup("volume", 1.0, 0.0, 1.0));
    gui.add(speed.setup("speed", 1.0, -3.0, 3.0));
    gui.add(play.setup("Play"));
    gui.add(stop.setup("Stop"));
    gui.add(pause.setup("Pause"));
    
    play.addListener(this, &VideoClass::playPressed);
    stop.addListener(this, &VideoClass::stopPressed);
    pause.addListener(this, &VideoClass::pauseVideo);
    video.setSpeed(speed);
}

void VideoClass::update(){
    video.update();
}

void VideoClass::draw(){
    video.draw(0, 0, ofGetScreenWidth(), ofGetScreenHeight());
    video.setVolume(volume);
    if (showGui) {
        gui.draw();
    }
}

void VideoClass::playPressed(){
    video.play();
}

void VideoClass::stopPressed(){
    video.stop();
}

void VideoClass::pauseVideo(){
    video.setPaused(true);
}

void VideoClass::keyPressed(int key){
    
    switch (key) {
        case ' ':
            if(!video.isPlaying()) {
                video.play();
            } else {
                video.setPaused(true);
            }
            break;
        case OF_KEY_LEFT:
            video.previousFrame();
            break;
        case OF_KEY_RIGHT:
            video.nextFrame();
            break;
        case 's':
            video.stop();
            break;
        case 'z':
            showGui = !showGui;
            break;
        case '1':
            count_1++;
            if (count_1 == 1) {
                videoPosition_1 = video.getPosition();
            } else {
                video.setPosition(videoPosition_1);
            }
            break;
        case '2':
            count_2++;
            if (count_2 == 1) {
                videoPosition_2 = video.getPosition();
            } else {
                video.setPosition(videoPosition_2);
            }
            break;
        case '3':
            count_3++;
            if (count_3 == 1) {
                videoPosition_3 = video.getPosition();
            } else {
                video.setPosition(videoPosition_3);
            }
            break;
        case '4':
            count_4++;
            if (count_4 == 1) {
                videoPosition_4 = video.getPosition();
            } else {
                video.setPosition(videoPosition_4);
            }
            break;
        case '5':
            count_5++;
            if (count_5 == 1) {
                videoPosition_5 = video.getPosition();
            } else {
                video.setPosition(videoPosition_5);
            }
            break;
        case '6':
            count_6++;
            if (count_6 == 1) {
                videoPosition_6 = video.getPosition();
            } else {
                video.setPosition(videoPosition_6);
            }
            break;
        case '7':
            count_7++;
            if (count_7 == 1) {
                videoPosition_7 = video.getPosition();
            } else {
                video.setPosition(videoPosition_7);
            }
            break;
        case '8':
            count_8++;
            if (count_8 == 1) {
                videoPosition_8 = video.getPosition();
            } else {
                video.setPosition(videoPosition_8);
            }
            break;
        case '9':
            count_9++;
            if (count_9 == 1) {
                videoPosition_9 = video.getPosition();
            } else {
                video.setPosition(videoPosition_9);
            }
            break;
        case '0':
            count_0++;
            if (count_0 == 1) {
                videoPosition_0 = video.getPosition();
            } else {
                video.setPosition(videoPosition_0);
            }
            break;
        case '!':
            count_1 == 0;
            videoPosition_1 = video.getPosition();
            break;
        case '@':
            count_2 == 0;
            videoPosition_2 = video.getPosition();
            break;
        case '#':
            count_3 == 0;
            videoPosition_3 = video.getPosition();
            break;
        case '$':
            count_4 == 0;
            videoPosition_4 = video.getPosition();
            break;
        case '%':
            count_5 == 0;
            videoPosition_5 = video.getPosition();
            break;
        case '^':
            count_6 == 0;
            videoPosition_6 = video.getPosition();
            break;
        case '&':
            count_7 == 0;
            videoPosition_7 = video.getPosition();
            break;
        case '*':
            count_8 == 0;
            videoPosition_8 = video.getPosition();
            break;
        case '(':
            count_9 == 0;
            videoPosition_9 = video.getPosition();
            break;
        case ')':
            count_0 == 0;
            videoPosition_0 = video.getPosition();
            break;
    }
}