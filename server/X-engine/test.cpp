#include "SceneManager.h"
#include "consoleLogger.h"
#include "fileLogger.h"

#pragma comment(lib, "OpenThreads.lib")
#pragma comment(lib, "osg.lib")
#pragma comment(lib, "osgDB.lib")
#pragma comment(lib, "osgUtil.lib")
#pragma comment(lib, "osgGA.lib")
#pragma comment(lib, "osgViewer.lib")
#pragma comment(lib, "osgText.lib")

int main(int argc, char** argv)
{
	//const std::string scenePath = "D:\\OSG\\OpenSceneGraph-Data-3.0.0\\cessna.osg";
	//const std::string scenePath = "D:\\OSG\\OpenSceneGraph-Data-3.0.0\\test.txt";
	//SceneManager sceneManager(scenePath);
	//sceneManager.SceneInit();
	//consoleLogger log(1, "gg", "hhhhhhhhhh");
	//log.doLog();
	//boost::posix_time::ptime now = boost::posix_time::second_clock::local_time();
	//std::cout << now << "\t";
	fileLogger fLog("D:\\log1.txt");
	fLog.writeLog(1, "haa", "I hate programming!!");
	fLog.writeLog(3, "heng", "God bless you!!");
	consoleLogger cLog;
	cLog.writeLog(2, "en", "en your sister!!");
	//fLog.setFilePath("D:\\");
	//fLog.doLog();
	//fileLogger fLog2;
	//fLog2.log_init();
	//BOOST_LOG_TRIVIAL(trace) << "a trace info!!";
	//BOOST_LOG_TRIVIAL(warning) << "a warning info!!";
	system("pause");
	return 0;
}