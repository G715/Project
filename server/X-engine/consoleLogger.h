#pragma once
//----------------------------------------------------------
// 控制台日志类，日志类的派生
// 将日志按照设计的格式输出到控制台
//----------------------------------------------------------
#include "logger.h"
class consoleLogger : public Logger
{
public:
	consoleLogger(void);
	//consoleLogger(size_t, const std::string&, const std::string&);
	//consoleLogger(size_t logLevel, const std::string& logTag, const std::string& logMsg);
	~consoleLogger(void);
	virtual void writeLog(size_t, const std::string&, const std::string&);

private:
	//int isConsole;
};

