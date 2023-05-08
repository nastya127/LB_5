#include "ProcessingResult.hpp"

using namespace std;

ProcessingResult::ProcessingResult(double processing_time, double* processed_data, int processed_data_size)
        : processing_time(processing_time), processed_data_size(processed_data_size),
        processed_data(new double[processed_data_size]) {
        for (int i = 0; i < processed_data_size; i++) {
            this->processed_data[i] = processed_data[i];
        }
    }

ProcessingResult::ProcessingResult(const ProcessingResult& other)
        : processing_time(other.processing_time), processed_data_size(other.processed_data_size),
        processed_data(new double[processed_data_size]) {
        for (int i = 0; i < processed_data_size; i++) {
            processed_data[i] = other.processed_data[i];
        }
    }

ProcessingResult::ProcessingResult() {
        this->processed_data_size = rand() % 20 + 1;
        processed_data = new double[processed_data_size];
        for (int i = 0; i < processed_data_size; i++) {
            this->processed_data[i] = rand() % 10;
        }
        this->processing_time  = rand() % 5;

    }

ProcessingResult::~ProcessingResult() {
        delete[] processed_data;
    }

Data* ProcessingResutl::clone() const {
        return new ProcessingResult(*this);
    }

ostream& ProcessingResult::operator<<(ostream& os, const ProcessingResult& result) {
        os << "Processing time: " << result.processing_time << " ms" << endl
            << "Processed data: [";
        for (int i = 0; i < result.processed_data_size; i++) {
            os << result.processed_data[i] << " ";
        }
        os << "]" << endl;

        return os;
    }

istream& ProcessingResult::operator>>(istream& is, ProcessingResult& result) {
        is >> result.processing_time >> result.processed_data_size;
        result.processed_data = new double[result.processed_data_size];
        for (int i = 0; i < result.processed_data_size; i++) {
            is >> result.processed_data[i];
        }
        return is;
    }
