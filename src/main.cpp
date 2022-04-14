#include "mlCommon.h"

int main(int argc, char* argv[]){
    std::cout << "\u001b[1J";
    mlLog::Instance()->Info("Welcome to the program. I just started.\nWe'll begin by printing some messages to the log.\n");
    mlLog::Instance()->Error("This is an error message.");
    mlLog::Instance()->Warn("This is a warning");
    mlLog::Instance()->Info("This is some debug trace");

    std::cout << std::endl;

    return 0;
}