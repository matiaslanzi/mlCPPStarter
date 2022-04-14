#ifndef MLLOG_H
#define MLLOG_H

#include "mlCommon.h"

class mlLog{
private:

    static mlLog* instance;     // Singleton instance variable
    mlLog();
    mlLog(const mlLog& orig){};
    ~mlLog();

public:
    
    static mlLog* Instance();   // Access static method
    
    enum LogLevel{
        mlLogLevelError,
        mlLogLevelWarning,
        mlLogLevelInfo
    };

    LogLevel m_logLevel;

    void SetLevel(LogLevel level);
    void Error(const char* message);
    void Warn(const char* message);
    void Info(const char* message);

};
#endif
