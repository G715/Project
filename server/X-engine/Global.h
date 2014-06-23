//----------------------------------------------
// 全局类globle.h
// 主要用来包括所有用到的外部库、动态链接库
// 定义一系列对buffer进行操作的宏
//----------------------------------------------
#ifndef _GLOBAL_H
#define _GLOBAL_H

// Windows Header
#include <windows.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <queue>
#include <exception>
#include <assert.h>
#include <ctime>

// Boost Header

#include <boost/date_time/gregorian/gregorian.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>

//typedef boost::asio::ip::tcp::socket tcp_Socket;
//typedef boost::asio::io_service io_service;

// OSG Header
#include <osg/Image>
#include <osg/Switch>
#include <osgDB/ReadFile>
#include <osg/Texture2D>
#include <osgViewer/Viewer>

// Macro operators
#define write_char(buf, at, cp) ((buf+at)[0] = (unsigned char*)cp[0], \
	 (buf+at)[1] = (unsigned char*) cp[1])

#define write_uchar(buf, at, ucp) ((buf+at)[0]=((unsigned char*)ucp)[0])

#define write_short(buf, at, sp) ((buf+at)[0]=((unsigned char*)sp)[0],\
	(buf+at)[1]=((unsigned char*)sp)[1])

#define write_ushort(buf, at, usp) ((buf+at)[0]=((unsigned char*)usp)[0],\
	(buf+at)[1]=((unsigned char*)usp)[1])

#define write_int(buf, at, ip) ((buf+at)[0]=((unsigned char*)ip)[0],\
	(buf+at)[1]=((unsigned char*)ip)[1],\
	(buf+at)[2]=((unsigned char*)ip)[2],\
	(buf+at)[3]=((unsigned char*)ip)[3])

#define write_uint(buf, at, uip) ((buf+at)[0]=((unsigned char*)uip)[0],\
	(buf+at)[1]=((unsigned char*)uip)[1],\
	(buf+at)[2]=((unsigned char*)uip)[2],\
	(buf+at)[3]=((unsigned char*)uip)[3])

#define write_float(buf, at, fp) ((buf+at)[0]=((unsigned char*)fp)[0],\
	(buf+at)[1]=((unsigned char*)fp)[1],\
	(buf+at)[2]=((unsigned char*)fp)[2],\
	(buf+at)[3]=((unsigned char*)fp)[3])

#define write_double(buf, at, dp) (buf[0]=((unsigned char*)dp)[0],\
	buf[1]=((unsigned char*)dp)[1],\
	buf[2]=((unsigned char*)dp)[2],\
	buf[3]=((unsigned char*)dp)[3],\
	buf[4]=((unsigned char*)dp)[4],\
	buf[5]=((unsigned char*)dp)[5],\
	buf[6]=((unsigned char*)dp)[6],\
	buf[7]=((unsigned char*)dp)[7])

#define read_char(buf, at, cp) (*cp = *((char*)(buf+at)))

#define read_uchar(buf, at, ucp) (*ucp = *((unsigned char*)(buf+at)))

#define read_short(buf, at, sp) (*sp = *((short*)(buf+at)))

#define read_ushort(buf, at, usp) (*usp = *((unsigned short*)(buf+at)))

#define read_int(buf, at, ip) (*ip = *((int*)(buf+at)))

#define read_uint(buf, at, uip) (*uip = *((unsigned int*)(buf+at)))

#define read_float(buf, at, fp) (*fp = *((float*)(buf+at)))

#define read_double(buf, at, dp) (*dp = *((double*)(buf+at)))

#define INVALID_CLIENT_ID 0

#endif

