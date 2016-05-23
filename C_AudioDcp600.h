//@file:  C_AudioDcp600.h
//@brief: ʵ����Ƶ�豸Dcp 600 �ӿڶ��塣
//@author:zhangmiao@oristartech.com
//date:   2015-06-24 

#ifndef _H_AUDIO_DCP600_
#define _H_AUDIO_DCP600_

#include "constDef/C_ErrorDef.h"
#include "device/audio/C_AudioDevice.h"
#include "common/C_TcpSocket.h"
#ifndef _UDPTRANSPORT_H_
#include "UdpTransport.h"
#endif

#include <vector>
#include <string>
#include <cstring>
#include <cstdio>

typedef unsigned char   u8;
typedef unsigned short  u16;
typedef unsigned int    u32;

const int nDcp600_Offset_MuteState    = 0x369;   //0x369 = 873  
const int nDcp600_Offset_ChannelState = 0x35a;   //0x35a = 858 

//ͨ�������Ķ�Ӧ��ϵ
//ͨ��0=Digital8��ͨ��1=Analog8��ͨ��2=NonSync��ͨ��3=Aux��
const int nDcp600_Offset_Vol_Ch00 = 0x35d;  //0x35d = 861 ͨ��0������ֵ��ƫ�Ƶ�ַ
const int nDcp600_Offset_Vol_Ch01 = 0x35e;  //0x35e = 862 ͨ��1������ֵ��ƫ�Ƶ�ַ
const int nDcp600_Offset_Vol_Ch02 = 0x35f;  //0x35f = 863 ͨ��2������ֵ��ƫ�Ƶ�ַ
const int nDcp600_Offset_Vol_Ch03 = 0x360;  //0x360 = 864 ͨ��3������ֵ��ƫ�Ƶ�ַ

#define _DEBUG_

class C_AudioDCP600 : public C_AudioDevice
{
	std::vector<std::string> m_chanelList;	//ͨ���б�
	
	std::string m_ip;			//IP��ַ
	unsigned short m_port;		//�˿ں�:2305
	std::string m_userName;
	std::string m_passwd;

	//����״̬  0----�޷����ӣ�	1----��������
	int m_bConnected; 

	//����ÿ��ͨ����Ӧ������ֵ����8����dcp600ֻ����4����index = 0 , 1 , 2 , 3  
	char m_Channel_VolList[8];

	//��ǰͨ���ţ���0--3
	int m_CurChannelNum;

	//��ʾ��֮ǰ�Ƿ�ִ�й���ȡ״̬����GetAudioStatus().
	int m_IsLoadFunc_GetAudioStatus;

public:
	C_AudioDCP600();
	virtual ~C_AudioDCP600();

	virtual int Init(const std::string &strIp, unsigned short usPort, const std::string &strUserName, const std::string &strPassword);

	virtual int Close();

	//���þ���״̬,1��ʾ����״̬��0��ʾ�Ǿ���״̬
	virtual int SetMute(int iMute);

	//��ȡ��Ƶ��������ǰ״̬
	//����״̬iMute=1���Ǿ���״̬iMute=0
	virtual int GetAudioStatus(int &iValue, int &iMute, int &iChanel,std::vector<std::string> &vecChanelList);

	//�������� 0-100���ڲ�ʹ��0-100����Ӧ����ϵ�0 - 10.0,ÿ��ͨ���Ƕ������Ƶġ�
	virtual int SetValue(int iValue);
	//����ͨ���� 0-3,
	virtual int SetChanel(int iChanel);

	//Ŀǰûʹ��
	virtual int SetChanel(const std::string &chanel);
	//Ŀǰûʹ��
	virtual int SetValueAndMute(int iValue,int iMute);

	virtual int GetVersion(std::string &strVersion);
	virtual int GetConncetState();

#if 0
	int GetChanelData();
	int GetVolumeData();
	int GetMuteData();
#endif


 private:

	//GetChanel()��GetVolume()�������ڲ����ڲ��ԣ����������
	int GetChanel( int &chanel );
	int GetVolume( int &volume );

	
	//��SetValue��������  SetValue()--->SetVolume()��
	int SetVolume( int volume );

	//�ú�����SetChanel(int iChanel)����  SetChanel()--->SetChanel_type()
	int SetChanel_type(int type);

	//��GetAudioStatus��������  GetAudioStatus()--->GetAll()
	int GetAll(int &volume, int &mute, int &channel);

	//UDP���͡�������������
	int SendAndRecv( const char *sendBuffer, int size, char *recvBuffer, int& rRecvDataLength );

	
	int GetMuteRet( const char *info , int &mute , int Length );
	int GetChanelType( char *info , int &type , int Length );
	
	int GetVolumeRet( const char *info , int Length );
	
};

#define TMS2_AUDIO_ERRCODE
#ifdef TMS2_AUDIO_ERRCODE
#define AD600TT(error) Dcp600ErrorCodeToTmsErrorCode(error);
#define AD600TT2(error) Dcp600ErrorCodeToTmsErrorCode(error)
int Dcp600ErrorCodeToTmsErrorCode(int error);
#else
#define AD600TT(error) (error);
#define AD600TT2(error) (error)
#endif // TMS2_AUDIO_ERRCODE

#define WRITE_DCP600ELOG 
#ifdef WRITE_DCP600ELOG
#define WDCP600LOG(str) Dcp600_WriteErrorLog(str);
int Dcp600_WriteErrorLog( const std::string& strError );
#else
#define WDCP600LOG(str) 
#endif // WRITE_DCP600ELOG

const int ERROR_AUDIO_DCP_600_CANNOTCONNECT      = -101;		//can not connect the audio server
const int ERROR_AUDIO_DCP_600_UDPTRANSPORTFAILED = -102;	    //udp transport failed
const int ERROR_AUDIO_DCP_600_PARAMETERERROR     = -103;		//function get a bad parameter
const int ERROR_AUDIO_DCP_600_OPERATORFAILED     = -104;		//audio error, operator failed
const int ERROR_AUDIO_DCP_600_PARSER_FAILED      = -105;		//message error, operator failed

#endif//_H_AUDIO_DCP600_

