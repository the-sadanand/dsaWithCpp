#include <iostream>
#include <chrono>
#include <thread>

void loadingAnimation() {
    const char spinner[] = {'\\', '|', '/', '-'};
    int spinnerIndex = 0;

    while (true) {
        // Print "Loading..." with a spinner
        std::cout << "\rLoading... " << spinner[spinnerIndex] << std::flush;

        // Move to the next spinner character
        spinnerIndex = (spinnerIndex + 1) % 4;

        // Sleep for 200 milliseconds
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    }
}

int main() {
    loadingAnimation();
    return 0;
}
