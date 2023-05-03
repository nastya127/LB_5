#include "Signal.hpp"

Signal::Signal(double duration, double sampling_rate, double* data, int data_size)
    : duration(duration), sampling_rate(sampling_rate), data_size(data_size), data(new double[data_size]) {
    for (int i = 0; i < data_size; i++) {
        this->data[i] = data[i];
    }
}

Signal::Signal(const Signal& other)
    : duration(other.duration), sampling_rate(other.sampling_rate), data_size(other.data_size),
    data(new double[data_size]) {
    for (int i = 0; i < data_size; i++) {
        data[i] = other.data[i];
    }
}

Signal::Signal() {
    data_size = rand() % 20 + 1;
    data = new double[data_size];
    for (int i = 0; i < data_size; i++) {
        data[i] = rand() % 10;
    }
    duration = rand() % 20;
    sampling_rate = rand() % 144;

}

ostream& operator<<(ostream& os, const Signal& signal) {
    os << "Duration: " << signal.duration << " s" << endl
        << "Sampling rate: " << signal.sampling_rate << " Hz" << endl
        << "Data: [";
    for (int i = 0; i < signal.data_size; i++) {
        os << signal.data[i] << " ";
    }
    os << "]" << endl;
    return os;
}

istream& operator>>(istream& is, Signal& signal) {
    is >> signal.duration >> signal.sampling_rate >> signal.data_size;
    signal.data = new double[signal.data_size];
    for (int i = 0; i < signal.data_size; i++) {
        is >> signal.data[i];
    }
    return is;
}
