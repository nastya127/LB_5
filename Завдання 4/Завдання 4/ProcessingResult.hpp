#ifndef ProcessingResult_hpp
#define ProcessingResult_hpp

#include "iostream"

using namespace std;

class ProcessingResult : public Data {
public:
    ProcessingResult(double processing_time, double* processed_data, int processed_data_size)
        : processing_time(processing_time), processed_data_size(processed_data_size),
        processed_data(new double[processed_data_size]);

    ProcessingResult(const ProcessingResult& other)
        : processing_time(other.processing_time), processed_data_size(other.processed_data_size),
        processed_data(new double[processed_data_size]);

    ProcessingResult();

    virtual ~ProcessingResult();

    virtual Data* clone() const;
    friend ostream& operator<<(ostream& os, const ProcessingResult& result);

    friend istream& operator>>(istream& is, ProcessingResult& result) ;

protected:
    double processing_time;
    int processed_data_size;
    double* processed_data;
};


#endif
