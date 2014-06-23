#include "Logger.h"


Logger::Logger(void) 
{
}
/*
Logger::Logger(size_t logLevel, const std::string& logTag, const std::string& logMsg)
{
	_logLevel = logLevel;
	_logTag = logTag;
	_logMsg = logMsg;
}
*/

Logger::~Logger(void)
{
}

size_t Logger::getLogLevel()
{
	return _logLevel;
}

void Logger::setLogLevel()
{
	_logLevel = this->_logLevel;
}

std::string Logger::getLogTag()
{
	return _logTag;
}

void Logger::setLogTag()
{
	_logTag = this->_logTag;
}

std::string Logger::getLogMsg()
{
	return _logMsg;
}

void Logger::setLogMsg()
{
	_logMsg = this->_logMsg;
}
