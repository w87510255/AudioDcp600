#ifndef TMS20_LOG
#define TMS20_LOG
#include <string>
#include <list>
#include "C_ErrorDef.h"
#include "LogManage.h"
#include "C_CS.h"
typedef struct LogSct
{
	int iModule;
	int iSubModule;
	std::string strLogName;
	LogManage *pLogManage;	
	C_CS m_CS;
}LOG_STRUCT, *PLOG_STRUCT;
//��ʱ����־�ṹ������������־Ŀ¼ʱ���ݴ���־��
typedef struct TmpLog
{
	int iLevel;
	int iModule;
	int iSubModule;
	int errorCode;
	std::string strError;
}TMP_LOG, *PTMP_LOG;

class C_LogManage
{
public:
	~C_LogManage();
	static C_LogManage* GetInstance();
	int WriteLog(int iLevel, int iModule, int iSubModule,c_u_int errorCode, std::string strError);
	int WriteLog(int iLogNumber, std::string strError);
	
	//iLevel����־����
	//iModule: ģ���ţ�
	//iSubModule:��ģ���ţ�
	// errorCode����־�Ĵ����볣����
	int CreateLogNumber(int iLevel, int iModule, int iSubModule,c_u_int errorCode)
	{
		if(iLevel > 3)
		{
			printf("��־�������ô���\n");
			return -1;
		}
		if(iModule <16 || iModule >26)
		{
			printf("��־ģ�������ô���\n");
			return -1;
		}
		if((iModule != 22 && iSubModule != 0) || iSubModule >4 || iSubModule <0)
		{
			printf("��ģ�����ô���\n");
			return-1;
		}
			
		int iResult = 0;
		iResult = iLevel << 28;
		iResult |= iModule << 20;
		iResult |= iSubModule << 16;
		iResult |= errorCode;
		return iResult;
	}
	int SeparateLogNumber(int iLogNumber,int &iLevel, int &iModule, int &iSubModule)
	{
		iLevel = iLogNumber >> 28;
		iModule = (iLogNumber & 0x0FF00000) >> 20;
		iSubModule = (iLogNumber & 0x00F0000) >> 16;
		return iLogNumber & 0x0000FFFF;
	}
	int SeparateLogNumber(int iLogNumber)
	{
		return iLogNumber & 0x0000FFFF;
	}
	int SetLogLevel(int iLevel, int iModele, int iSubModule);
	//��ʼ����־Ŀ¼ ���ȵ���CheckLogPath��Ȼ�����
	int InitLogPath(std::string &strBootPath);
	int SetLogDate();
	//�����־��Ŀ¼strBootPath�Ƿ�Ϸ���ͬʱ��⡰01��---��31����Ŀ¼�Ƿ���ڣ�
	//����������򴴽���Ŀ¼��
	//����ֵ��Ĭ�ϡ�
	//������strBootPath ������־�ļ��ĸ�Ŀ¼��
	int CheckLogPath(std::string &strBootPath);
	//ɾ����ǰ����־�ļ���
	//����ֵĬ�ϣ�
	//������strPath ��־�ļ���Ŀ¼
	int DeletePreLog(std::string &strPath);
	// ������־�ṹ,ϵͳ��ʼ��ʱ���á�
	//����ֵĬ�ϡ�
	int CreateLogStruct(std::string &strPath);
	int ModifyLogStruct(std::string &strPath);
	//���³�ʼ����־ ÿ��0�������̵߳��á�
	int ReInitLog();

		
protected:
	C_LogManage();
private:
	static 	C_LogManage* m_pInstance;
	volatile int m_bSettingDate;
	std::string m_strBootPath;
	std::string m_strLogPath;
	std::list<PLOG_STRUCT> m_listLog;	
	std::list<PTMP_LOG> m_listTmpLog;
	C_CS m_TmpLogCS;
};
#endif //TMS20_LOG
