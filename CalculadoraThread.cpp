#include <iostream>
#include <thread>
#include <chrono>
#include <windows.h>
#include <processthreadsapi.h>

// Función que suma dos números ingresados
void calculador() {
    printf("Calculadora Process ID: %d\n", GetCurrentProcessId());
    printf("Calculadora Thread ID: %d\n", GetCurrentThreadId());

    double num1, num2;

    std::cout << "Ingresa el primer numero: ";
    std::cin >> num1;
    std::cout << "Ingresa el segundo numero: ";
    std::cin >> num2;

    double result = num1 + num2;
    std::cout << "Resultado: " << result << std::endl;
}

int main() {
    
    printf("Main Process ID: %d\n", GetCurrentProcessId());
    printf("Main Thread ID: %d\n", GetCurrentThreadId());

    std::thread calculatorThread(calculador);

    while (true) { 
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    
}
