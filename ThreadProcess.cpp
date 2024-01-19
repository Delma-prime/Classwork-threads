#include <iostream>
#include <thread>
#include <chrono>
#include <windows.h>
#include <processthreadsapi.h>


void cpu_waster() {
    
    printf("CPU Waster Process ID: %d\n", GetCurrentProcessId());
    printf("CPU Waster Thread ID: %d\n", GetCurrentThreadId());
    while (true) continue;
}

int main() {
    printf("Main Process ID: %d\n", GetCurrentProcessId());
    printf("Main Thread ID: %d\n", GetCurrentThreadId());
    std::thread thread1(cpu_waster);
    std::thread thread2(cpu_waster);
    std::thread thread3(cpu_waster);
    std::thread thread4(cpu_waster);
    std::thread thread5(cpu_waster);
    std::thread thread6(cpu_waster);

    while (true) {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        }
}