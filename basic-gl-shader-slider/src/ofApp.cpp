#include "ofApp.h"

float radius;
float cherry;

//--------------------------------------------------------------
void ofApp::setup(){
    radius = ofRandom(5,100);
    cherry = radius *0.1;
    gui.setup(); 
    gui.add(testSlider.setup("radius", 140, 10, 300));
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofShader shader;
//    shader.load("","shader.frag");

    shader.load("","shader.frag");
    shader.begin();
//    shader.setUniform1f("u_value1", cherry);
    shader.setUniform1f("u_value1", testSlider*0.1);
    shader.setUniform1f("u_time", ofGetElapsedTimef());
    shader.setUniform2f("u_resolution", ofGetWidth(), ofGetHeight());
    
    ofRect(0,0,ofGetWidth(), ofGetHeight());
    shader.end();
    gui.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}
