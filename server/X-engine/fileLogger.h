#pragma once
#include "logger.h"

class fileLogger : public Logger
{
public:
	fileLogger(void);
	fileLogger(const std::string& filePath);
	~fileLogger(void);

	std::string& getFileName();
	void setFileName(const std::string& filePath);

	virtual void writeLog(size_t, const std::string&, const std::string&);
	// 使用boost库做日志记录
	void log_init();
private:
	std::string _fileName;
};

