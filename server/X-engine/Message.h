#pragma once
//----------------------------------------------------------
// ��Ϣ���࣬�����ﶨ����Ϣ�Ļ�������
// ����ĸ�������Ϣ�ڼ̳еĻ����Ͻ�����д
// �ڱ����ж�����Ϣ������
// ---------------------------------------------------------
class Message
{
public:
	Message(void);
	~Message(void);

	// ��ȡ|������Ϣ����
	size_t getType();
	void setType(size_t);

	// ��ȡ|���ÿͻ���ID
	size_t getclientID();
	void setclientID(size_t);

	// ��ȡ|������������
	bool getisUpmessage();
	void setisUpmassage(bool);
	
	// ������Ϣ��С�����ֽ�Ϊ��λ���������л�
	virtual size_t getSize() = 0;
	// ����Ϣ���ݽṹ���л����ֽڻ������У�����д����ֽ���
	virtual size_t serialize(unsigned char* write_buffer) = 0;
	// ���ֽڻ������з����л��õ���Ϣ���ݽṹ�����ض������ֽ���
	virtual size_t deserialize(unsigned char *const read_buffer) = 0;

private:
	size_t _msgType; // ��Ϣ����
	size_t _clientID; // �ͻ���ID
	bool _isUpmessage;
};


