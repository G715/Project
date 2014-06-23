#include "SceneManager.h"
#include <osg/MatrixTransform>

SceneManager::SceneManager(void)
{
}

SceneManager::SceneManager(const std::string& receivedPath)
{
	scenePath = receivedPath;
	_root = new osg::Group;
	SceneInit();
	//SceneShow();

}

SceneManager::~SceneManager(void)
{
}
// ��ʼ�����������ݲ�ͬ����Ϣ��ȡ��ͬ���ļ������ҽ���osg��txt���ࣩ
void SceneManager::SceneInit()
{
	const int scanLength = 4; // ֻƥ���ļ����������λ
	const int BufferSize = 64; // ɨ����ַ�����С
	const int filenameBufferSize = 64; // �ļ����Ĵ�С
	const osg::Vec3 translate; // ƽ������
	// �����������ֺ�׺��
	const std::string _osg = ".osg";
	const std::string _txt = ".txt";
	// �����׺��osg��ֱ�Ӷ�ȡģ�ͣ����ҵ�root��
	if((scenePath.substr(scenePath.length() - scanLength, scanLength) == _osg))
	{
		std::cout <<  _osg << " Type matched!!" << std::endl;
		_node = osgDB::readNodeFile(scenePath);
		_root->addChild(_node.get());
	}
	// �����׺��txt����ȡ��������ݣ������������������
	else if(scenePath.substr(scenePath.length() - scanLength, scanLength) == _txt)
	{
		std::cout << _txt << "Type matched!!" << std::endl;
		char buffer[BufferSize];
		char filename[filenameBufferSize];
		FILE* fp = fopen(scenePath.c_str(), "r");
		while(fgets(buffer, BufferSize, fp)){
			float x, y, z;
			//std::cout << buffer << std::endl;
			sscanf(buffer, "%s %f %f %f", filename, &x, &y, &z);
			osg::Vec3 translate(x, y, z);
			//std::cout << filename << ":"<< x << "," << y << "," << z << std::endl;
			osg::ref_ptr<osg::Node> model = osgDB::readNodeFile(filename);
			osg::ref_ptr<osg::MatrixTransform> transform = new osg::MatrixTransform;
			transform->setMatrix(osg::Matrix::translate(translate));
			transform->addChild(model);
			_root->addChild(transform);
		}
	}
	else
	{
		std::cout << "Type doesn't match!!" << std::endl;
	}

	if(!_node.valid())
	{
		std::cout << "Fail to load data!!" << std::endl;
	}	
}

void SceneManager::SceneShow()
{
	osgViewer::Viewer viewer;
	viewer.setSceneData(_root.get());
	viewer.run();
}

std::string SceneManager::getScenePath()
{
	return scenePath;
}

void SceneManager::setScenePath()
{
	scenePath = this->scenePath;
}

osg::ref_ptr<osg::Node> SceneManager::getNode()
{
	return _node;
}

void SceneManager::setNode()
{
	_node = this->_node;
}

osg::ref_ptr<osg::Group> SceneManager::getGroup(void)
{
	return _root;
}

void SceneManager::setGroup()
{
	_root = this->_root;
}
