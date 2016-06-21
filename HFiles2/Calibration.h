/*Calibration object will be passed when Projectors are initialize to load calibration infromation for each projector */


#ifndef _CALIBRATION_H_
#define _CALIBRATION_H_
class Calibration {
public:
    Calibration();
    ~Calibration();
    void loadData (int* array); //? or overlad >> operator so data is stored in the projectors data array.
};
#endif