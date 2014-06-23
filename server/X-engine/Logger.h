#pragma once
//-----------------------------------------------------------
// ��־�࣬��¼�������й����г��ֵĸ����¼������Բ�
// ͬ�ķ�ʽ���
//-----------------------------------------------------------
#include "Global.h"

// ������־�ļ���
enum LogLevel{
	VERBOSE_LEVEL,
	DEBUG_LEVEL,
	INFO_LEVEL,
	WARNING_LEVEL,
	ERROR_LEVEL,
	FATAL_LEVEL
};

class Logger
{
public:
	Logger(void);
	//Logger(size_t, const std::string&, const std::string&);
	~Logger(void);

	virtual void writeLog(size_t, const std::string&, const std::string&) = 0;
	//void logInit(size_t, const std::string&, const std::string&);

	size_t getLogLevel();
	void setLogLevel();

	std::string getLogTag();
	void setLogTag();

	std::string getLogMsg();
	void setLogMsg();

/*
	void VERBOSE(size_t _logLevel, const std::string _logTag, const std::string _logMsg);
	void DEBUG(size_t _logLevel, const std::string _logTag, const std::string _logMsg);
	void INFO(size_t _logLevel, const std::string _logTag, const std::string _logMsg);
	void WARN(size_t _logLevel, const std::string _logTag, const std::string _logMsg);
	void ERR(size_t _logLevel, const std::string _logTag, const std::string _logMsg);
	void FATAL(size_t _logLevel, const std::string _logTag, const std::string _logMsg);
	*/
protected:
	size_t _logLevel;      // ����
	std::string _logTag;  // ����
	std::string _logMsg; // ����
};