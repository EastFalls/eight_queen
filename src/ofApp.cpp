#include "ofApp.h"
#include <vector>

std::vector<int> board;
std::vector<int> solutions;
int solutions_index;

bool check(int n, int r) {
    for (int i=0;i<n;i++) {
        if (board[i]==r || std::abs(board[i]-r)==std::abs(n-i))
            return false;
    }
    return true;
}

void solve(int n)
{

}

//--------------------------------------------------------------
void ofApp::setup(){
    board.resize(8);
    solve(0);
    std::cout << solutions.size() << std::endl;
}

//--------------------------------------------------------------
void ofApp::update(){
    int n=solutions[solutions_index];
    for (int i=0;i<8;i++,n/=10) board[i]=n%10;
}

//--------------------------------------------------------------
void ofApp::draw(){
    int margin = 5;
    int width = std::min(ofGetWidth(), ofGetHeight());
    int cell_width = (width-2*margin)/8;
    for (int i=0;i<8;i++) {
        for (int j=0;j<8;j++) {
            if (board[i]==j) {
                ofSetHexColor(0xff0000);
                ofFill();
            } else {
                ofSetHexColor(0x00);
                ofNoFill();
            }
            ofDrawRectangle(margin+i*cell_width,
                            margin+j*cell_width,
                            cell_width, cell_width);
        }
    }
}

//--------------------------------------------------------------
void ofApp::exit(){

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
    solutions_index++;
    if(solutions_index>=solutions.size()) solutions_index=0;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseScrolled(int x, int y, float scrollX, float scrollY){

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
