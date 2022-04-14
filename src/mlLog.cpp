#include "mlLog.h"

mlLog* mlLog::instance = nullptr;

mlLog* mlLog::Instance(){
    if(!instance){
        instance = new mlLog();
    }

    return instance;
}

mlLog::mlLog(){
    m_logLevel = mlLogLevelInfo;
}

mlLog::~mlLog(){

}

void mlLog::SetLevel(LogLevel level){
    m_logLevel = level;
}

void mlLog::Error(const char* message){
    if(m_logLevel >= mlLogLevelError){
        std::cout << "\u001b[31m[ERROR]: " << message << "\u001b[0m" << std::endl;
    }
}

void mlLog::Warn(const char* message){
    if(m_logLevel >= mlLogLevelWarning){
        std::cout << "\u001b[33m[WARNING]: " << message << "\u001b[0m" << std::endl;
    }
}

void mlLog::Info(const char* message){
    if(m_logLevel >= mlLogLevelInfo){
        std::cout << "\u001b[32m[INFO]: " << message << "\u001b[0m" << std::endl;
    }
}