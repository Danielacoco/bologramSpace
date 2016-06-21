/*Calibration Block in charge of managing all calibration classes required:
display, fastrack, polhemus. connection with Spheree class to notify that
calibration has been successful*/
/*
MAKE CALIBRATION ITS OWN SEPARATE PROJECT AS WE MIGHT HAVE MEMORY ISSUES? -DISCUSSED WITH QIAN ON MONDAY*/
#ifndef _CALIBRATIONBLOCK_H_
#define _CALIBRATIONBLOCK_H_
class CalibrationBlock {
public:
    CalibrationBlock();
    ~CalibrationBlock();
    void CalibrateSpheree();
    
private:
protected:

};
#endif