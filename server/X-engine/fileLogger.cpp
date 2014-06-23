#include "fileLogger.h"

//const std::string des = "log.txt";

fileLogger::fileLogger(void)
{
}

fileLogger::fileLogger(const std::string& fileName)
{
	_fileName = fileName;
}

fileLogger::~fileLogger(void)
{
}

std::string& fileLogger::getFileName()
{
	return _fileName;
}

void fileLogger::setFileName(const std::string& filePath)
{
	_fileName = filePath;
}

void fileLogger::writeLog(size_t logLevel, const std::string& logTag, const std::string& logMsg)
{
	_logLevel = logLevel;
	_logTag = logTag;
	_logMsg = logMsg;

	std::ofstream fstrm;
	//std::string finalFilePath = _filePath + des;
	//const char* absoluteFilePath = finalFilePath.c_str();
	//std::cout << absoluteFilePath << std::endl;
	//char* file = "log.txt";
	//char* absoluteFilePath = strcat(_filePath, file);
	fstrm.open(_fileName, std::ios::app);
	//fstrm.open(absoluteFilePath, std::ios::app);
	std::cout << "file opened!!" << std::endl;
	if(!fstrm.is_open())
	{
		fstrm.close();
		std::cerr << "Can't open the log file!!";
		//exit(0);
	}	
	// 利用Window API 的时间类ctime来输出时间格式
	// boost版本
	boost::posix_time::ptime now = boost::posix_time::second_clock::local_time();
	//std::cout << now << "\t";
	fstrm << now << "\t";

	switch(_logLevel)
	{
		case VERBOSE_LEVEL: fstrm << "verbose\t"; break;
		case DEBUG_LEVEL: fstrm << "debug\t"; break;
		case INFO_LEVEL: fstrm << "info\t"; break;
		case WARNING_LEVEL: fstrm << "warning\t"; break;
		case ERROR_LEVEL: fstrm << "error\t"; break;
		case FATAL_LEVEL: fstrm << "fatal\t"; break;
		default: fstrm << "unknown\t"; break;
	}

	//std::cout << _logTag << "\t" << _logMsg << std::endl;
	fstrm << _logTag << "\t" << _logMsg << "\n";
	fstrm.close();
}


