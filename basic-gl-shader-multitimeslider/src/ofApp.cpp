#include "ofApp.h"

float radius;
float cherry;

//--------------------------------------------------------------
void ofApp::setup(){
    radius = ofRandom(5,100);
    cherry = radius *0.1;
    
    showGui = true;
    gui.setup(); 
    gui.add(testSlider1.setup("radius1", 15, 0, 200));
    gui.add(testSlider2.setup("radius2", 15, 0, 100));
    gui.add(testSlider3.setup("radius3", 15, 0, 100));
    gui.add(testSlider4.setup("radius4", 15, 0, 200));
    gui.add(testSlider5.setup("radius5", 15, 0, 200));
    gui.add(testSlider6.setup("radius6", 15, 0, 100));
    gui.add(testSlider7.setup("radius7", 15, 0, 200));
    gui.add(testSlider8.setup("radius8", 15, 0, 100));
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
//    shader.setUniform1f("u_value1", testSlider1*0.1);
    shader.setUniform1f("u_timecontrol1", testSlider1*0.1);
    shader.setUniform1f("u_timecontrol2", testSlider2*0.1);
    shader.setUniform1f("u_timecontrol3", testSlider3*0.1);
    shader.setUniform1f("u_timecontrol4", testSlider4*0.1);
    shader.setUniform1f("u_timecontrol5", testSlider5*0.1);
    shader.setUniform1f("u_timecontrol6", testSlider6*0.1);
    shader.setUniform1f("u_timecontrol7", testSlider7*0.1);
    shader.setUniform1f("u_timecontrol8", testSlider8*0.1);
    shader.setUniform1f("u_time", ofGetElapsedTimef());
    shader.setUniform2f("u_resolution", ofGetWidth(), ofGetHeight());
    
    ofRect(0,0,ofGetWidth(), ofGetHeight());
    shader.end();
    
    if ( showGui ) gui.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if ( key == 'z' ) showGui = !showGui;

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
