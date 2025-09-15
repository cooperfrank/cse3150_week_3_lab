#include "logger.h"
#include <string>
#include <iostream>

// ======================= TODOs =======================

void addReading(const std::string& label, double value,
                std::string labels[], double values[],
                int& size, int capacity) {
    if (size == capacity) {
        throw std::string("Full");
    }

    labels[size] = label;
    values[size] = value;

    size++;
}

void updateValue(double* valuePtr, double newValue) {
    *valuePtr = newValue;
}

void printReading(const std::string& label, const double& value) {
    std::cout << label << ": " << value;
}

double average(const double values[], int size) {
    if (size == 0) {
        throw std::string("Empty");
    }

    // Compute average
    double total = 0.0;

    for (int i = 0; i < size; i++) {
        total += values[i];
    }

    return total / size;
}

double minValue(const double values[], int size) {
    if (size == 0) {
        throw std::string("Empty");
    }

    // Compute min
    double min_val = values[0];

    for (int i = 0; i < size; i++) {
        if (values[i] < min_val) {
            min_val = values[i];
        }
    }

    return min_val;
}

double maxValue(const double values[], int size) {
    if (size == 0) {
        throw std::string("Empty");
    }

    // Compute max
    double max_val = values[0];

    for (int i = 0; i < size; i++) {
        if (values[i] > max_val) {
            max_val = values[i];
        }
    }

    return max_val;
}
