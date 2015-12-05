#include "ofApp.h"

float sines[514]={0,0.012268,0.024536,0.036804,0.049042,0.06131,0.073547,0.085785,0.097992,0.1102,0.12241,0.13455,0.1467,0.15884,0.17093,0.18301,0.19507,0.20709,0.21909,0.23105,0.24295,0.25485,0.26669,0.2785,0.29025,0.30197,0.31366,0.32529,0.33685,0.34839,0.35986,0.37128,0.38266,0.39395,0.40521,0.41641,0.42752,0.4386,0.44958,0.46051,0.47137,0.48215,0.49286,0.50351,0.51407,0.52457,0.53497,0.54529,0.55554,0.5657,0.57578,0.58575,0.59567,0.60547,0.6152,0.62482,0.63437,0.6438,0.65314,0.66238,0.67151,0.68057,0.68951,0.69833,0.70706,0.7157,0.72421,0.7326,0.74091,0.74908,0.75717,0.76514,0.77298,0.7807,0.7883,0.79581,0.80316,0.81042,0.81754,0.82455,0.83142,0.8382,0.84482,0.85132,0.8577,0.86392,0.87006,0.87604,0.88187,0.8876,0.89319,0.89862,0.90396,0.90912,0.91415,0.91907,0.92383,0.92847,0.93295,0.93729,0.9415,0.94556,0.94949,0.95325,0.95691,0.96039,0.96375,0.96692,0.97,0.9729,0.97565,0.97827,0.98074,0.98306,0.98523,0.98724,0.98914,0.99084,0.99243,0.99387,0.99515,0.99628,0.99725,0.99808,0.99875,0.99927,0.99966,0.99988,0.99997,0.99988,0.99966,0.99927,0.99875,0.99808,0.99725,0.99628,0.99515,0.99387,0.99243,0.99084,0.98914,0.98724,0.98523,0.98306,0.98074,0.97827,0.97565,0.9729,0.97,0.96692,0.96375,0.96039,0.95691,0.95325,0.94949,0.94556,0.9415,0.93729,0.93295,0.92847,0.92383,0.91907,0.91415,0.90912,0.90396,0.89862,0.89319,0.8876,0.88187,0.87604,0.87006,0.86392,0.8577,0.85132,0.84482,0.8382,0.83142,0.82455,0.81754,0.81042,0.80316,0.79581,0.7883,0.7807,0.77298,0.76514,0.75717,0.74908,0.74091,0.7326,0.72421,0.7157,0.70706,0.69833,0.68951,0.68057,0.67151,0.66238,0.65314,0.6438,0.63437,0.62482,0.6152,0.60547,0.59567,0.58575,0.57578,0.5657,0.55554,0.54529,0.53497,0.52457,0.51407,0.50351,0.49286,0.48215,0.47137,0.46051,0.44958,0.4386,0.42752,0.41641,0.40521,0.39395,0.38266,0.37128,0.35986,0.34839,0.33685,0.32529,0.31366,0.30197,0.29025,0.2785,0.26669,0.25485,0.24295,0.23105,0.21909,0.20709,0.19507,0.18301,0.17093,0.15884,0.1467,0.13455,0.12241,0.1102,0.097992,0.085785,0.073547,0.06131,0.049042,0.036804,0.024536,0.012268,0,-0.012268,-0.024536,-0.036804,-0.049042,-0.06131,-0.073547,-0.085785,-0.097992,-0.1102,-0.12241,-0.13455,-0.1467,-0.15884,-0.17093,-0.18301,-0.19507,-0.20709,-0.21909,-0.23105,-0.24295,-0.25485,-0.26669,-0.2785,-0.29025,-0.30197,-0.31366,-0.32529,-0.33685,-0.34839,-0.35986,-0.37128,-0.38266,-0.39395,-0.40521,-0.41641,-0.42752,-0.4386,-0.44958,-0.46051,-0.47137,-0.48215,-0.49286,-0.50351,-0.51407,-0.52457,-0.53497,-0.54529,-0.55554,-0.5657,-0.57578,-0.58575,-0.59567,-0.60547,-0.6152,-0.62482,-0.63437,-0.6438,-0.65314,-0.66238,-0.67151,-0.68057,-0.68951,-0.69833,-0.70706,-0.7157,-0.72421,-0.7326,-0.74091,-0.74908,-0.75717,-0.76514,-0.77298,-0.7807,-0.7883,-0.79581,-0.80316,-0.81042,-0.81754,-0.82455,-0.83142,-0.8382,-0.84482,-0.85132,-0.8577,-0.86392,-0.87006,-0.87604,-0.88187,-0.8876,-0.89319,-0.89862,-0.90396,-0.90912,-0.91415,-0.91907,-0.92383,-0.92847,-0.93295,-0.93729,-0.9415,-0.94556,-0.94949,-0.95325,-0.95691,-0.96039,-0.96375,-0.96692,-0.97,-0.9729,-0.97565,-0.97827,-0.98074,-0.98306,-0.98523,-0.98724,-0.98914,-0.99084,-0.99243,-0.99387,-0.99515,-0.99628,-0.99725,-0.99808,-0.99875,-0.99927,-0.99966,-0.99988,-0.99997,-0.99988,-0.99966,-0.99927,-0.99875,-0.99808,-0.99725,-0.99628,-0.99515,-0.99387,-0.99243,-0.99084,-0.98914,-0.98724,-0.98523,-0.98306,-0.98074,-0.97827,-0.97565,-0.9729,-0.97,-0.96692,-0.96375,-0.96039,-0.95691,-0.95325,-0.94949,-0.94556,-0.9415,-0.93729,-0.93295,-0.92847,-0.92383,-0.91907,-0.91415,-0.90912,-0.90396,-0.89862,-0.89319,-0.8876,-0.88187,-0.87604,-0.87006,-0.86392,-0.8577,-0.85132,-0.84482,-0.8382,-0.83142,-0.82455,-0.81754,-0.81042,-0.80316,-0.79581,-0.7883,-0.7807,-0.77298,-0.76514,-0.75717,-0.74908,-0.74091,-0.7326,-0.72421,-0.7157,-0.70706,-0.69833,-0.68951,-0.68057,-0.67151,-0.66238,-0.65314,-0.6438,-0.63437,-0.62482,-0.6152,-0.60547,-0.59567,-0.58575,-0.57578,-0.5657,-0.55554,-0.54529,-0.53497,-0.52457,-0.51407,-0.50351,-0.49286,-0.48215,-0.47137,-0.46051,-0.44958,-0.4386,-0.42752,-0.41641,-0.40521,-0.39395,-0.38266,-0.37128,-0.35986,-0.34839,-0.33685,-0.32529,-0.31366,-0.30197,-0.29025,-0.2785,-0.26669,-0.25485,-0.24295,-0.23105,-0.21909,-0.20709,-0.19507,-0.18301,-0.17093,-0.15884,-0.1467,-0.13455,-0.12241,-0.1102,-0.097992,-0.085785,-0.073547,-0.06131,-0.049042,-0.036804,-0.024536,-0.012268,0,0.012268
};



//--------------------------------------------------------------
void ofApp::setup(){
    

#ifdef DEBUG
    
#else
    ofSetDataPathRoot("../Resources/data");
#endif
    
    
    ofEnableAlphaBlending();
    ofSetupScreen();
    ofSetFrameRate(60);
    
    ofBackground(0);
    
    ofDisableArbTex(); // we need GL_TEXTURE_2D for our models coords.
    
    ofEnablePointSprites();
    
    ofEnableDepthTest();
    
    faceImg.load("domFace01.jpg");
    
    figureModel.loadModel("mesh01/mesh01.obj", true);
//    figureModel.setPosition(ofGetWidth() * 0.5, (float)ofGetHeight() * 0.75 , 0);
    figureModel.setScaleNormalization(false);
    figureModel.enableColors();
    
//    cout << figureModel.getMeshCount() << endl;
    
    mainMesh.setMode(OF_PRIMITIVE_POINTS);
    mainMesh.enableColors();
    mainMesh.enableIndices();
    
    vector<ofMesh> _mesh;
    _mesh.resize(figureModel.getMeshCount());

    for (int i=0; i<_mesh.size(); i++) {
        _mesh[i].setMode(OF_PRIMITIVE_POINTS);
        _mesh[i] = figureModel.getMesh(i);
        _mesh[i].enableColors();
        _mesh[i].enableIndices();

        
        numPoint = _mesh[i].getNumVertices();
        for (int n=0; n<numPoint; n++) {
            mainMesh.addVertex(_mesh[i].getVertex(n));
            mainMesh.addColor(ofColor(255, 170));
        }

    }
    

    ofVec3f _centerMesh = mainMesh.getCentroid() + ofVec3f(0, 1.5, 3);
    for (int i=0; i<mainMesh.getNumVertices(); i++) {
        mainMesh.setVertex(i, mainMesh.getVertex(i));
    }
    
    
    modelIndex = 0;
    
    //    glEnable(GL_POINT_SMOOTH);
    //    glPointSize(1);
    
    
    cam.setAutoDistance(false);
    cam.setDistance(10);
    cam.setFarClip(0);
    //    cam.setPosition(-10, -17, 20);
    //    cam.setOrientation(ofVec3f(75,-88,0));
    
    
    captureW = ofGetWidth();
    captureH = BIT;
    
    line = 0;
    
    for (int i=0; i<514; i++) {
        sineBuffer[i] = sines[i];
    }
    
    for (int i=0; i<INITIAL_BUFFER_SIZE ; i++) {
        outp[i] = 0;
    }
    
    for (int i=0; i<BIT ; i++) {
        amp[i] = 0;
        hertzScale[i] = 0;
        phases[i] = 0;
    }
    
    
    
    
    maxHertz = 6000;
    spectrum = new SpectrumDrawer( 1, maxHertz );
    //    spectrum->loadImageSpectrum("model4_downup_contrast.jpg");
    
    playerHead = new PlayerHead();
    
//    cout << soundStream.getDeviceList() << endl;
  
//    int samplerate = 44100;
//    int buffersize = 1024;
    
    ofxAUPlugin::init(SAMPLE_RATE, INITIAL_BUFFER_SIZE);
    reverb.loadPlugin("Apple: AUMatrixReverb");
    reverb.listParamInfo();
    reverb.listParamInfo();
    reverb.setParam("Large Delay", 0.1);
    reverb.setParam("Large Size", 0.1);
    reverb.setParam("Modulation Depth", 0.0);
    reverb.setParam("Modulation Rate", 0.001);

    
//#0: Dry/Wet Mix [0 ~ 100]
//#15: Filter Bandwidth [0.05 ~ 4]
//#14: Filter Frequency [10 ~ 22050]
//#16: Filter Gain [-18 ~ 18]
//#5: Large Delay [0.001 ~ 0.1]
//#8: Large Delay Range [0 ~ 1]
//#7: Large Density [0 ~ 1]
//#10: Large HiFreq Absorption [0.1 ~ 1]
//#3: Large Size [0.005 ~ 0.15]
//#13: Modulation Depth [0 ~ 1]
//#12: Modulation Rate [0.001 ~ 2]
//#4: Pre-Delay [0.001 ~ 0.03]
//#11: Small Delay Range [0 ~ 1]
//#6: Small Density [0 ~ 1]
//#9: Small HiFreq Absorption [0.1 ~ 1]
//#2: Small Size [0.0001 ~ 0.05]
//#1: Small/Large Mix [0 ~ 100]
    
    
//    soundStream.setDeviceID(1);
//    soundStream.setup(this, 2, 0, SAMPLE_RATE, INITIAL_BUFFER_SIZE, 4 );
    ofSoundStreamSetup(2, 0, this, SAMPLE_RATE, INITIAL_BUFFER_SIZE, 4);
    
    

    imageFormat.addListener(this, &ofApp::imageFormatButtonClick);
    
    gui.setup();
    gui.setPosition( ofGetWidth() - 230, 10 );
    gui.add(frameRate.setup("FrameRate", " "));
    gui.add(modelSelect.setup("Model Select"));
    gui.add(speed.setup("speed", 1.0, 0.0, 10.0) );
    gui.add(openf.setup( "Open Picture", false) );
    gui.add(maxHz.setup( "Spectrum Max HZ", 5000, 300.0, 8000.0) );
    gui.add(minHz.setup( "Spectrum Min HZ", 50, 1.0, 200.0) );
    gui.add(lineSize.setup( "LINE", 5.0, 0.0, 20.0) );
    gui.add(reset.setup("Reset!", ""));
    gui.add(imageFormat.setup("Image Format Quad/Land", true) );
    gui.add(returnZero.setup("Return Zero"));
    gui.add(pointView.setup("Point Cloud", true));
    gui.add(maxZDepth.setup( "Max zDepth", 1.0, 0.0, 10.0) );
    gui.add(minZDepth.setup( "Min zDepth", 0.0, -10.0, 10.0) );
    gui.add(zDepthShape.setup("zDepth Shape", false));
    gui.add(brightness.setup("PointBright", 120, 0, 255));
    gui.add(imageProcessView.setup("ImageProcess", false));
    gui.add(errorMath.setup("error", true));
    gui.add(errorLength.setup("ErrorLength", 20, 2, 50));
    gui.add(fadeLength.setup("FadeLength", 1, 0, 1));
    gui.add(volume.setup("Volume", 10, 0, 20));
    
    
    errorLength.addListener(this, &ofApp::errorLengthChanged);
    
    
    texScreen.allocate(captureW, captureH, GL_RGB);
    captureImage.allocate(captureW, captureH, OF_IMAGE_COLOR);
    texProcessScreen.allocate(captureW, captureH, GL_RGB);
    captureProcessImage.allocate(captureW, captureH, OF_IMAGE_COLOR);
    
    originalFbo.allocate(captureW, captureH, GL_RGB);
    processingImagFbo.allocate(captureW, captureH, GL_RGB);
    
    bImageCapture = true;
    
    //    camInterface.setAutoDistance(false);
    //    camInterface.setDistance(-1000);
    //    camInterface.move(-500, 0, 1000);
    
    bGuiView = true;
    imageProcessCapture = false;
    bImageProcess = false;
    
    bImageProcessView = false;
    
}




//--------------------------------------------------------------
void ofApp::errorLengthChanged(int & _m){
    
    imageCapture();
    
}




//--------------------------------------------------------------
void ofApp::imageFormatButtonClick(bool & _b){
    
    //    captureImage.clear();
    //    texScreen.clear();
    //    texScreen.allocate(captureW, captureH, GL_RGB);
    //    captureImage.allocate(captureW, captureH, OF_IMAGE_COLOR);
    //    captureRect.set( 10, ofGetHeight()-512-10, captureW, captureH );
    
}



//--------------------------------------------------------------
void ofApp::captureFunction(){
    
}



//--------------------------------------------------------------
void ofApp::update(){
    
    //    texScreen.loadScreenData( ofGetHeight()-BIT-10, 10, captureW, captureH);
    
    
    modelPosition();
    
    
    spectrum->speed = speed;
    spectrum->maxHz = maxHz;
    spectrum->minHz = minHz;
    line = lineSize;
    
    
    if(openf) {
        openFile();
    }
    
    
    if(reset){
        spectrum->speed = 3;
        spectrum->maxHz = maxHertz;
        spectrum->minHz = 1;
        reset=false;
    }
    
    
    if (spectrum->playing) {
        playerHead->x1 += speed;
        playerHead->x2 += speed;
        
        if (playerHead->x1>ofGetWidth()){
            playerHead->x1 = 0;
            playerHead->x2 = 0;
        }
    }
    
    
    if (returnZero) {
        playerHead->x1 = 0;
        playerHead->x2 = 0;
    }
    
    
    frameRate = ofToString(ofGetFrameRate(),1);
    
    
    // FBO
    originalFbo.begin();
    cam.begin();
    
//    ofRotateY(90);
    ofClear(0,0);
    
//    light.enable();
    
    ofEnableSeparateSpecularLight();
    ofPushStyle();
    ofSetColor(255,100);
//    figureModel.drawFaces();
//    ofSetColor(255,255);
//    figureModel.drawWireframe();
//    figureModel.drawVertices();
    ofPopStyle();
    ofPopMatrix();

    
    ofRotateZ(180);
    ofPushStyle();
    mainMesh.drawWireframe();
//    mainMesh.drawVertices();
    ofPopStyle();
    
    cam.end();
    originalFbo.end();
    
    
    
    if (imageProcessView && !bImageProcessView) {
        processingImagFbo.begin();
        ofClear(0, 0);
        ofSetColor(255);
        processingImage();
        processingImagFbo.end();
        bImageProcessView = true;
    } else if (imageProcessView != false) {
        bImageProcessView = false;
    }
    
    
    if(imageProcessView && bImageProcess) {
        bImageProcess = false;
        imageCapture();
    }
    
    if (!imageProcessView && !bImageProcess) {
        bImageProcess = true;
        imageCapture();
    }
    
    
    
    //    if (imageProcessView) {
    //        ofSetColor(255);
    //        processingImage();
    //        //        captureProcessImage.draw( 0, 0, captureW, captureH );
    //    } else {
    //
    //        bufferFbo = originalFbo;
    //    }
    
    
}






//--------------------------------------------------------------
void ofApp::draw(){
    
    //    ofEnableDepthTest();
    //    ofEnablePointSprites();
    
    //    cam.begin();
    //
    //    ofPushMatrix();
    //    if (pointView) pointDraw();
    //    ofPopMatrix();
    //
    //
    ////    ofPushMatrix();
    ////    if (zDepthShape) zDepthShapeDraw();
    ////    ofPopMatrix();
    //
    //    cam.end();
    
    
    
    ofPushMatrix();
    
    spectrum->update();
    
    if (imageProcessView) {
        processingImagFbo.draw(0, 0);
    } else {
        originalFbo.draw(0, 0);
    }
    
    //    if (imageProcessView) {
    //        processingImage();
    //    }
    
    //    captureProcessImage.draw( 0, 0, captureW, captureH );
    
    
    playerHead->drawPlayHead();
    
    ofPopMatrix();
    
    
    
    drawVolumeLevel();
    
    
    if (bGuiView) {
        ofDisablePointSprites();
        ofDisableDepthTest();
        gui.draw();
    }
    
    
    //    edgeDraw();
    
    
    if(bImageCapture) {
        bImageCapture = false;
        imageCapture();
    }
    
    
    interfaceView();
    
    if (!spectrum->playing) {
    }
    
    
    if (modelSelect) {
        imageCapture();
    }
    
    
}



//--------------------------------------------------------------
void ofApp::drawVolumeLevel(){
    
    ofPushMatrix();
    ofTranslate(playerHead->x1, -10);
    
    ofPushStyle();
    ofSetColor(255, 255, 255, 100);
    
    if ( spectrum->playing ) {
        vector< pair <float, float> > points = playerHead -> getPoints(BIT);
        for(int n = 0; n < BIT; n++){
            amp[n] = (amp[n]*line + spectrum -> getAmp(points[n].first, points[n].second))/(line+1);
            hertzScale[n] = int(spectrum -> getFreq(points[n].second));
            
            //            float a = (outp[n]-outp[n+1]);
            //            if (a > .5 or a < - .5) {
            //                ofSetColor(255, 0, 0,255);
            //            }else {
            //                ofSetColor(255, 255, 255,255);
            //            }
            //                        if (n<INITIAL_BUFFER_SIZE) {
            //                            ofLine(n*2,outp[n]*10.0 + 20 + 532 ,n*2+2,outp[n+1]*10.0 + 20 + 532);
            //                        }
            //            ofRect(n*1,0 + 532, 1, amp[n]*10.0);
            
//            ofDrawRectangle( 0, n * 1, amp[n] * 100.0, 1 );
//            ofDrawRectangle( 0, n * 1, amp[n] * 100.0, 1 );
            
            float _levelSize = 120;
            ofDrawLine( 0, n * 1, amp[n] * _levelSize, n * 1 );
            ofDrawLine( 0, n * 1, -amp[n] * _levelSize, n * 1 );
            
        }
    }
    
    ofPopStyle();
    
    ofPopMatrix();
    
}


//--------------------------------------------------------------
void ofApp::processingImage(){
    
    //            captureImage.clear();
    //            texScreen.clear();
    ofPushMatrix();
    ofPushStyle();
    
    //            texProcessScreen.loadScreenData( 10, ofGetHeight() * 0.5 - 10, captureW, captureH );
    //            captureProcessImage.mirror(true, false);
    //            //        captureProcessRect.set( 10, ofGetHeight()-512-10, captureW, captureH );
    
    ofPixels _pProcess;
    _pProcess.setImageType(OF_IMAGE_COLOR_ALPHA);
    
    //            texProcessScreen.readToPixels(_pProcess);
    
    originalFbo.readToPixels(_pProcess);
    
    
    int _r;
    int _g;
    int _b;
    
    unsigned char * _rawPixels = _pProcess.getData();
    
    
    int _length = errorLength;
    for (int j=0; j<captureH; j++) {
        for (int i=0; i<captureW-_length; i+=_length) {
            int _index = i + j * (captureW);
            
            _r = _rawPixels[_index*3];
            _g = _rawPixels[_index*3+ 1];
            _b = _rawPixels[_index*3+ 2];
            int _sumColor = _r + _g + _b;
            
            for (int k=0; k<_length; k++) {
                _pProcess.setColor(i+k, j, ofColor( ((_sumColor)/3.0/85.0)*brightness*(ofMap(k,0,_length,1,fadeLength)) ) );
            }
        }
    }
    
    
    for (int j=0; j<captureH; j++) {
        for (int i=captureW-_length; i<captureW; i++) {
            _pProcess.setColor(i, j, ofColor(0) );
        }
    }
    
    
    //        _pProcess.mirror(true, false);
    
    captureProcessImage.setFromPixels(_pProcess.getData(), _pProcess.getWidth(), _pProcess.getHeight(), OF_IMAGE_COLOR);
    
    float _size = 1;
    captureProcessImage.draw( 0, 0, captureW*_size, captureH*_size );
    
    //        faceImg.draw( ofGetWidth()-faceImg.getWidth()*0.25, captureH*_size, faceImg.getWidth()*0.25, faceImg.getHeight()*0.25 );
    
    ofPopStyle();
    ofPopMatrix();
    
}



//--------------------------------------------------------------
void ofApp::pointDraw(){
    
    //    ofPushMatrix();
    //    ofPushStyle();
    //
    //    glPointSize(1);
    //
    //    ofSetColor(255);
    //    mesh.drawVertices();
    //
    //    ofPopStyle();
    //    ofPopMatrix();
    
}



//--------------------------------------------------------------
void ofApp::zDepthShapeDraw(){
    
    ofPushMatrix();
    
    ofPushStyle();
    
//    for (int i=0; i<mesh.getNumVertices(); i++) {
//        float _z = mesh.getVertex(i).z;
//        ofSetColor(255, 30);
//        if ((_z>minZDepth)&&(_z<maxZDepth)) {
//            ofDrawCircle(mesh.getVertex(i).x, mesh.getVertex(i).y, mesh.getVertex(i).z, mesh.getVertex(i).z*0.05);
//        }
//    }
    
    ofPopStyle();
    
    ofPopMatrix();
    
}


//--------------------------------------------------------------
void ofApp::edgeDraw(){
    
    //    ofPushStyle();
    //
    //    ofSetColor( 255, 0, 0 );
    //    ofDrawRectangle(0, 0, ofGetWidth(), 10);
    //    ofDrawRectangle(0, BIT, ofGetWidth(), 76);
    //    ofDrawRectangle(0, ofGetHeight()-10, ofGetWidth(), 10);
    //    ofDrawRectangle(0, 0, 10, ofGetHeight());
    //    ofDrawRectangle(ofGetWidth()-10, 0, 10, ofGetHeight());
    //
    //    ofPopStyle();
    
}



//--------------------------------------------------------------
void ofApp::interfaceView(){
    
    interfaceBackgroundW = ofGetWidth()-20;
    interfaceBackgroundH = ofGetHeight()-BIT*2-20;
    interfaceBackgroundTop = BIT+20;
    interfaceBackgroundLeft = 10;
    
    //    ofBoxPrimitive _box;
    //    _box.set(70, 70, 70);
    //    camInterface.begin();
    //
    //    _box.drawWireframe();
    //
    //    camInterface.end();
    
}



//--------------------------------------------------------------
void ofApp::imageCapture(){
    
    //    captureImage.clear();
    //    texScreen.clear();
    //    texScreen.allocate(captureW, captureH, GL_RGB);
    //    captureImage.allocate(captureW, captureH, OF_IMAGE_COLOR);
    
    //    texScreen.loadScreenData( 10, ofGetHeight()-512-10, captureW, captureH );
    //    captureImage.mirror(true, false);
    //    captureRect.set( 10, ofGetHeight()-512-10, captureW, captureH );
    
    ofPixels _p;
    //    texScreen.readToPixels(_p);
    
    if (imageProcessView) {
        processingImagFbo.readToPixels(_p);
    } else {
        originalFbo.readToPixels(_p);
    }
    
    //    _p.mirror(true, false);
    captureImage.setFromPixels(_p.getData(), _p.getWidth(), _p.getHeight(), OF_IMAGE_COLOR);
    
    spectrum->loadImageSpectrum(captureImage);
    
}


//--------------------------------------------------------------
void ofApp::audioRequested 	(float * output, int bufferSize, int nChannels){
    
    if(spectrum->playing){
        
//        float *ptr = output;

        for (int i = 0; i < bufferSize; i++){
            
            wave = 0.0;
            
            for(int n = 0;n<BIT;n++){
                
                if (amp[n]>0.00001) {
                    phases[n] += 512./(44100.0/(hertzScale[n]));
                    
                    if ( phases[n] >= 511 ) phases[n] -=512;
                    if ( phases[n] < 0 ) phases[n] = 0;
                    
                    //remainder = phases[n] - floor(phases[n]);
                    //wave+=(float) ((1-remainder) * sineBuffer[1+ (long) phases[n]] + remainder * sineBuffer[2+(long) phases[n]])*amp[n];
                    
                    wave += ( sineBuffer[1 + (long) phases[n]] ) * amp[n];
                }
            }
            
            wave/=10.0;
            if(wave>1.0) wave=1.0;
            if(wave<-1.0) wave=-1.0;
            
            output[i*nChannels    ] = wave * volume;
            output[i*nChannels + 1] = wave * volume;
//            outp[i] = wave;

//            *ptr++ = wave * volume;

        }

//        reverb.process(output, output);

    } else {
//        for (int i = 0; i < bufferSize; i++){
//            output[i*nChannels    ] = 0;
//            output[i*nChannels + 1] = 0;
//            outp[i] = 0;
//        }
    }
    

    
}

//--------------------------------------------------------------
void ofApp::audioReceived(float * input, int bufferSize, int nChannels){
    
}


//--------------------------------------------------------------
void ofApp::openFile(string URL){
    
    string _output;
    spectrum->pause();
    if(URL==""){
        ofFileDialogResult result = ofSystemLoadDialog("Open File", false, "");
        
        if(result.bSuccess){
            URL = result.filePath;
            _output = "URL to open: \n "+URL;
            string extension;
            for(int i = URL.length()-3; i < URL.length(); i++){
                extension+=URL[i];
            }
            spectrum->loadImageSpectrum(URL);
        }else {
            _output = "OPEN canceled. ";
        }
    }
    
}


//--------------------------------------------------------------
void ofApp::loadCapture(ofImage _img){
    
    spectrum->pause();
    
    spectrum->loadImageSpectrum(_img);
    
}



//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if (key==' '){
        if (spectrum->playing) {
            spectrum->pause();
//            ofSoundStreamStop();
            cout << "stop";
        } else {
            spectrum->play();
//            ofSoundStreamStart();
            cout << "play";
        }
    } else if (key=='g') {
        bGuiView = !bGuiView;
    }
    
}


//--------------------------------------------------------------
void ofApp::guiSetting(){
    
}

//--------------------------------------------------------------
void ofApp::close() {
    
    figureModel.clear();
    mainMesh.clear();
    spectrum->pause();
    spectrum->stop();
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
    if (key=='c'){
        imageCapture();
    } else if (key=='p') {
        spectrum->loadImageSpectrum(captureProcessImage);
    } else if (key == ' ') {
        imageCapture();
    }
    
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
    playerHead->mouseMoved(x,y);
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    playerHead->mouseDragged(x,y,button);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    playerHead->mousePressed(x,y,button);
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    playerHead->mouseReleased(x,y,button);
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo info) {
    
}


//--------------------------------------------------------------
void ofApp::modelPosition(){
    
    if (modelSelect) {
        
        spectrum->stop();
        
        modelIndex++;
        modelIndex = modelIndex%13;
        
        mainMesh.clear();
        
        switch ( modelIndex ) {
            case 0:
                figureModel.loadModel("domFace01.obj");
                faceImg.load("domFace01.jpg");
                cam.setDistance(30);
                cam.setPosition(-11, -19, 21);
                cam.setOrientation(ofVec3f(74,-87,3));
                break;
            case 1:
                figureModel.loadModel("domFace02.obj");
                faceImg.load("domFace02.jpg");
                cam.setDistance(25);
                cam.setPosition(-12, -15, 15);
                cam.setOrientation(ofVec3f(69,-88,0));
                break;
            case 2:
                figureModel.loadModel("domFace03.obj");
                faceImg.load("domFace03.jpg");
                cam.setDistance(28);
                cam.setPosition(-10, -21, 16);
                cam.setOrientation(ofVec3f(75,-88,0));
                break;
            case 3:
                figureModel.loadModel("domFace04.obj");
                faceImg.load("domFace04.jpg");
                cam.setDistance(31);
                cam.setPosition(-13, -22, 17);
                cam.setOrientation(ofVec3f(75,-88,0));
                break;
            case 4:
                figureModel.loadModel("domFace05.obj");
                faceImg.load("domFace05.jpg");
                cam.setDistance(28);
                cam.setPosition(-16, 23, -4);
                cam.setOrientation(ofVec3f(-107,85,-5));
                break;
            case 5:
                figureModel.loadModel("domFace06.obj");
                faceImg.load("domFace06.jpg");
                cam.setDistance(31);
                cam.setPosition(-19, -19, 15);
                cam.setOrientation(ofVec3f(62,-87,0));
                break;
            case 6:
                figureModel.loadModel("domFace07.obj");
                faceImg.load("domFace07.jpg");
                cam.setDistance(31);
                cam.setPosition(-19,-20, 13);
                cam.setOrientation(ofVec3f(60,-91,-4));
                break;
            case 7:
                figureModel.loadModel("domFace08.obj");
                faceImg.load("domFace08.jpg");
                cam.setDistance(31);
                cam.setPosition(-18,-21, 15);
                cam.setOrientation(ofVec3f(65,-91,-4));
                break;
            case 8:
                figureModel.loadModel("domFace09.obj");
                faceImg.load("domFace09.jpg");
                cam.setDistance(31);
                cam.setPosition(-16,-22, 13);
                cam.setOrientation(ofVec3f(70,-89,0));
                break;
            case 9:
                figureModel.loadModel("domFace10.obj");
                faceImg.load("domFace10.jpg");
                cam.setDistance(27);
                cam.setPosition(-9,25, 1);
                cam.setOrientation(ofVec3f(-92,97,4));
                break;
            case 10:
                figureModel.loadModel("domFace11.obj");
                faceImg.load("domFace11.jpg");
                cam.setDistance(31);
                cam.setPosition(-15,-18, 21);
                cam.setOrientation(ofVec3f(60,-79,3));
                break;
            case 11:
                figureModel.loadModel("domFace12.obj");
                faceImg.load("domFace12.jpg");
                cam.setDistance(31);
                cam.setPosition(-24,-11, 16);
                cam.setOrientation(ofVec3f(41,-90,0));
                break;
            case 12:
                figureModel.loadModel("domFace13.obj");
                faceImg.load("domFace13.jpg");
                cam.setDistance(31);
                cam.setPosition(-17,-21, 16);
                cam.setOrientation(ofVec3f(67,-90,0));
                break;
                
            default:
                break;
        }
        
        vector<ofMesh> _mesh;
        for (int i=0; i<_mesh.size(); i++) {
            _mesh[i] = figureModel.getMesh(i);
            
            numPoint = _mesh[i].getNumVertices();
            
            for (int i=0; i<numPoint; i++) {
                mainMesh.addVertex(_mesh[i].getVertex(i));
                mainMesh.addColor(ofColor(255));
            }
        }
        //                imageCapture();
        
    }
    
    
}



