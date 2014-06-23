#pragma once
//---------------------------------------------------------------------------------
// ����OSG�ĳ���������
// ����һ�������ַ��������������Ҫ����osgģ�ͣ�ֱ�Ӽ���ģ�ͣ������
// Ҫ���ظ��ӳ�������ͨ���ļ���ȡ����һ��SceneGraph
//---------------------------------------------------------------------------------
#include "Global.h"

class SceneManager
{
public:
	SceneManager(void); // ���캯��
	// ���ع��캯�� �������ļ����������г�ʼ��
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
	// �����ڲ�����
	void SceneShow();
};

