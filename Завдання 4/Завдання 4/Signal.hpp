#ifndef Signal_hpp
#define Signal_hpp

#include "iostream"
#include "Data.hpp"

class Signal : public Data {
public:
    Signal(double duration, double sampling_rate, double* data, int data_size);
    Signal(const Signal& other);
    Signal();
    virtual ~Signal() {
        delete[] data;
    }
    virtual Data* clone() const {
        return new Signal(*this);
    }
    friend ostream& operator<<(ostream& os, const Signal& signal);
    friend istream& operator>>(istream& is, Signal& signal);

protected:
    double duration;
    double sampling_rate;
    int data_size;
    double* data;
};

#endif
