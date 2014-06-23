#include "consoleLogger.h"


consoleLogger::consoleLogger(void)
{

}
/*
consoleLogger::consoleLogger(size_t logLevel, const std::string& logTag, const std::string& logMsg)
{
	_logLevel = logLevel;
	_logTag = logTag;
	_logMsg = logMsg;
}
*/

consoleLogger::~consoleLogger(void)
{
}


void consoleLogger::writeLog(size_t logLevel, const std::string& logTag, const std::string& logMsg)
{
	_logLevel = logLevel;
	_logTag = logTag;
	_logMsg = logMsg;

	// 利用Window API 的时间类ctime来输出时间格式
	// boost版本
	boost::posix_time::ptime now = boost::posix_time::second_clock::local_time();
	std::cout << now << "\t";
/*
	time_t ltime;
	tm* local;
	local = localtime(&ltime);
	std::cout << local->tm_hour << ":"
		<< local->tm_min << ":" << local->tm_sec << "\t";
*/

	switch(_logLevel)
	{
		case VERBOSE_LEVEL: std::cout << "verbose\t"; break;
		case DEBUG_LEVEL: std::cout << "debug\t"; break;
		case INFO_LEVEL: std::cout << "info\t"; break;
		case WARNING_LEVEL: std::cout << "warning\t"; break;
		case ERROR_LEVEL: std::cout << "error\t"; break;
		case FATAL_LEVEL: std::cout << "fatal\t"; break;
		default: std::cout << "unknown\t"; break;
	}

	std::cout << _logTag << "\t" << _logMsg << std::endl; 
}
