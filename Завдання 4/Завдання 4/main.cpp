#include "iostream"
#include "ctime"
#include "Data.hpp"

using namespace std;

class ProcessingResult : public Data {
public:
    ProcessingResult(double processing_time, double* processed_data, int processed_data_size)
        : processing_time(processing_time), processed_data_size(processed_data_size),
        processed_data(new double[processed_data_size]) {
        for (int i = 0; i < processed_data_size; i++) {
            this->processed_data[i] = processed_data[i];
        }
    }

    ProcessingResult(const ProcessingResult& other)
        : processing_time(other.processing_time), processed_data_size(other.processed_data_size),
        processed_data(new double[processed_data_size]) {
        for (int i = 0; i < processed_data_size; i++) {
            processed_data[i] = other.processed_data[i];
        }
    }

    ProcessingResult() {
        this->processed_data_size = rand() % 20 + 1;
        processed_data = new double[processed_data_size];
        for (int i = 0; i < processed_data_size; i++) {
            this->processed_data[i] = rand() % 10;
        }
        this->processing_time  = rand() % 5;

    }

    virtual ~ProcessingResult() {
        delete[] processed_data;
    }

    virtual Data* clone() const {
        return new ProcessingResult(*this);
    }

    friend ostream& operator<<(ostream& os, const ProcessingResult& result) {
        os << "Processing time: " << result.processing_time << " ms" << endl
            << "Processed data: [";
        for (int i = 0; i < result.processed_data_size; i++) {
            os << result.processed_data[i] << " ";
        }
        os << "]" << endl;

        return os;
    }

    friend istream& operator>>(istream& is, ProcessingResult& result) {
        is >> result.processing_time >> result.processed_data_size;
        result.processed_data = new double[result.processed_data_size];
        for (int i = 0; i < result.processed_data_size; i++) {
            is >> result.processed_data[i];
        }
        return is;
    }

protected:
    double processing_time;
    int processed_data_size;
    double* processed_data;
};
class SignalProcessingData : public Data {
public:
    SignalProcessingData(const Signal& signal, const ProcessingResult& result)
        : signal(new Signal(signal)), result(new ProcessingResult(result)) {}

    SignalProcessingData(const SignalProcessingData& other)
        : signal(new Signal(*other.signal)), result(new ProcessingResult(*other.result)) {}

    virtual ~SignalProcessingData() {
        delete signal;
        delete result;
    }

    virtual Data* clone() const {
        return new SignalProcessingData(*this);
    }

    friend ostream& operator<<(ostream& os, const SignalProcessingData& data) {
        os << "Signal: " << endl << *data.signal
            << "Processing result: " << endl << *data.result;
        return os;
    }

    friend istream& operator>>(istream& is, SignalProcessingData& data) {
        Signal signal;
        ProcessingResult result;
        is >> signal >> result;
        data.signal = new Signal(signal);
        data.result = new ProcessingResult(result);
        return is;
    }

protected:
    Signal* signal;
    ProcessingResult* result;
};

int main() {
    srand(time(NULL));

    double signal_data[] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
    Signal signal;
    cout << signal << endl;

    double processed_data[] = { 1.5, 2.5, 3.5, 4.5, 5.5 };
    ProcessingResult result;
    cout << result << endl;

    SignalProcessingData data(signal, result);
    cout << data << endl;

    return 0;
}
