#include "mlCommon.h"

int main(int argc, char* argv[]){
    
    std::cout << "\nStarting\n";

    mlLog::Instance()->Info("This is a debug trace");
    mlLog::Instance()->Warn("This is a warning");
    mlLog::Instance()->Error("This is an error");
    std::cout << "Quitting now!\n\n";

    return 0;
}