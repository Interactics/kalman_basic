#include <iostream>

// AverageFilter function
double AverageFilter(const double &data) {
    static double avg = 0;
    static int k = 1;

    // firstRun
    if(k == 1) {
        ++k;
        avg = data;
        return avg;
    }

    double alpha = static_cast<double>(k - 1) / k ;
    avg = alpha * avg + (1 - alpha) * data;
    k++;

    return avg;
}



int main (int argc, char** argv){
    while(true) {
        double data;
        std::cin >> data ;
        std::cout << AverageFilter(data) << std::endl;
    }
    return 0;
}