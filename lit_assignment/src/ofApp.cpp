#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255,255,255);
    ofSetCircleResolution(100);

}

//--------------------------------------------------------------
void ofApp::update(){
     X = mouseX - x/2;
     Y = mouseY - y/2;
    
  
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    ofSetLineWidth(2);
    ofSetColor(100, 100, 100, 160);
    for (float i = 0; i < ofGetWidth(); i++){
        ofLine(i*ofGetWidth()/30, 0, i*ofGetWidth()/30, ofGetHeight()); }
    for (float i = 0; i < ofGetHeight(); i++){
        ofLine(0, i*ofGetWidth()/30, ofGetWidth(), i*ofGetWidth()/30); }
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
    ofSetColor(100, 100, 100, 255);
    ofLine(mouseX, 0, mouseX, ofGetHeight());
    ofLine(0, mouseY, ofGetWidth(), mouseY);
    
    a = double (atan2(double (-Y), double (X)));
    b = double (atan2(double (Y), double (-X)));
    
 
    c =(a * 180)/PI;
    d =((b * 180)/PI)+180;
    
    e = (a * 180)/PI * 254/360;
    f = ((b * 180)/PI)+180 * 254/360;
    
    
    color.setHsb(e,255,255);
    color.setHsb(f,255,255);
    ofSetColor(color);
    
    
    ofNoFill();
    ofCircle(x/2,y/2,ofDist(x/2, y/2, mouseX, mouseY)) ;
    ofFill();
    ofCircle(x/2,y/2,(ofDist(x/2, y/2, mouseX, mouseY))/4) ;
    


   
  
    
    
    
    
    
   

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
