#pragma once
//---------------------------------------------------------------------------------
// 基于OSG的场景管理类
// 接收一个常量字符串变量，如果需要加载osg模型，直接加载模型；如果需
// 要加载复杂场景，则通过文件读取构建一个SceneGraph
//---------------------------------------------------------------------------------
#include "Global.h"

class SceneManager
{
public:
	SceneManager(void); // 构造函数
	// 重载构造函数 ，接收文件名常量进行初始化
	SceneManager(const std::string& receivedPath); 
	void SceneInit();

	std::string getScenePath();
	void setScenePath();

	osg::ref_ptr<osg::Node> getNode();
	void setNode();
	
	osg::ref_ptr<osg::Group> getGroup();
	void setGroup();

	~SceneManager(void);
private:
	std::string scenePath;
	osg::ref_ptr<osg::Node> _node;
	osg::ref_ptr<osg::Group> _root;
	// 用于内部测试
	void SceneShow();
};

