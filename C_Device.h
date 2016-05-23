//@file:C_Device.h
//@brief: �����豸ͨ�õĽӿڷ�����
//@author: wangzhongping@oristartech.com;duheqingoristartech.com
//date: 2012-05-23

#ifndef _H_DEVICE_
#define _H_DEVICE_
#include <stdlib.h>
#include <algorithm>
#include <string>

class C_Device
{
private:
	//�����룻
   int m_iErrorNum;
   //������Ϣ��  
   std::string m_strErrorInfo;
   //int m_bConnect; //0: Connected; 1:UnConnected;
   
protected:
   //���������ʱ�䣬��λ����,��ͬ���豸�ֱ����á�Ĭ��Ϊ1
   int m_iReadInterval; 
   //д�������ʱ�䣬��λ����,��ͬ���豸�ֱ����á�Ĭ��Ϊ1
   int m_iWriteIterval;
   // �������ĵȴ�ʱ�䡣
   int m_iReadWait;
public:
   C_Device();
   virtual ~C_Device();
   //��ʼ���豸����֧�ָ����豸������³�ʼ����
   virtual int Init(const std::string &strIp, unsigned short usPort,
	   const std::string &strUserName, const std::string &strPassword) = 0;

   //duheqing 2012-6-5
   int SetError(int iErrorNum, const std::string &strErrorInfo);
   int GetError(std::string &strErrorInfo) const;//return m_iErrorNum;
	 int GetReadInterval()
	 {
	 		return m_iReadInterval;
	 }
	 int GetWriteInterval()
	 {
	 	 return m_iWriteIterval;
	 }
	 int GetReadWait()	 
	 {
	 		return m_iReadWait;
	 }
	 
	 void SetReadInterval(int iReadInterval)
	 {
	 	 m_iReadInterval = iReadInterval;
	 }
	 
	 void SetReadWait(int iReadWait)
	 {
	 		m_iReadWait = iReadWait;	
	 }
	 
	 void SetWriteInterval(int iWriteInterval) 
	 {
	 	 m_iWriteIterval = iWriteInterval;
	 }
   virtual int GetConncetState() = 0;
   virtual int Close() = 0; 
   virtual int GetVersion(std::string &strVersion) = 0;
};

#endif//_H_DEVICE_
