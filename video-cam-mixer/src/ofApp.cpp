
#include "ofApp.h"
#include <iostream>

//--------------------------------------------------------------
void ofApp::setup() {
    ofSetLogLevel(OF_LOG_VERBOSE);
    ofSetFrameRate(60);
    ofSetVerticalSync(true);

    shaderMix.load("shadersGL2/shaderMix");
    
    cam1.listDevices();
    cam1.setVerbose(true);
    cam1.setDeviceID(0);
    cam1.initGrabber(640, 480);
}


//--------------------------------------------------------------
void ofApp::update() {
    cam1.update();
}

//--------------------------------------------------------------
void ofApp::draw() {
    framebuffer0.begin();
    shaderMix.begin();
    cam1.draw(0,0);
    shaderMix.setUniformTexture("cam1",cam1.getTexture(),1);
    shaderMix.end();
    framebuffer0.end();
    framebuffer0.draw(0, 0);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::exit() {
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
   
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
   
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {
}

//--------------------------------------------------------------
void ofApp::mouseReleased() {
}
