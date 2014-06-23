#pragma once
//----------------------------------------------------------
// 消息基类，在这里定义消息的基本操作
// 具体的各种子消息在继承的基础上进行重写
// 在本类中定义消息的类型
// ---------------------------------------------------------
class Message
{
public:
	Message(void);
	~Message(void);

	// 获取|设置消息类型
	size_t getType();
	void setType(size_t);

	// 获取|设置客户端ID
	size_t getclientID();
	void setclientID(size_t);

	// 获取|设置上行下行
	bool getisUpmessage();
	void setisUpmassage(bool);
	
	// 返回消息大小，以字节为单位，用于序列化
	virtual size_t getSize() = 0;
	// 将消息数据结构序列化到字节缓冲区中，返回写入的字节数
	virtual size_t serialize(unsigned char* write_buffer) = 0;
	// 从字节缓冲区中反序列化得到消息数据结构，返回读出的字节数
	virtual size_t deserialize(unsigned char *const read_buffer) = 0;

private:
	size_t _msgType; // 消息类型
	size_t _clientID; // 客户端ID
	bool _isUpmessage;
};


