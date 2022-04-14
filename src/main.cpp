#include "mlCommon.h"

namespace ml{
class Log{
private:

    int m_logLevel;

public:
    
    enum{
        mlLogLevelError,
        mlLogLevelWarning,
        mlLogLevelInfo
    };
// ----- Constructor -----
    Log(){
        m_logLevel = mlLogLevelInfo;
    }

// ----- Destructor -----
    ~Log(){

    }

// ----- Methods -----

    void SetLevel(int level){
        m_logLevel = level;
    }

    void Error(const char* message){
        if(m_logLevel >= mlLogLevelError){
            std::cout << "\u001b[31m[ERROR]: " << message << "\u001b[0m" << std::endl;
        }
    }

    void Warn(const char* message){
        if(m_logLevel >= mlLogLevelWarning){
            std::cout << "\u001b[33m[WARNING]: " << message << "\u001b[0m" << std::endl;
        }
    }

    void Info(const char* message){
        if(m_logLevel >= mlLogLevelInfo){
            std::cout << "\u001b[32m[INFO]: " << message << "\u001b[0m" << std::endl;
        }
    }

};
}


int main(int argc, char* argv[]){

    ml::Log log;
    log.SetLevel(log.mlLogLevelInfo);
    log.Error("Error code.");
    log.Warn("Warning text.");
    log.Info("Info text.");

    return 0;
}