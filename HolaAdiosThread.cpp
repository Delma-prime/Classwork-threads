#include <iostream>
#include <thread>
#include <chrono>
#include <windows.h>
#include <processthreadsapi.h>

// Función que imprime "Hola" infinitamente
void decirHola() {
    printf("Thread Hola - Thread ID: %d\n", GetCurrentThreadId());
    while (true) {
        std::cout << "Hola" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

// Función que imprime "Adios" infinitamente
void decirAdios() {
    printf("Thread Adios - Thread ID: %d\n", GetCurrentThreadId());
    while (true) {
        std::cout << "Adios" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

int main() {
    
    printf("Main Process ID: %d\n", GetCurrentProcessId());
    printf("Main Thread ID: %d\n", GetCurrentThreadId());

    std::thread threadHola(decirHola);
    std::thread threadAdios(decirAdios);

    while (true) { 
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    
}
