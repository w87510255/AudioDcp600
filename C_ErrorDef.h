//@file:C_ErrorDef.h
//@brief: ������������Ϣ��Ϣ���塣
//@author:wangzhongping@oristartech.com
//dade:2012-07-12

#ifndef _TMS20_ERROR_DEFINE
#define _TMS20_ERROR_DEFINE
typedef  const  int  c_u_int;

//CenterCtrl Module:16,subModule:0000

//ERROR
// web���ʵ�ַ���ô��󣬷Ǳ�����ַ��
c_u_int ERROR_WEB_VISIT_ADDRESS = 0x0001;
//WARNING

//INFO
//M0001
c_u_int INFO_TMS_START_RUN = 0x0001;
//M0001
//CenterCtrl end 

//Thread Manage Module: 17, subModule: 0000

//ERROR

//�̶߳����������޿����̡߳�
c_u_int ERROR_THREAD_LIST_FULL= 0x0001;
// ���Ի��߳��������ݴ���
c_u_int ERROR_INIT_THREAD_ATTRIB = 0x0003;
// �����߳��������ݴ���
c_u_int ERROR_SET_THREAD_ATTRIB = 0x0004;
// �����̴߳���
c_u_int ERROR_CREATE_TRREAD = 0x0005;
// �߳�״̬����
c_u_int ERROR_THREAD_STATE = 0x0006;
//����threadIDû���ҵ���Ӧ��C_ThreadData��
c_u_int ERROR_NO_FIND_THREADDATA_OF_ID = 0x0007;
// ���Ի�webservice�߳��������ݴ���
c_u_int ERROR_INIT_WEBSERVICE_THREAD_ATTRIB = 0x0008;
// ����webservice�߳��������ݴ���
c_u_int ERROR_SET_WEBSERVICE_THREAD_ATTRIB = 0x0009;
// ����webservice�̴߳���
c_u_int ERROR_WEBSERVICE_CREATE_TRREAD = 0x000a;
// �߳��Ѿ���ʱ��
c_u_int ERROR_THREAD_TIMEOUT = 0x000b;
// �̵߳�������û���ҵ�λִ����صĴ�������
c_u_int ERROR_THREAD_TASK_NUMBER_NO_FIND = 0x000d;
//�̵߳��������ʹ���
c_u_int ERROR_THREAD_TASK_TYPE = 0x000e;


//WARNING

//INFO
// û�з����������߳�
c_u_int INFO_NO_CONDITION_THREAD = 02;


//Thread Manage end;

//Time Task  module: 18 , subModule: 0000

//ERROR

//��������������޿�������
c_u_int ERROR_TASK_LIST_FULL= 0x0001;
//ɾ��Ӱ����ʱ����ʧ�ܣ�δ֪���������͡�
c_u_int ERROR_TASK_DELETE_HALL_TASK = 0x0002;


//WARNING

//INFO
//Ӱ��CUE��ʱ����ǰ״̬���������ʱ�䡣
c_u_int INFO_TASK_NOT_ALLOW_TIME = 0x0001;
//Time Task end;

//Device manage  module: 22 ,
// subModule: 0000

//ERROR

//�����������ݿ�ʧ�ܣ����³��Ի�Ӱ��ʧ�ܡ�
c_u_int ERROR_INIT_HALL_OF_DB_CONNECT = 0x0001;
//Ҫ���ҵ�Ӱ����Ŷ�Ӧ��Ӱ����ϵͳ�в����ڡ�
c_u_int ERROR_SEARCH_HALL_WITH_HALLNUM = 0x0002;
//��ȡӰ����Ŵ��󣬵��³��Ի�Ӱ��ʧ�ܡ�
c_u_int ERROR_INIT_HALL_OF_HALLID_EMPTY = 0x0003;
//Ӱ�����Ϊ�յ��£��������߳�ʼ��Ӱ���޷���ɡ�
c_u_int ERROR_HALLID_IS_EMPTY = 0x0004;
//Ӱ������Ϊ�յ��£��������߳�ʼ��Ӱ���޷���ɡ�
c_u_int ERROR_HALL_NAME_IS_EMPTY = 0x0005;
//�豸Ʒ��Ϊ�գ��������߳�ʼ��Ӱ���޷���ɡ�
c_u_int ERROR_HALL_DEVICE_BRAND_IS_EMPTY = 0x0006;
//�豸�ͺ�Ϊ�գ��������߳�ʼ��Ӱ���޷���ɡ�
c_u_int ERROR_HALL_DEVICE_MODEL_IS_EMPTY = 0x0007;
//�豸�豸���ʹ��󣬴������߳�ʼ��Ӱ���޷���ɡ�
c_u_int ERROR_HALL_DEVICE_TYPE = 0x0008;
//�豸�豸�˿ں�Ϊ�㣬�������߳�ʼ��Ӱ���޷���ɡ�
c_u_int ERROR_HALL_DEVICE_PORT_IS_ZERO = 0x0009;
//�豸IP��ַ��ʽ���󣬴������߳�ʼ��Ӱ���޷���ɡ�
c_u_int ERROR_HALL_DEVICE_IP_FORMAT = 0x000a;
//Ӱ������Ѿ����ڣ��������߳�ʼ��Ӱ���޷���ɡ�
c_u_int ERROR_HALL_ID_EXIST = 0x000b;
//Ӱ�������Ѿ����ڣ��������߳�ʼ��Ӱ���޷���ɡ�
c_u_int ERROR_HALL_NAME_EXIST = 0x000c;
//�豸IP��ַ�Ѿ����ڣ��������߳�ʼ��Ӱ���޷���ɡ�
c_u_int ERROR_HALL_DEVICE_IP_EXIST = 0x000d;
//�豸����ȱʧ�����ظ����������߳�ʼ��Ӱ���޷���ɡ�
c_u_int ERROR_HALL_DEVICE_TYPE_EXPECTION = 0x000e;
//Ӱ��״̬��Ҫ�޸ĵ�״̬һ�������޸ġ�
c_u_int ERROR_HALL_STATE_NEED_NOT_MODIFY = 0x000f;
//Ӱ����ǰ״̬����������޸Ĳ�����
c_u_int ERROR_HALL_STATE_NOT_MODIFY = 0x0010;
//Ӱ����ǰ���ڲ��ţ�����ִ�д˲�����
c_u_int ERROR_HALL_PLAY_NOT_OPERATING = 0x0011;
//Ӱ���������ڣ�����ִ�д˲�����
c_u_int ERROR_HALL_PLAN_NOT_OPERATING = 0x0012;
//ϵͳ����ִ��KDM�������������ִ�д˲�����
c_u_int ERROR_SYSTEM_IMPORTING_KDM_NOT_OPERATING = 0x0013;
//Ӱ�����ڽ��зַ�����������ִ�д˲�����
c_u_int ERROR_HALL_DISPATCHING_NOT_OPERATING = 0x0014;
//����Ӱ�������豸��״ֵ̬����ȷ��
c_u_int ERROR_SET_HALL_OR_DEVICE_STATE = 0x0015;
//Ӱ����ǰ״̬��������豸���в�����
c_u_int ERROR_HALL_STATE_NO_ALLOW_OPERATOR = 0x0016;
//�޸�Ӱ���豸ʱָ�����豸���Ͳ���ȷ��
c_u_int ERROR_MODIFY_DEVICE_TYPE = 0x0017;
//�޸�Ӱ���豸ʱ���³�ʼ��Ӱ���豸ʧ�ܡ�
c_u_int ERROR_REINIT_DEVICE = 0x0018;


//�ڴ���ʴ���ָ��Ϊ�ա�
c_u_int ERROR_MEMORY_ZERO = 0x5000;

//���ڶ�ȡ�豸�����������豸��ռ�ã���ǰ�����޷���ɡ�
c_u_int ERROR_DEVICE_READING_PARA = 0x4004;
//���������豸�����������豸��ռ�ã���ǰ�����޷���ɡ�
c_u_int ERROR_DEVICE_WRITING_PARA = 0x4005;
//�豸����ִ��CUE�����������豸��ռ�ã���ǰ�����޷���ɡ�
c_u_int ERROR_DEVICE_CUE_PARA = 0x4006;
//�����豸״̬Ϊ����״̬��������Ч
c_u_int ERROR_DEVICE_STATE_IDLE = 0x4007;
//��ǰ�豸�����õ�ǰ�����޷���ɡ�
c_u_int ERROR_DEVICE_STATE_UNENABLE = 0x4008;
//�ڴ���ʴ��󣬵�ǰ�豸ͨ��ʵ��ָ��Ϊ�ա�
c_u_int ERROR_DEVICE_NULL_POINTOR = 0x4009;
//��ǰ�豸����״̬Ϊ�޷����ӣ���ǰ�����޷���ɡ�
c_u_int ERROR_DEVICE_NO_CONCECTION = 0x400a;
//��ǰ�豸״̬Ϊɾ��״̬����ǰ�����޷���ɡ�
c_u_int ERROR_DEVICE_STATE_DELETING = 0x400b;
//��ǰ�豸״̬Ϊ��ʼ��״̬����ǰ�����޷���ɡ�
c_u_int ERROR_DEVICE_STATE_INITING = 0x400c;
// �����豸��������Ƶ�������Ժ����ԡ�
c_u_int ERROR_DEVICE_STATE_NO_INTERVAL = 0x400d;
// �豸�ڲ�״̬����
c_u_int ERROR_DEVICE_STATE_INTER = 0x400e;
//ϵͳδ���ҵ�ָ�����͵��豸��
c_u_int ERROR_DEVICE_SEARCH_DEVICE_MODEL= 0x400f;
//�豸û�г�ʼ������ֹ���ʡ��ڴ���ʴ���
c_u_int ERROR_DEVICE_OBJECT_NO_INIT = 0x4010;
//
//WARNING

//���ڴ�Hallsʧ�ܣ����³��Ի�Ӱ���޷���ɣ�����δ����Ӱ�����������ݿ���ʴ���
c_u_int WARNING_INIT_HALL_OF_DB_OPEN_HALLS = 0x0002;
//����Ӱ���ɹ��������Զ�ִ������ͬ��ʧ�ܣ����Ժ��ֶ���������ͬ��������ͬ����
const int WARNING_CREATE_HALL_SUCCESS_CONTENT_FAILURE = 0x0003;
//����Ӱ���ɹ��������Զ�ִ������ͬ��ʧ�ܣ����Ժ��ֶ���������ͬ����
const int WARNING_CREATE_HALL_SUCCESS_SCHEDULE_FAILURE = 0x0004;


//INFO

// subModule: 0000 end

//subModule:0001 DCS

const int ERROR_PLAYER_CTRL_DEVICENOTIDLE = -1;
const int ERROR_PLAYER_CTRL_BADDEVICETYPE = -2;
const int ERROR_PLAYER_CTRL_DEVICEBUSY = -3;
const int ERROR_PLAYER_CTRL_DEVICENOTINIT = -4;
const int ERROR_PLAYER_CTRL_GETPLAYERSTATUS1 = -5;
const int ERROR_PLAYER_CTRL_PLAYERSNERROR = -6;
const int ERROR_PLAYER_CTRL_PLAYERISINGESTING = -8;
const int ERROR_PLAYER_CTRL_PARAMETERERROR = -9;
const int ERROR_PLAYER_CTRL_INGESTERROR = -10;
const int ERROR_PLAYER_CTRL_CANNOTFINDCPLDB = -13;
const int ERROR_PLAYER_CTRL_CANNOTFINDSPLDB = -14;

const int ERROR_PLAYER_CTRL_CANNOTFINDSPL = 100;			//can not find spl
const int ERROR_PLAYER_CTRL_CANNOTFINDCPL = 101;		//can not find cpl
const int ERROR_PLAYER_CTRL_SPLCONFLICT = 102;			//time conflict
const int ERROR_PLAYER_CTRL_DEVICECONNECTFAILED = 103;	//connect failed.
const int ERROR_PLAYER_CTRL_UNKNOWDEVICEERROR = 104;	//connect failed.
const int ERROR_PLAYER_CTRL_CANNOTDELETECPLRELYEDSPL = 105;

//ERROR
const int ERROR_PLAYER_AQ_CANNOTCONNECT = -1001;
const int ERROR_PLAYER_AQ_CONNECTSMS = -1002;
const int ERROR_PLAYER_AQ_TCPSEND = -1003;
const int ERROR_PLAYER_AQ_TCPRECEIVE = -1004;
const int ERROR_PLAYER_AQ_BADPARAMETER = -1005;
const int ERROR_PLAYER_AQ_ISPLAYING = -1006;
const int ERROR_PLAYER_AQ_ISNOTPLAYING = -1007;
const int ERROR_PLAYER_AQ_BADSOAPRESPONSE = -1008;
const int ERROR_PLAYER_AQ_SOAPRESPONSE = -1009;
const int ERROR_PLAYER_AQ_NEEDSOAPELEM = -1010;
const int ERROR_PLAYER_AQ_BADHTTPRESPONSE = -1011;
const int ERROR_PLAYER_AQ_HTTPREDIRECT = -1012;
const int ERROE_PLAYER_AQ_HTTPCLIENT = -1013;
const int ERROR_PLAYER_AQ_HTTPSERVER = -1014;
const int ERROR_PLAYER_AQ_HTTPUNKNOW = -1015;
const int ERROR_PLAYER_AQ_NOTSUPPORT = -1016;
const int ERROR_PLAYER_AQ_BADFTPURL = -1017;
const int ERROR_PLAYER_AQ_HAVENOTCPL = -1018;
const int ERROR_PLAYER_AQ_HAVENOTSPL = -1019;
const int ERROR_PLAYER_AQ_HAVENOTINGEST = -1020;
const int ERROR_PLAYER_AQ_CPLISUSING = -1021;
const int ERROR_PLAYER_AQ_HAVENOTKDM = -1022;
const int ERROR_PLAYER_AQ_ISNOTARIGHTTIME = -2041;//from dolby
const int ERROR_PLAYER_AQ_HAVENOTSCHEDULE = -1024;
const int ERROR_PLAYER_AQ_UNKNOWERROR = -1100;
//zhangmiao 2012-11-07

const int ERROR_PLAYER_SONY_TCPFAILED = -4001;
const int ERROR_PLAYER_SONY_BADPARAMETER = -4002;
const int ERROR_PLAYER_SONY_ISPLAYING = -4003;
const int ERROR_PLAYER_SONY_ISNOTPLAYING = -4004;
const int ERROR_PLAYER_SONY_SERVERERROR = -4005;
const int ERROR_PLAYER_SONY_HTTPERROR = -4006;
const int ERROR_PLAYER_SONY_BADXMLRESPONSE = -4007;
const int ERROR_PLAYER_SONY_NOTSUPPORT = -4008;
const int ERROR_PLAYER_SONY_RESPONSETYPE = -4009;
const int ERROR_PLAYER_SONY_BUSY = 4010;
const int ERROR_PLAYER_SONY_TRANSFERDEAD = 4011;
const int ERROR_PLAYER_SONY_UNKNOWERROR = -4100;

//20141010 by xiaozhengxiu add
const int ERROR_PLAYER_DOREMI_TCPFAILED = -5001;
const int ERROR_PLAYER_DOREMI_BADPARAMETER = -5002;
const int ERROR_PLAYER_DOREMI_ISPLAYING = -5003;
const int ERROR_PLAYER_DOREMI_ISNOTPLAYING = -5004;
const int ERROR_PLAYER_DOREMI_SERVERERROR = -5005;
const int ERROR_PLAYER_DOREMI_NOTSUPPORT = -5006;
const int ERROR_PLAYER_DOREMI_RESPONSETYPE = -5007;
const int ERROR_PLAYER_DOREMI_BUSY = -5008;
const int ERROR_PLAYER_DOREMI_UNKNOWERROR = -5009;
const int ERROR_PLAYER_DOREMI_BADFTPURL = -5010;
const int ERROR_PLAYER_DOREMI_UUIDNOTMATCH = -5011;//���ͽ��յ�uuid��ƥ��
const int ERROR_PLAYER_DOREMI_UNABLE_TO_PLAY_SHOW = -5012;
const int ERROR_PLAYER_DOREMI_NOT_STOPPED_OR_PAUSED_STATUS = -5013;
const int ERROR_PLAYER_DOREMI_BADFILE = -5014;
const int ERROR_PLAYER_DOREMI_BADDATALEN = -5015;
const int ERROR_PLAYER_DOREMI_NOSPL = -5016;
const int ERROR_PLAYER_DOREMI_XMLPARSE = -5017;

//20150703 add cy FOR_TRANS_DCS
const int TRANS_ERROR_TCP = -6001;
const int TRANS_DCSTYPE_ERROR = -6002;
const int TRANS_ERROR_PLAY_CONTROL = -6003;
const int TRANS_ERROR_NOT_LOGIN = -6004;
const int TRANS_ERROR_COMMAND_REJECTED = -6005;
const int TRANS_ERROR_COMMAND_FOMART = -6006;
const int TRANS_ERROR_NOT_CONNECTED = -6007;
const int TRANS_ERROR_SPL_EXIST = -6008;
const int TRANS_ERROR_SPL_NAME_FOMART = -6009;
const int TRANS_ERROR_DELETE_CONTENT_INUSE = -6010;
const int TRANS_ERROR_DELETE_KEY_INUSE = -6011;
const int TRANS_ERROR_NOFOUND_CPL_INUSEKDM = -6012;
const int TRANS_ERROR_INCOMPLETE_CPLINFO = -6013;
const int TRANS_ERROR_NOFOUND_KDM = -6014;
const int TRANS_ERROR_INCOMPLETE_KDMINFO = -6015;
const int TRANS_ERROR_SCHEDULE_TIME_ERROR = -6016;
const int TRANS_ERROR_NOTFOUNT_SPL_INSCHEDULE = -6017;
const int TRANS_ERROR_CPL_INSCHEDULE = -6018;
const int TRANS_ERROR_XMLFOMART_OR_TRANSERROR = -6019;
const int TRANS_ERROR_UNKOWN = -6020;
const int TRANS_ERROR_GSOAP_OR_BARCO = -6021;
//const int TRANS_ERROR_XMLFOMART_OR_TRANSERROR = -6021;
const int TRANS_ERROR_DCS_NOT_INIT = -6022;
const int TRANS_ERROR_LOGIN_DENIED = -6023;//icmp - invalid user login - login denied
//end cy

//duheqing 2015-09-21
const int ERROR_PLAYER_CHRISTIE_TCP = -7001;
const int ERROR_PLAYER_CHRISTIE_KDM_NOTFIND = -7002;
const int ERROR_PLAYER_CHRISTIE_SPL_NEEDCPL = -7003;
const int ERROR_PLAYER_CHRISTIE_PLAYER_ERRORRET = -7004;
const int ERROR_PLAYER_CHRISTIE_CANNOT_FINDINGEST = -7005;
const int ERROR_PLAYER_CHRISTIE_BADSTATUSXML = -7006;
const int ERROR_PLAYER_CHRISTIE_BADXML = -7007;
const int ERROR_PLAYER_CHRISTIE_BADURL = -7008;
const int ERROR_PLAYER_CHRISTIE_KLV_BADELEM = -7009;
const int ERROR_PLAYER_CHRISTIE_OTHER = -7010;
const int ERROR_PLAYER_CHRISTIE_NOTSUPPORT = -7011;

//dobby player
#define Dobby_ERROR_Code_Base_Value                   2000
#define DOBBY_RESPONSE_FORMAT_ERROR				         1
#define DOBBY_RESPONSE_STATUS_ERROR				    	 2
#define DOBBY_ERROR_COMMUNICATION_WITH_PROJECTOR	    10
#define DOBBY_DUPLICATED_TASK_FOUND					    11
#define DOBBY_NO_SPL_FOUND_WITH_THE_SPECIFIED_UUID	    12
#define DOBBY_NO_ASSET_FOUND_WITH_THE_SPECIFIED_UUID	13
#define DOBBY_UNABLE_TO_PLAY_SHOW						14
#define DOBBY_NOT_PAUSED_STATUS						    15
#define DOBBY_DCPINFO_INIT_ERROR						16
#define DOBBY_ERROR_CPL_XML_FORMAT					    17
#define DOBBY_ERROR_SPL_XML_FORMAT					    18
#define DOBBY_NOT_STOPPED_OR_PAUSED_STATUS			    19
#define DOBBY_NOT_PLAYING_STATUS						20
#define DOBBY_NOT_PLAYING_OR_PAUSED_STATUS			    21
#define DOBBY_NO_PLAYBACK_STATUS						22
#define DOBBY_NOT_SUPPORT_API							23
#define DOBBY_CREATE_SCHEDULE_ERROR				    	24
#define DOBBY_GET_CPLINFO_ERROR						    25
#define DOBBY_CREATESPL_ERROR							26
#define DOBBY_INGEST_KDM_TIMEOUT						27
#define DOBBY_FTP_PARSER_ERROR					    	28
#define DOBBY_RECV_RESPONSE_TIMEOUT					    29
#define DOBBY_RECV_RESPONSE_ERROR						30
#define DOBBY_CREATE_SPL_ERROR					    	31
#define DOBBY_RECV_RESPONSE_UNFINISHED				    32
//#define DOBBY_ERROR_PLAYER_CANNOTCONNECT                33
#define DOBBY_ERROR_PLAYER_TCPSEND                      34
#define DOBBY_ERROR_NO_CPLUUID_FOUND_BY_SPLID           35
//#define DOBBY_ERROR_CREATE_SCHEDULE_CONFLICT            41

#define DOBBY_ERROR_GETPLAYBACK_STATUS                  45

const int ERROR_PLAYER_DOBBY_RESPONSE_FORMAT_ERROR           = Dobby_ERROR_Code_Base_Value + DOBBY_RESPONSE_FORMAT_ERROR;
const int ERROR_PLAYER_DOBBY_RESPONSE_STATUS_ERROR           = Dobby_ERROR_Code_Base_Value + DOBBY_RESPONSE_STATUS_ERROR;
const int ERROR_PLAYER_DOBBY_COMMUNICATION_WITH_PROJECTOR    = Dobby_ERROR_Code_Base_Value + DOBBY_ERROR_COMMUNICATION_WITH_PROJECTOR;
const int ERROR_PLAYER_DOBBY_DUPLICATED_TASK_FOUND		     = Dobby_ERROR_Code_Base_Value + DOBBY_DUPLICATED_TASK_FOUND;
const int ERROR_PLAYER_DOBBY_NO_SPL_FOUND					 = Dobby_ERROR_Code_Base_Value + DOBBY_NO_SPL_FOUND_WITH_THE_SPECIFIED_UUID;
const int ERROR_PLAYER_DOBBY_NO_ASSET_FOUND				     = Dobby_ERROR_Code_Base_Value + DOBBY_NO_ASSET_FOUND_WITH_THE_SPECIFIED_UUID;
const int ERROR_PLAYER_DOBBY_UNABLE_TO_PLAY_SHOW			 = Dobby_ERROR_Code_Base_Value + DOBBY_UNABLE_TO_PLAY_SHOW;
const int ERROR_PLAYER_DOBBY_NOT_PAUSED_STATUS				 = Dobby_ERROR_Code_Base_Value + DOBBY_NOT_PAUSED_STATUS;
const int ERROR_PLAYER_DOBBY_DCPINFO_INIT_ERROR				 = Dobby_ERROR_Code_Base_Value + DOBBY_DCPINFO_INIT_ERROR;
const int ERROR_PLAYER_DOBBY_ERROR_CPL_XML_FORMAT			 = Dobby_ERROR_Code_Base_Value + DOBBY_ERROR_CPL_XML_FORMAT;
const int ERROR_PLAYER_DOBBY_ERROR_SPL_XML_FORMAT			 = Dobby_ERROR_Code_Base_Value + DOBBY_ERROR_SPL_XML_FORMAT;
const int ERROR_PLAYER_DOBBY_NOT_STOPPED_OR_PAUSED_STATUS	 = Dobby_ERROR_Code_Base_Value + DOBBY_NOT_STOPPED_OR_PAUSED_STATUS;
const int ERROR_PLAYER_DOBBY_NOT_PLAYING_STATUS				 = Dobby_ERROR_Code_Base_Value + DOBBY_NOT_PLAYING_STATUS;
const int ERROR_PLAYER_DOBBY_NOT_PLAYING_OR_PAUSED_STATUS	 = Dobby_ERROR_Code_Base_Value + DOBBY_NOT_PLAYING_OR_PAUSED_STATUS;
const int ERROR_PLAYER_DOBBY_NO_PLAYBACK_STATUS				 = Dobby_ERROR_Code_Base_Value + DOBBY_NO_PLAYBACK_STATUS;
const int ERROR_PLAYER_DOBBY_NOT_SUPPORT_API				 = Dobby_ERROR_Code_Base_Value + DOBBY_NOT_SUPPORT_API;
const int ERROR_PLAYER_DOBBY_CREATE_SCHEDULE_ERROR			 = Dobby_ERROR_Code_Base_Value + DOBBY_CREATE_SCHEDULE_ERROR;
const int ERROR_PLAYER_DOBBY_GET_CPLINFO_ERROR				 = Dobby_ERROR_Code_Base_Value + DOBBY_GET_CPLINFO_ERROR;
const int ERROR_PLAYER_DOBBY_CREATESPL_ERROR				 = Dobby_ERROR_Code_Base_Value + DOBBY_CREATESPL_ERROR;
const int ERROR_PLAYER_DOBBY_INGEST_KDM_TIMEOUT				 = Dobby_ERROR_Code_Base_Value + DOBBY_INGEST_KDM_TIMEOUT;
const int ERROR_PLAYER_DOBBY_FTP_PARSER_ERROR				 = Dobby_ERROR_Code_Base_Value + DOBBY_FTP_PARSER_ERROR;
const int ERROR_PLAYER_DOBBY_RECV_RESPONSE_TIMEOUT			 = Dobby_ERROR_Code_Base_Value + DOBBY_RECV_RESPONSE_TIMEOUT;
const int ERROR_PLAYER_DOBBY_RECV_RESPONSE_ERROR			 = Dobby_ERROR_Code_Base_Value + DOBBY_RECV_RESPONSE_ERROR;
const int ERROR_PLAYER_DOBBY_CREATE_SPL_ERROR				 = Dobby_ERROR_Code_Base_Value + DOBBY_CREATE_SPL_ERROR;
const int ERROR_PLAYER_DOBBY_RECV_RESPONSE_UNFINISHED		 = Dobby_ERROR_Code_Base_Value + DOBBY_RECV_RESPONSE_UNFINISHED;
//const int ERROR_PLAYER_DOBBY_ERROR_PLAYER_CANNOTCONNECT		 = Dobby_ERROR_Code_Base_Value + DOBBY_ERROR_PLAYER_CANNOTCONNECT;
const int ERROR_PLAYER_DOBBY_ERROR_PLAYER_CANNOTCONNECT		 = 103;
const int ERROR_PLAYER_DOBBY_ERROR_PLAYER_TCPSEND		     = Dobby_ERROR_Code_Base_Value + DOBBY_ERROR_PLAYER_TCPSEND;
const int ERROR_PLAYER_DOBBY_NO_CPLUUID_FOUND_BY_SPLID		 = Dobby_ERROR_Code_Base_Value + DOBBY_ERROR_NO_CPLUUID_FOUND_BY_SPLID;
//const int ERROR_PLAYER_DOBBY__CREATE_SCHEDULE_CONFLICT		 = Dobby_ERROR_Code_Base_Value + DOBBY_ERROR_CREATE_SCHEDULE_CONFLICT;
const int ERROR_PLAYER_DOBBY__CREATE_SCHEDULE_CONFLICT		 = 102;

//���ӵ���������룬���ر���ô�����C_Dobby3D::GetPlayBackStatus()�йء�
const int ERROR_PLAYER_DOBBY_ERROR_GETPLAYBACK_STATUS		 = Dobby_ERROR_Code_Base_Value + DOBBY_ERROR_GETPLAYBACK_STATUS;


//duheqing 2013-7-8
const int ERROR_PLAYER_DOLBY_RESPONSEFORMATERROR = -2001;
const int ERROR_PLAYER_DOLBY_RESPONSESTATUSERROR = -2002;
const int ERROR_PLAYER_DOLBY_BADFTPURL = -2028;
const int ERROR_PLAYER_DOLBY_PLAYERISPLAYING = -2039;
const int ERROR_PLAYER_DOLBY_PLAYERISWORKING = -2045;

//WARNING
const int WARNING_DCS_DISK_LOW = 1;
//INFO

//subModule:0001 DCS end

//subModule:0x000 projector

//ERROR
const int ERROR_PROJECTOR_NEC_CANNOTCONNECT = -3001;//can not connect the projector
const int ERROR_PROJECTOR_NEC_TCPTRANSPORTFAILED = -3002;//tcp transport failed
const int ERROR_PROJECTOR_NEC_PARAMETERERROR = -3003;//function get a bad parameter
const int ERROR_PROJECTOR_NEC_OPERATORFAILED = -3004;//projector error, operator failed
const int ERROR_PROJECTOR_NEC_CANNOTCONTROL = -3005;//can not control the projector in current status

//projector BARCOʹ��1001-2000
#define BARCO_ERROR_CODE_BASE_VALUE				     	    1000
#define BARCO_ERROR_PROJECTOR_CANNOTCONNECT					1		//can not connect the projector
#define BARCO_ERROR_PROJECTOR_TCPTRANSPORTFAILED			2		//tcp transport failed
#define BARCO_ERROR_PROJECTOR_PARAMETERERROR				3		//function get a bad parameter
#define BARCO_ERROR_PROJECTOR_OPERATORFAILED				4		//projector error, operator failed
#define BARCO_ERROR_PROJECTOR_CANNOTCONTROL					5		//can not control the projector in current status
#define BARCO_ERROR_PROJECTOR_UNSUPPORT						6		//can not unsupport.

const int ERROR_PROJECTOR_BARCO_CANNOTCONNECT		 = BARCO_ERROR_CODE_BASE_VALUE + BARCO_ERROR_PROJECTOR_CANNOTCONNECT;
const int ERROR_PROJECTOR_BARCO_TCPTRANSPORTFAILED	 = BARCO_ERROR_CODE_BASE_VALUE + BARCO_ERROR_PROJECTOR_TCPTRANSPORTFAILED;
const int ERROR_PROJECTOR_BARCO_PARAMETERERROR		 = BARCO_ERROR_CODE_BASE_VALUE + BARCO_ERROR_PROJECTOR_PARAMETERERROR;
const int ERROR_PROJECTOR_BARCO_OPERATORFAILED		 = BARCO_ERROR_CODE_BASE_VALUE + BARCO_ERROR_PROJECTOR_OPERATORFAILED;
const int ERROR_PROJECTOR_BARCO_CANNOTCONTROL		 = BARCO_ERROR_CODE_BASE_VALUE + BARCO_ERROR_PROJECTOR_CANNOTCONTROL;
const int ERROR_PROJECTOR_BARCO_UNSUPPORT			 = BARCO_ERROR_CODE_BASE_VALUE + BARCO_ERROR_PROJECTOR_UNSUPPORT;

//projector ����ʹ��2001-3000
#define CHRISTIE_ERROR_CODE_BASE_VALUE				     	    2000
#define CHRISTIE_ERROR_PROJECTOR_CANNOTCONNECT					1		//can not connect the projector
#define CHRISTIE_ERROR_PROJECTOR_TCPTRANSPORTFAILED				2		//tcp transport failed
#define CHRISTIE_ERROR_PROJECTOR_PARAMETERERROR					3		//function get a bad parameter
#define CHRISTIE_ERROR_PROJECTOR_OPERATORFAILED					4		//projector error, operator failed
#define CHRISTIE_ERROR_PROJECTOR_CANNOTCONTROL					5		//can not control the projector in current status
#define CHRISTIE_ERROR_PROJECTOR_UNSUPPORT						6		//can not unsupport.
const int ERROR_PROJECTOR_CHRISTIE_CANNOTCONNECT		 = CHRISTIE_ERROR_CODE_BASE_VALUE + CHRISTIE_ERROR_PROJECTOR_CANNOTCONNECT;
const int ERROR_PROJECTOR_CHRISTIE_TCPTRANSPORTFAILED	 = CHRISTIE_ERROR_CODE_BASE_VALUE + CHRISTIE_ERROR_PROJECTOR_TCPTRANSPORTFAILED;
const int ERROR_PROJECTOR_CHRISTIE_PARAMETERERROR		 = CHRISTIE_ERROR_CODE_BASE_VALUE + CHRISTIE_ERROR_PROJECTOR_PARAMETERERROR;
const int ERROR_PROJECTOR_CHRISTIE_OPERATORFAILED		 = CHRISTIE_ERROR_CODE_BASE_VALUE + CHRISTIE_ERROR_PROJECTOR_OPERATORFAILED;
const int ERROR_PROJECTOR_CHRISTIE_CANNOTCONTROL		 = CHRISTIE_ERROR_CODE_BASE_VALUE + CHRISTIE_ERROR_PROJECTOR_CANNOTCONTROL;
const int ERROR_PROJECTOR_CHRISTIE_UNSUPPORT			 = CHRISTIE_ERROR_CODE_BASE_VALUE + CHRISTIE_ERROR_PROJECTOR_UNSUPPORT;

//projector Sonyʹ��4001-5000
const int ERROR_PROJECTOR_SONY_CANNOTCONNECT        =   -4001;		//can not connect the projector
const int ERROR_PROJECTOR_SONY_TCPTRANSPORTFAILED   =   -4002;		//tcp transport failed
const int ERROR_PROJECTOR_SONY_PARAMETERERROR       =   -4003;		//function get a bad parameter
const int ERROR_PROJECTOR_SONY_OPERATORFAILED       =   -4004;		//projector error, operator failed
const int ERROR_PROJECTOR_SONY_CANNOTCONTROL        =   -4005;		//can not control the projector in current status
const int ERROR_PROJECTOR_SONY_UNSUPPORT            =   -4006;		//can not unsupport.
const int ERROR_PROJECTOR_SONY_XMLPARSER_FAILED	    =   -4007;		//xml message error, operator failed


//WARNING

//INFO

//subModule:0010 projector end

//subModule:0011 AudioDevice

//ERROR
const int ERROR_AUDIO_CP_CANNOTCONNECT = -1001;//can not connect the audio server
const int ERROR_AUDIO_CP_TCPTRANSPORTFAILED = -1002;//tcp transport failed
const int ERROR_AUDIO_CP_PARAMETERERROR = -1003;//function get a bad parameter
const int ERROR_AUDIO_CP_OPERATORFAILED = -1004;//audio error, operator failed

//Audio Device Enpar DCP Series  
#define ENPAR_DCP_ERROR_CODE_BASE_VALUE				     			2000
//DCP1000 ʹ�� 2101 - 2200
#define AUDIO_DCP_1000_ERROR_CANNOTCONNECT							101		//can not connect the audio server
#define AUDIO_DCP_1000_ERROR_UDPTRANSPORTFAILED						102	    //udp transport failed
#define AUDIO_DCP_1000_ERROR_PARAMETERERROR				     	    103		//function get a bad parameter
#define AUDIO_DCP_1000_ERROR_OPERATORFAILED						    104		//audio error, operator failed
#define AUDIO_DCP_1000_ERROR_PARSER_FAILED				    	    105		//message error, operator failed
const int ERROR_AUDIO_DCP1000_CANNOTCONNECT           = ENPAR_DCP_ERROR_CODE_BASE_VALUE + AUDIO_DCP_1000_ERROR_CANNOTCONNECT;
const int ERROR_AUDIO_DCP1000_TCPTRANSPORTFAILED      = ENPAR_DCP_ERROR_CODE_BASE_VALUE + AUDIO_DCP_1000_ERROR_UDPTRANSPORTFAILED;
const int ERROR_AUDIO_DCP1000_PARAMETERERROR          = ENPAR_DCP_ERROR_CODE_BASE_VALUE + AUDIO_DCP_1000_ERROR_PARAMETERERROR;
const int ERROR_AUDIO_DCP1000_OPERATORFAILED          = ENPAR_DCP_ERROR_CODE_BASE_VALUE + AUDIO_DCP_1000_ERROR_OPERATORFAILED;
const int ERROR_AUDIO_DCP1000_PARSER_FAILED           = ENPAR_DCP_ERROR_CODE_BASE_VALUE + AUDIO_DCP_1000_ERROR_PARSER_FAILED;

//DCP1500 ʹ�� 2201 - 2300
#define AUDIO_DCP_1500_ERROR_CANNOTCONNECT							201		//can not connect the audio server
#define AUDIO_DCP_1500_ERROR_UDPTRANSPORTFAILED						202	    //udp transport failed
#define AUDIO_DCP_1500_ERROR_PARAMETERERROR				     	    203		//function get a bad parameter
#define AUDIO_DCP_1500_ERROR_OPERATORFAILED						    204		//audio error, operator failed
#define AUDIO_DCP_1500_ERROR_PARSER_FAILED				    	    205		//message error, operator failed
const int ERROR_AUDIO_DCP1500_CANNOTCONNECT           = ENPAR_DCP_ERROR_CODE_BASE_VALUE + AUDIO_DCP_1500_ERROR_CANNOTCONNECT;
const int ERROR_AUDIO_DCP1500_TCPTRANSPORTFAILED      = ENPAR_DCP_ERROR_CODE_BASE_VALUE + AUDIO_DCP_1500_ERROR_UDPTRANSPORTFAILED;
const int ERROR_AUDIO_DCP1500_PARAMETERERROR          = ENPAR_DCP_ERROR_CODE_BASE_VALUE + AUDIO_DCP_1500_ERROR_PARAMETERERROR;
const int ERROR_AUDIO_DCP1500_OPERATORFAILED          = ENPAR_DCP_ERROR_CODE_BASE_VALUE + AUDIO_DCP_1500_ERROR_OPERATORFAILED;
const int ERROR_AUDIO_DCP1500_PARSER_FAILED           = ENPAR_DCP_ERROR_CODE_BASE_VALUE + AUDIO_DCP_1500_ERROR_PARSER_FAILED;

//DCP600  ʹ�� 2301 - 2400
#define AUDIO_DCP_600_ERROR_CANNOTCONNECT							301		//can not connect the audio server
#define AUDIO_DCP_600_ERROR_UDPTRANSPORTFAILED						302	    //udp transport failed
#define AUDIO_DCP_600_ERROR_PARAMETERERROR				     	    303		//function get a bad parameter
#define AUDIO_DCP_600_ERROR_OPERATORFAILED						    304		//audio error, operator failed
#define AUDIO_DCP_600_ERROR_PARSER_FAILED				    	    305		//message error, operator failed
const int ERROR_AUDIO_DCP600_CANNOTCONNECT           = ENPAR_DCP_ERROR_CODE_BASE_VALUE + AUDIO_DCP_600_ERROR_CANNOTCONNECT;
const int ERROR_AUDIO_DCP600_TCPTRANSPORTFAILED      = ENPAR_DCP_ERROR_CODE_BASE_VALUE + AUDIO_DCP_600_ERROR_UDPTRANSPORTFAILED;
const int ERROR_AUDIO_DCP600_PARAMETERERROR          = ENPAR_DCP_ERROR_CODE_BASE_VALUE + AUDIO_DCP_600_ERROR_PARAMETERERROR;
const int ERROR_AUDIO_DCP600_OPERATORFAILED          = ENPAR_DCP_ERROR_CODE_BASE_VALUE + AUDIO_DCP_600_ERROR_OPERATORFAILED;
const int ERROR_AUDIO_DCP600_PARSER_FAILED           = ENPAR_DCP_ERROR_CODE_BASE_VALUE + AUDIO_DCP_600_ERROR_PARSER_FAILED;


//Audio Device Oristar A2200��M38�� ʹ�� 5201- 5300
#define ORISTAR_ERROR_CODE_BASE_VALUE				     	    	5000
#define AUDIO_ORISTAR_A2200_ERROR_CANNOTCONNECT						201		//can not connect the audio server
#define AUDIO_ORISTAR_A2200_ERROR_TCPTRANSPORTFAILED				202	    //tcp transport failed
#define AUDIO_ORISTAR_A2200_ERROR_PARAMETERERROR				    203		//function get a bad parameter
#define AUDIO_ORISTAR_A2200_ERROR_OPERATORFAILED				    204		//audio error, operator failed
#define AUDIO_ORISTAR_A2200_ERROR_PARSER_FAILED				        205		//message error, operator failed
const int ERROR_AUDIO_A2200_CANNOTCONNECT           = ORISTAR_ERROR_CODE_BASE_VALUE + AUDIO_ORISTAR_A2200_ERROR_CANNOTCONNECT;
const int ERROR_AUDIO_A2200_TCPTRANSPORTFAILED      = ORISTAR_ERROR_CODE_BASE_VALUE + AUDIO_ORISTAR_A2200_ERROR_TCPTRANSPORTFAILED;
const int ERROR_AUDIO_A2200_PARAMETERERROR          = ORISTAR_ERROR_CODE_BASE_VALUE + AUDIO_ORISTAR_A2200_ERROR_PARAMETERERROR;
const int ERROR_AUDIO_A2200_OPERATORFAILED          = ORISTAR_ERROR_CODE_BASE_VALUE + AUDIO_ORISTAR_A2200_ERROR_OPERATORFAILED;
const int ERROR_AUDIO_A2200_PARSER_FAILED           = ORISTAR_ERROR_CODE_BASE_VALUE + AUDIO_ORISTAR_A2200_ERROR_PARSER_FAILED;


//Audio Device QSC DCP Series 
#define QSC_DCP_ERROR_CODE_BASE_VALUE				     			7000
#define AUDIO_QSC_DCP_ERROR_CANNOTCONNECT							101		//can not connect the audio server
#define AUDIO_QSC_DCP_ERROR_TCPTRANSPORTFAILED						102	    //tcp transport failed
#define AUDIO_QSC_DCP_ERROR_PARAMETERERROR				     	    103		//function get a bad parameter
#define AUDIO_QSC_DCP_ERROR_OPERATORFAILED						    104		//audio error, operator failed
#define AUDIO_QSC_DCP_ERROR_XMLPARSER_FAILED					    105		//xml message error, operator failed
const int ERROR_AUDIO_QSCDCP_CANNOTCONNECT      = QSC_DCP_ERROR_CODE_BASE_VALUE + AUDIO_QSC_DCP_ERROR_CANNOTCONNECT;
const int ERROR_AUDIO_QSCDCP_TCPTRANSPORTFAILED = QSC_DCP_ERROR_CODE_BASE_VALUE + AUDIO_QSC_DCP_ERROR_TCPTRANSPORTFAILED;
const int ERROR_AUDIO_QSCDCP_PARAMETERERROR     = QSC_DCP_ERROR_CODE_BASE_VALUE + AUDIO_QSC_DCP_ERROR_PARAMETERERROR;
const int ERROR_AUDIO_QSCDCP_OPERATORFAILED     = QSC_DCP_ERROR_CODE_BASE_VALUE + AUDIO_QSC_DCP_ERROR_OPERATORFAILED;
const int ERROR_AUDIO_QSCDCP_XMLPARSER_FAILED   = QSC_DCP_ERROR_CODE_BASE_VALUE + AUDIO_QSC_DCP_ERROR_XMLPARSER_FAILED;

//Audio Device USL JSD Series 
#define USL_JSD_ERROR_CODE_BASE_VALUE				     			8000
#define AUDIO_JSD_100_ERROR_CANNOTCONNECT							101		//can not connect the audio server
#define AUDIO_JSD_100_ERROR_TCPTRANSPORTFAILED						102	    //tcp transport failed
#define AUDIO_JSD_100_ERROR_PARAMETERERROR				     	    103		//function get a bad parameter
#define AUDIO_JSD_100_ERROR_OPERATORFAILED						    104		//audio error, operator failed
#define AUDIO_JSD_100_ERROR_PARSER_FAILED				    	    105		//message error, operator failed
const int ERROR_AUDIO_JSD100_CANNOTCONNECT           = USL_JSD_ERROR_CODE_BASE_VALUE + AUDIO_JSD_100_ERROR_CANNOTCONNECT;
const int ERROR_AUDIO_JSD100_TCPTRANSPORTFAILED      = USL_JSD_ERROR_CODE_BASE_VALUE + AUDIO_JSD_100_ERROR_TCPTRANSPORTFAILED;
const int ERROR_AUDIO_JSD100_PARAMETERERROR          = USL_JSD_ERROR_CODE_BASE_VALUE + AUDIO_JSD_100_ERROR_PARAMETERERROR;
const int ERROR_AUDIO_JSD100_OPERATORFAILED          = USL_JSD_ERROR_CODE_BASE_VALUE + AUDIO_JSD_100_ERROR_OPERATORFAILED;
const int ERROR_AUDIO_JSD100_PARSER_FAILED           = USL_JSD_ERROR_CODE_BASE_VALUE + AUDIO_JSD_100_ERROR_PARSER_FAILED;

//Audio Device Dolby CP650 Series  CP650ʹ�� 8201-8300 
#define DOLBY_CP650_ERROR_CODE_BASE_VALUE				     		    8000
#define AUDIO_DOLBY_CP650_ERROR_CANNOTCONNECT							201		//can not connect the audio server
#define AUDIO_DOLBY_CP650_ERROR_TCPTRANSPORTFAILED						202	    //tcp transport failed
#define AUDIO_DOLBY_CP650_ERROR_PARAMETERERROR				     	    203		//function get a bad parameter
#define AUDIO_DOLBY_CP650_ERROR_OPERATORFAILED						    204		//audio error, operator failed
#define AUDIO_DOLBY_CP650_ERROR_PARSER_FAILED				    	    205		//message error, operator failed
const int ERROR_AUDIO_CP650_CANNOTCONNECT           = DOLBY_CP650_ERROR_CODE_BASE_VALUE + AUDIO_DOLBY_CP650_ERROR_CANNOTCONNECT;
const int ERROR_AUDIO_CP650_TCPTRANSPORTFAILED      = DOLBY_CP650_ERROR_CODE_BASE_VALUE + AUDIO_DOLBY_CP650_ERROR_TCPTRANSPORTFAILED;
const int ERROR_AUDIO_CP650_PARAMETERERROR          = DOLBY_CP650_ERROR_CODE_BASE_VALUE + AUDIO_DOLBY_CP650_ERROR_PARAMETERERROR;
const int ERROR_AUDIO_CP650_OPERATORFAILED          = DOLBY_CP650_ERROR_CODE_BASE_VALUE + AUDIO_DOLBY_CP650_ERROR_OPERATORFAILED;
const int ERROR_AUDIO_CP650_PARSER_FAILED           = DOLBY_CP650_ERROR_CODE_BASE_VALUE + AUDIO_DOLBY_CP650_ERROR_PARSER_FAILED;


//add cy
//Audio Device CP850
const int ERROR_AUDIO_CP850_CANNOTCONNECT = -9001;//can not connect the audio server
const int ERROR_AUDIO_CP850_TCPTRANSPORTFAILED = -9002;//tcp transport failed
const int ERROR_AUDIO_CP850_PARAMETERERROR = -9003;//function get a bad parameter
const int ERROR_AUDIO_CP850_OPERATORFAILED = -9004;//audio error, operator failed
const int ERROR_AUDIO_CP850_XMLPARSER_FAILED = -9005;//bad xml
//end

//WARNING

//INFO

//subModule:0011 AudioDevice end

//subModule:0100 PowerDevice
const int ERROR_POWER_CONNECT_NO = 1; //������豸�޷����ӡ�
//ERROR
//�����Trd60ʹ��1001-2000
#define TRD60_ERROR_CODE_BASE_VALUE                 1000
#define TRD60_ERROR_POWER_UDPTRANSPORTFAILED		1		//udp transport failed
#define TRD60_ERROR_POWER_PARAMETERERROR			2		//function get a bad parameter
#define TRD60_ERROR_POWER_OPERATORFAILED		    3		//power error, operator failed

const int ERROR_POWER_TRD60_UDPTRANSPORTFAILED = TRD60_ERROR_CODE_BASE_VALUE + TRD60_ERROR_POWER_UDPTRANSPORTFAILED;
const int ERROR_POWER_TRD60_PARAMETERERROR     = TRD60_ERROR_CODE_BASE_VALUE + TRD60_ERROR_POWER_PARAMETERERROR;
const int ERROR_POWER_TRD60_OPERATORFAILED     = TRD60_ERROR_CODE_BASE_VALUE + TRD60_ERROR_POWER_OPERATORFAILED;

//���������֣������Oristarʹ��2001-3000
const int ERROR_POWER_ORISTAR_SEND_RECV = 2001; //���������ʱЭ�鷵�ش���
const int ERROR_POWER_ORISTAR_INPORT_PARA = 2002; // ����ʱ���ݲ�������
const int ERROR_POWER_ORISTAR_CHANNEL_NOT_SET = 2003; // Ӱ����Ӧ������������ݿ��hall_box ��Ϊ�������á�

//���������֣��ƹ������ ���-TG ʹ��3001-4000
#define TJ_ERROR_CODE_BASE_VALUE                3000
#define TJ_ERROR_POWER_CANNOTCONNECT            1
#define TJ_ERROR_POWER_TCPTRANSPORTFAILED		2		//tcp transport failed
#define TJ_ERROR_POWER_PARAMETERERROR			3		//function get a bad parameter
#define TJ_ERROR_POWER_OPERATORFAILED		    4		//power error, operator failed
#define TJ_ERROR_POWER_UNSUPPORT    		    5		//can not support

const int ERROR_POWER_TJ_CANNOT_CONNECTED          = TJ_ERROR_CODE_BASE_VALUE + TJ_ERROR_POWER_CANNOTCONNECT;
const int ERROR_POWER_TJ_TCP_TRANSPORT_FAILED      = TJ_ERROR_CODE_BASE_VALUE + TJ_ERROR_POWER_TCPTRANSPORTFAILED;
const int ERROR_POWER_TJ_PARAMETER_ERROR           = TJ_ERROR_CODE_BASE_VALUE + TJ_ERROR_POWER_PARAMETERERROR;
const int ERROR_POWER_TJ_OPERATOR_FAILED           = TJ_ERROR_CODE_BASE_VALUE + TJ_ERROR_POWER_OPERATORFAILED;
const int ERROR_POWER_TJ_UN_SUPPORTED              = TJ_ERROR_CODE_BASE_VALUE + TJ_ERROR_POWER_UNSUPPORT;

//���������֣������ Poly ʹ��4001-4200
#define PY_ERROR_CODE_BASE_VALUE                4000
#define PY_ERROR_POWER_CANNOTCONNECT            1		//can not connect
#define PY_ERROR_POWER_TCPTRANSPORTFAILED		2		//tcp transport failed
#define PY_ERROR_POWER_PARAMETERERROR			3		//function get a bad parameter
#define PY_ERROR_POWER_OPERATORFAILED		    4		//power error, operator failed
#define PY_ERROR_POWER_UNSUPPORT    		    5		//can not support
const int ERROR_POWER_PY_CANNOT_CONNECTED          = PY_ERROR_CODE_BASE_VALUE + PY_ERROR_POWER_CANNOTCONNECT;
const int ERROR_POWER_PY_TCP_TRANSPORT_FAILED      = PY_ERROR_CODE_BASE_VALUE + PY_ERROR_POWER_TCPTRANSPORTFAILED;
const int ERROR_POWER_PY_PARAMETER_ERROR           = PY_ERROR_CODE_BASE_VALUE + PY_ERROR_POWER_PARAMETERERROR;
const int ERROR_POWER_PY_OPERATOR_FAILED           = PY_ERROR_CODE_BASE_VALUE + PY_ERROR_POWER_OPERATORFAILED;
const int ERROR_POWER_PY_UN_SUPPORTED              = PY_ERROR_CODE_BASE_VALUE + PY_ERROR_POWER_UNSUPPORT;


//WARNING

//INFO

// ����俪�ؿ�ʼ�л�
const int INFO_POWER_ORISTAR_START_SWITCH = 2001;
//����俪���л��ɹ�
const int INFO_POWER_ORISTAR_SWITCH_SUCCESS = 2002;

//subModule:0100 PowerDevice end


//subModule:1111 TcpSocket

//ERROR
const int SOCKET_WIN_ENVIRONMENT_ERROR   = 0x0001;   //Windows��������
const int SOCKET_NULL_FD                 = 0x0002;   //�յ�socket�ļ���������
const int SOCKET_CALL_SYSAPI_ERR         = 0x0003;	//����ϵͳAPI����
const int SOCKET_PARAR_ERR               = 0x0004;  	//�����������


//========SOCKET SERVER�˴�����==============================//
const int SERVER_SOCK_INI_ERR            = 0x1000;	//server��socket��ʼ������
const int SERVER_SOCK_BIND_ERR           = 0x1001;	//server��bind����
const int SERVER_SOCK_LISTEN_ERR         = 0x1002;	//server��listen����
const int SERVER_SOCK_ACCEPT_ERR         = 0x1003;	//server��accept����

//========SOCKET CLIENT�˴�����==============================//
const int CLIENT_SOCK_INI_ERR            = 0x2000;	//client��socket��ʼ������
const int CLIENT_SOCK_BIND_ERR           = 0x2001;	//client��bind����
const int CLIENT_SOCK_CONNECT_ERR        = 0x2003;	//client��connect����
const int CLIENT_SOCK_CONNECT_TIMEOUT    = 0x2004;	//client��connect��ʱ

//========SOCKET CONNECTION������==============================//
const int CONN_READ_PARA_ERR             = 0x3000;	//���Ӷ����������������
const int CONN_READ_CALL_ERR             = 0x3001;	//���Ӷ��������ô���
const int CONN_READ_SELECT_ERR           = 0x3002;	//���Ӷ�����select����
const int CONN_READ_TIMEOUT              = 0x3003;	//���Ӷ�������ʱ
const int CONN_READ_RECV_FAIL            = 0x3004;	//���Ӷ�����recv����
const int CONN_WRITE_PARA_ERR            = 0x3005;	//����д���������������
const int CONN_WRITE_CALL_ERR            = 0x3006;	//����д�������ô���
const int CONN_WRITE_SELECT_ERR          = 0x3007;	//����д����elect����
const int CONN_WRITE_TIMEOUT             = 0x3008;	//����д������ʱ
const int CONN_WRITE_SEND_FAIL           = 0x3009;	//����д����send����
const int CONN_PEER_TERMINATOR           = 0x300a;	//���ӶԶ˹ر�

//WARNING


//INFO

//subModule:1111 TcpSocket end

//Device manage end;

//Log Manage Module:24 subModule 0
//ERROR
//�ڴ���ʴ��� pLogManage û�б����Ի���
c_u_int ERROR_MEMORY_NOT_INIT = 0x0001;

//��ģ���ź���ģ���Ŷ�Ӧ����־��û���ҵ���
c_u_int ERROR_NOT_FIND_LOG_TYPE = 0x0002;
// ��ȡ��־��Ŀ¼���Դ���
c_u_int ERROR_GET_LOG_BOOT_PATH = 0x0003;
//������־Ŀ¼����
c_u_int ERROR_CREATE_LOG_PATH = 0x0004;
//��ȡĿ¼���Դ���
c_u_int ERROR_GET_LOG_PATH = 0x0005;
//ɾ�����ڵ���־����
c_u_int ERROR_DELETE_PRE_LOG = 0x0006;
//��־�������ô���
c_u_int ERROR_DELETE_LEVEL = 0x0007;  //
//��־ģ�������ô���
c_u_int ERROR_DELETE_MODULE = 0x0007;  //
//��־ģ�������ô���
c_u_int ERROR_DELETE_SUB_MODULE = 0x0008;  //
//WARNING

//INFO

//Log Manage end

//Content Manage Module: 19, subModule: 0000

//ERROR 
// ��ȡFTP DCP�б�ʱ�ڲ�״̬����
const int ERROR_FTP_DCP_CHECK_STATE = 0x0001;
// ����ִ��KDM���������޷�ִ�д˲�����
const int ERROR_KDM_OPERATING = 0x0002;
//KDM���ڷַ��޷�ִ�д˲�����
//const int ERROR_KDM_DISPATCHING = 0x0003;
//ָ����·���²�����dcp �޷����롣
const int ERROR_DCP_NO_EXIST = 0x0004;
//��ǰϵͳ����ִ�е�����������޷�ִ�д˲�����
const int ERROR_DCP_USER_IMPORT_CHECK = 0x0006;
//��Ҫ�����ӰƬ�ڵ���ƬԴ�б��в����ڡ�
const int ERROR_IMPORT_DCP_NO_EXIST_IN_CHECK_LIST = 0x0007;
//��ȡ�ⲿ�洢��DCP�б�ʱ�ڲ�״̬����
const int ERROR_DCP_CHECK_STATE = 0x0008;
//�ַ�ʱ�ڲ�״̬����
const int ERROR_DISPATCH_STATE = 0x0009;
//�ַ�ʱ���ڷ�ӳ�������޷����ӣ����·ַ��޷����С�
const int ERROR_DISPATCH_NO_CONNECT_DCS = 0x000a;
//�ַ�ʱ���ڷ�ӳ���������ڽ��зַ����������·ַ��޷����С�
const int ERROR_DISPATCH_DISPATCHING_DCS = 0x000b;
//�ַ�ʱ���ڷ�ӳ���������ڵ���kdm�����·ַ��޷����С�
const int ERROR_DISPATCH_IMPORTING_KDM_DCS = 0x000c;
//��Ҫɾ����KDM�����ݿ��в����ڡ�
const int ERROR_KDM_NO_EXIST = 0x000d;
//ִ��ɾ��KDM�����ݿ����ʧ�ܡ�
const int ERROR_KDM_DELETE_DB = 0x000e;
// �ַ������Ѿ�����޷�ȡ����
const int ERROR_DISPATCH_FINISH_NO_CANCEL = 0x000f;
// �ַ������ڷַ��б��в����ڡ�
const int ERROR_DISPATCH_NO_EXIST_IN_LIST = 0x0010;
// ��ǰ�ַ���������ִ���޷��޸�ʱ�䡣
const int ERROR_DISPATCH_RUNNING_NO_MODIFY_TIME = 0x0011;
// ��ǰ�ַ������Ѿ�����޷��޸�ʱ�䡣
const int ERROR_DISPATCH_FINISH_NO_MODIFY_TIME = 0x0012;
// ��ǰ��ϣУ�����ڽ���,�޷���ʼ��ϣУ�顣
const int ERROR_HASH_RUNNING_NO_START = 0x0013;
//��ǰ���ڻ�ȡDCP�б��޷����й�ϣУ�顣
const int ERROR_HASH_GETTING_DCP_NO_START = 0x0014;
//��ǰ���ڵ���KDM�޷����й�ϣУ�顣
const int ERROR_HASH_IMPORTING_KDM_NO_START = 0x0015;
//��ǰ���ڵ���DCP�޷����й�ϣУ�顣
const int ERROR_HASH_IMPORTING_DCP_NO_START = 0x0016;
//��ǰ���ڷַ�DCP�޷����й�ϣУ�顣
const int ERROR_HASH_DISPATCH_DCP_NO_START = 0x0017;
//�ַ������Ѿ����ڣ��ַ�ʧ�ܡ�
const int ERROR_DISPATCH_TASK_EXIST = 0x0018;
//���������Ѿ����ڣ�����ʧ�ܡ�
const int ERROR_IMPORT_TASK_EXIST = 0x0019;
//��ǰ���ڵ���DCP���˲����޷�����
const int ERROR_IMPORTING_DCP = 0x001a;
//��ǰ���ڵ���KDM���˲����޷�����
const int ERROR_IIMPORTING_KDM = 0x001b;
//��ǰ���ڷַ�DCP���޷�ִ�д˲�����
const int ERROR_DISPATCHING_DCP = 0x001c;
//��ǰ���ڻ�ȡDCP�б�,�޷�ִ�д˲�����
const int ERROR_GETTING_DCP_LIST = 0x001d;
//�����û�����ִ�е�����������Ժ����ԡ�
const int ERROR_OTHER_USER_IMPORTING = 0x001e;
//��Կ��������ָ������
const int ERROR_KDM_IMPORT_TYPE = 0x001f;
//��ȡ��Կ����·������
const int ERROR_GET_SAVE_KDM_PATAH = 0x0020;
//��ȡ��Կ����·������
const int ERROR_GET_IMPORT_KDM_PATAH = 0x0021;
//���������Ѿ���ɣ��޷�ȡ����
const int ERROR_IMPORT_TASK_FINISH_NO_CANCEL = 0x0022;
//û����Ҫ�����KDM��
const int ERROR_NO_NEED_IMPORT_KDM = 0x0023;
//�����û�����ִ�зַ����������Ժ����ԡ�
const int ERROR_OTHER_DISPATCH_OPERATE = 0x0024;
//�����û�����ִ��ȡ���ַ�DCP���������Ժ����ԡ�
const int ERROR_OTHER_CANCEL_DISPATCH = 0x0025;
//�����û�����ִ��ȡ������DCP���������Ժ����ԡ�
const int ERROR_OTHER_CANCEL_IMPORT = 0x0026;
//����ִ��ɾ��DCP���������Ժ����ԡ�
const int ERROR_DELETING_DCP = 0x0027;
//��ȡӰƬ��СΪ0�޷�ִ�зַ�������
const int ERROR_DCP_SIZE_0 = 0x0028;
//Ƭ����̿ռ����������޷����롣
const int ERROR_TMS_DISK_SIZE_LOW = 0x0029;
//���ַ�ӳ�������ռ����������޷��ַ���
const int ERROR_DCS_DISK_SIZE_LOW = 0x002a;
//ϵͳ��ʼ��δ��ɲ��ܽ��е����ַ�������
const int ERROR_INIT_NO_FINISH_NO_IMPORT_DISPATCH = 0x002b;
//ftp��ַ����ȷ��
const int ERROR_FTP_URL = 0x002c;


//
//���ݹ���ʹ��1001���ϵ�ֵ��
#define CONTENT_ERROR_CODE_BASE_VALUE				  1000
#define CONTENT_ERROR_FTP_TCPTRANSPORTFAILED					  1
#define CONTENT_ERROR_FTP_FILECANNOTOPEN						  2
#define CONTENT_ERROR_FTP_PARAMETERERROR						  3
#define CONTENT_ERROR_FTP_SERVICEERROR							  10
#define CONTENT_ERROR_FTP_UNKNOWERROR							  100
#define CONTENT_ERROR_FTP_CANCEL_TRANSFILE_ERROR				  20	//FtpClient::CancelTransFile() Error!

#define CONTENT_ERROR_KDM_GETKDMINFOERROR						  101	//GetKdmInfo error
#define CONTENT_ERROR_KDM_DELETEKDM_ERROR						  102	//"DeleteKdm() error!:bad Path"
#define CONTENT_ERROR_KDM_KDMINFOCOUNTISNULL_ERROR				  103	//error:KdmInfoCount is NULL !
#define CONTENT_ERROR_DCP_DONOT_FOUND_PKL						  120	//Do not found pkl
#define CONTENT_ERROR_DCP_PARAM_PATH_IS_NULL					  121	//"Param Path is Null!"
#define CONTENT_ERROR_DCP_UNABLE_TO_DELETE_DIR					  122	//Unable to delete directory
#define CONTENT_ERROR_DCP_PKL_UUID_ERROR						  123	//PklUuid is error
#define CONTENT_ERROR_DCP_CREATE_DCPINFO_ERROR    				  124	//error:CreateDCPInfo()
#define CONTENT_ERROR_DCP_COPY_NO_START							  125	//error:DCP Copy is NO START.
#define CONTENT_ERROR_DCP_PARAM_COPYINFO_ISNULL					  126	//Param copyInfo is NULL!
#define CONTENT_ERROR_DCP_COPYDOWNLOAD_NO_START					  127	//error:DCP DownLoad is NO START.
#define CONTENT_ERROR_DCP_PARSE_ASSETMAP_ERROR					  128	//parseAssetmap error!
#define CONTENT_ERROR_DCP_MAKE_DIR_FAIL 						  129	//Error:Make Directory fail.
#define CONTENT_ERROR_DCP_FILM_FILE_PATH_ISNULL 				  130	//Error:FilmFilePath is NULL!
#define CONTENT_ERROR_DCP_SEARCH_FTP_DCP_LIST 					  131	//error: SearchFtpDcpList
#define CONTENT_ERROR_DCP_SEARCH_DCP_LIST 						  132	//error: SearchDcpList
#define CONTENT_ERROR_DCP_UNABLE_TO_DELETE_ASSETMAP_DIR 		  133	//Unable to delete ASSSETMAP directory
#define CONTENT_ERROR_DCP_CHECKCPL_INVALID_FORFTP				  134	//Error:Check CPL Is InValid For FTP!
#define CONTENT_ERROR_DCP_PKL_FILE_NO_EXIST 					  135	//Error:PKL File(%s) no exist!
#define CONTENT_ERROR_DCP_PKL_FILE_COPY_FAILED 					  136	//PKL File copy Failed 
#define CONTENT_ERROR_DCP_PARAM_PKLNAME_IS_NULL_STR 			  137	//Error:Param pklName is Null string!
#define CONTENT_ERROR_DCP_ASSETMAP_IS_NO_EXIST 					  138	//Error:Assetmap(%s) is no exist!
#define CONTENT_ERROR_DCP_PARAM_ASSETMAPNAME_IS_NULL_STR 		  139	//Error:Param AssetmapName is Null string!
#define CONTENT_ERROR_DCP_FILE_COPY_FAILED 				          140	//File copy Failed
#define CONTENT_ERROR_DCP_FILECOPYNAME_IS_NULL 			          141	//Error:FileCopyName is NULL
#define CONTENT_ERROR_DCP_CPL_FILE_PATH_IS_NULL 			      142	//Error:CPL File Path Is NULL
#define CONTENT_ERROR_DCP_CPL_FILE_IS_NO_EXIST 					  143	//Error:CPL FILE is no exist!
#define CONTENT_ERROR_DCP_MXF_FILE_PATH_IS_NULL 				  144	//Error:mxf File Path Is NULL!
#define CONTENT_ERROR_DCP_MXF_FILE_IS_NO_EXIST 					  145	//Error:mxf File is no exist
#define CONTENT_ERROR_DCP_MXF_FILE_COPY_IS_UNFINISHED 			  146	//Error:mxf File copy is unfinished
#define CONTENT_ERROR_DCP_REBUILD_ASSETMAP_FILE_FAILED 			  147	//Error ReBuild_Assetmap file FAILED
#define CONTENT_ERROR_DCP_PKL_ASSELIST_IS_NULL					  148	//Error:PKL AssetList is null!
#define CONTENT_ERROR_DCP_PKL_ASSEFILE_PATH_IS_NULL				  149	//Error:Pkl AssetFile Path Is NULL!
#define CONTENT_ERROR_DCP_FILE_NOT_EXIST						  150	//Error:file NOT exist
#define CONTENT_ERROR_DCP_PKL_PKLNAME_ERROR						  151	//pklName %s Error!
#define CONTENT_ERROR_DCP_BP_DCPCOPYCANCEL						  152	//CODE_BP_DCPCOPYCANCEL
#define CONTENT_ERROR_DCP_DCPCOPYCANCEL							  153	//CODE_DCPCOPYCANCEL	,�Ƕϵ�����mode

#define CONTENT_ERROR_HASH_HASHCHECK_NO_START					  200	//error:DCP Hash Check is NO START.
#define CONTENT_ERROR_HASH_SHA1_CHECK_ERROR  					  201	//"SHA1 CHECK ERROR!"
#define CONTENT_ERROR_HASH_SHA1_CHECK_CANCEL					  202;	//SHA1 CHECK CANCEL!

#define CONTENT_ERROR_INPUT_PARA_ERR					  301;	//input para is err
#define CONTENT_ERROR_CPLUUID_IS_NULL					  302;	//cpl_uuid is null
#define CONTENT_ERROR_CPLNUMBER_IS_NULL					  303;	//cpl number of element is 0
#define CONTENT_ERROR_CONFLICTION_AND_NO_COVER					  304;	//show time confliction and not require to to cover
#define CONTENT_ERROR_DOWNLOADDCP_AND_DISPATCH_ERR					  305;	//DOWNLOADDCP_AND_DISPATCH_ERR

//@author zhangmiao@oristartech.com
//@date [2013-08-12]
//@brief ��Ҫ������Satelliteר�����ǽӿڵĴ������
//@new
#define CONTENT_ERROR_DCP_SEARCH_SATE_DCP_LIST                    401	//error: SearchSatDcpList()
#define CONTENT_ERROR_DCP_SATE_INIT                               402	//error:C_Satellite::Init()
#define CONTENT_ERROR_DCP_SATE_CREATE_CERT_CONNECT                403   //error:C_Satellite::CreateCertConnect()
#define CONTENT_ERROR_DCP_SATE_GET_DCP_LIST                       404   //error:C_Satellite::GetDcpList()
#define CONTENT_ERROR_DCP_SATE_GET_FTP_DCPINFO_BY_ID              405   //error:C_Satellite::GetFTPDCPInfoById()
#define CONTENT_ERROR_DCP_SATE_SET_FTP_DOWNLOAD_FINISHED          406   //error:C_Satellite::SetFTPDownLoadFinished()
//@modify end;

const int ERROR_CONTENTMGE_FTP_TCPTRANSPORTFAILED						 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_FTP_TCPTRANSPORTFAILED;
const int ERROR_CONTENTMGE_FTP_FILECANNOTOPEN							 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_FTP_FILECANNOTOPEN;
const int ERROR_CONTENTMGE_FTP_PARAMETERERROR							 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_FTP_PARAMETERERROR;
const int ERROR_CONTENTMGE_FTP_SERVICEERROR								 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_FTP_SERVICEERROR;
const int ERROR_CONTENTMGE_FTP_UNKNOWERROR								 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_FTP_UNKNOWERROR;
const int ERROR_CONTENTMGE_FTP_CANCEL_TRANSFILE_ERROR					 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_FTP_CANCEL_TRANSFILE_ERROR;

const int ERROR_CONTENTMGE_KDM_GETKDMINFOERROR							 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_KDM_GETKDMINFOERROR;
const int ERROR_CONTENTMGE_KDM_DELETEKDM_ERROR							 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_KDM_DELETEKDM_ERROR;
const int ERROR_CONTENTMGE_KDM_KDMINFOCOUNTISNULL_ERROR					 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_KDM_KDMINFOCOUNTISNULL_ERROR;
const int ERROR_CONTENTMGE_DCP_DONOT_FOUND_PKL						     = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_DCP_DONOT_FOUND_PKL;
const int ERROR_CONTENTMGE_DCP_PARAM_PATH_IS_NULL						 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_DCP_PARAM_PATH_IS_NULL;
const int ERROR_CONTENTMGE_DCP_UNABLE_TO_DELETE_DIR						 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_DCP_UNABLE_TO_DELETE_DIR;
const int ERROR_CONTENTMGE_DCP_PKL_UUID_ERROR							 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_DCP_PKL_UUID_ERROR;
const int ERROR_CONTENTMGE_DCP_CREATE_DCPINFO_ERROR    					 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_DCP_CREATE_DCPINFO_ERROR;
const int ERROR_CONTENTMGE_DCP_COPY_NO_START							 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_DCP_COPY_NO_START;
const int ERROR_CONTENTMGE_DCP_PARAM_COPYINFO_ISNULL					 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_DCP_PARAM_COPYINFO_ISNULL;
const int ERROR_CONTENTMGE_DCP_COPYDOWNLOAD_NO_START					 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_DCP_COPYDOWNLOAD_NO_START;
const int ERROR_CONTENTMGE_DCP_PARSE_ASSETMAP_ERROR						 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_DCP_PARSE_ASSETMAP_ERROR;
const int ERROR_CONTENTMGE_DCP_MAKE_DIR_FAIL 							 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_DCP_MAKE_DIR_FAIL;
const int ERROR_CONTENTMGE_DCP_FILM_FILE_PATH_ISNULL 					 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_DCP_FILM_FILE_PATH_ISNULL;
const int ERROR_CONTENTMGE_DCP_SEARCH_FTP_DCP_LIST 						 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_DCP_SEARCH_FTP_DCP_LIST;
const int ERROR_CONTENTMGE_DCP_SEARCH_DCP_LIST 							 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_DCP_SEARCH_DCP_LIST;
const int ERROR_CONTENTMGE_DCP_UNABLE_TO_DELETE_ASSETMAP_DIR 			 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_DCP_UNABLE_TO_DELETE_ASSETMAP_DIR;
const int ERROR_CONTENTMGE_DCP_CHECKCPL_INVALID_FORFTP					 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_DCP_CHECKCPL_INVALID_FORFTP;
const int ERROR_CONTENTMGE_DCP_PKL_FILE_NO_EXIST 						 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_DCP_PKL_FILE_NO_EXIST;
const int ERROR_CONTENTMGE_DCP_PKL_FILE_COPY_FAILED 					 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_DCP_PKL_FILE_COPY_FAILED;
const int ERROR_CONTENTMGE_DCP_PARAM_PKLNAME_IS_NULL_STR 				 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_DCP_PARAM_PKLNAME_IS_NULL_STR;
const int ERROR_CONTENTMGE_DCP_ASSETMAP_IS_NO_EXIST 					 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_DCP_ASSETMAP_IS_NO_EXIST;
const int ERROR_CONTENTMGE_DCP_PARAM_ASSETMAPNAME_IS_NULL_STR 			 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_DCP_PARAM_ASSETMAPNAME_IS_NULL_STR;
const int ERROR_CONTENTMGE_DCP_FILE_COPY_FAILED 				         = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_DCP_FILE_COPY_FAILED;
const int ERROR_CONTENTMGE_DCP_FILECOPYNAME_IS_NULL 			         = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_DCP_FILECOPYNAME_IS_NULL;
const int ERROR_CONTENTMGE_DCP_CPL_FILE_PATH_IS_NULL 			         = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_DCP_CPL_FILE_PATH_IS_NULL;
const int ERROR_CONTENTMGE_DCP_CPL_FILE_IS_NO_EXIST 					 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_DCP_CPL_FILE_IS_NO_EXIST;
const int ERROR_CONTENTMGE_DCP_MXF_FILE_PATH_IS_NULL 					 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_DCP_MXF_FILE_PATH_IS_NULL;
const int ERROR_CONTENTMGE_DCP_MXF_FILE_IS_NO_EXIST 					 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_DCP_MXF_FILE_IS_NO_EXIST;
const int ERROR_CONTENTMGE_DCP_MXF_FILE_COPY_IS_UNFINISHED 				 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_DCP_MXF_FILE_COPY_IS_UNFINISHED;
const int ERROR_CONTENTMGE_DCP_REBUILD_ASSETMAP_FILE_FAILED 			 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_DCP_REBUILD_ASSETMAP_FILE_FAILED;
const int ERROR_CONTENTMGE_DCP_PKL_ASSELIST_IS_NULL						 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_DCP_PKL_ASSELIST_IS_NULL;
const int ERROR_CONTENTMGE_DCP_PKL_ASSEFILE_PATH_IS_NULL				 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_DCP_PKL_ASSEFILE_PATH_IS_NULL;
const int ERROR_CONTENTMGE_DCP_FILE_NOT_EXIST							 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_DCP_FILE_NOT_EXIST;
const int ERROR_CONTENTMGE_DCP_PKL_PKLNAME_ERROR						 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_DCP_PKL_PKLNAME_ERROR;
const int ERROR_CONTENTMGE_DCP_BP_DCPCOPYCANCEL							 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_DCP_BP_DCPCOPYCANCEL;
const int ERROR_CONTENTMGE_DCP_DCPCOPYCANCEL							 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_DCP_DCPCOPYCANCEL;


const int ERROR_CONTENTMGE_HASH_HASHCHECK_NO_START						 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_HASH_HASHCHECK_NO_START;
const int ERROR_CONTENTMGE_HASH_SHA1_CHECK_ERROR  					     = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_HASH_SHA1_CHECK_ERROR;
const int ERROR_CONTENTMGE_HASH_SHA1_CHECK_CANCEL  					     = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_HASH_SHA1_CHECK_CANCEL;

const int ERROR_CONTENT_ERROR_INPUT_PARA_ERR  					     = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_INPUT_PARA_ERR;
const int ERROR_CONTENT_ERROR_CPLUUID_IS_NULL  					     = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_CPLUUID_IS_NULL;
const int ERROR_CONTENT_ERROR_CPLNUMBER_IS_NULL              = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_CPLNUMBER_IS_NULL;
const int ERROR_CONTENT_ERROR_CONFLICTION_AND_NO_COVER              = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_CONFLICTION_AND_NO_COVER;
const int ERROR_CONTENT_ERROR_DOWNLOADDCP_AND_DISPATCH_ERR              = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_DOWNLOADDCP_AND_DISPATCH_ERR;

//@author zhangmiao@oristartech.com
//@date [2013-08-12]
//@brief ��Ҫ������Satelliteר�����ǽӿڵĴ������
//@new
const int ERROR_CONTENTMGE_DCP_SEARCH_SATE_DCP_LIST 					 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_DCP_SEARCH_SATE_DCP_LIST;
const int ERROR_CONTENTMGE_DCP_SATE_INIT 								 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_DCP_SATE_INIT;
const int ERROR_CONTENTMGE_DCP_SATE_CREATE_CERT_CONNECT 				 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_DCP_SATE_CREATE_CERT_CONNECT;
const int ERROR_CONTENTMGE_DCP_SATE_GET_DCP_LIST 						 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_DCP_SATE_GET_DCP_LIST;
const int ERROR_CONTENTMGE_DCP_SATE_GET_FTP_DCPINFO_BY_ID 				 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_DCP_SATE_GET_FTP_DCPINFO_BY_ID;
const int ERROR_CONTENTMGE_DCP_SATE_SET_FTP_DOWNLOAD_FINISHED 			 = CONTENT_ERROR_CODE_BASE_VALUE + CONTENT_ERROR_DCP_SATE_SET_FTP_DOWNLOAD_FINISHED;
//@modify end;

//
//WARNING
//Ƭ����̿ռ���͡�
const int WARNING_CONTENT_DISK_LOW = 0x0001; 
//ȡ�������쳣������ʵ���ļ��Ѿ�������ɣ�'��ִ��Ƭ������ͬ��'��
const int WARNING_CONTENT_EXCEPTION_BUT_COPY_FINISH = 0x0002;
//ȡ���ɹ���ӰƬ�Ѿ�������ɣ�ϵͳ���ڿ���ʱ����������У�顣
const int WARNING_CONTENT_SUCCESS_IDLE_CHECK = 0x0003;
//WARNING end
//INFO
//INFO end

//debug
//���Էַ�ʧ��ʱ �ַ�����������ʧ�ܵ����⡣
const int DEBUG_CONTENT_DISPATCH_ERROR = 0x0001; 
const int DEBUG_CONTENT_DISPATCH_SPEED = 0x0002;
//debug end

//Content Manage end;

//Database Manage Module: 20, subModule: 0000;
//error
//��ѯ���Ϊ�ա�
const int ERROR_QUERY_RESULT_EMPTY = 0x0001;
//���¼�¼ʧ�ܡ�
const int ERROR_UPDATE_TABLE = 0x0002;
//ɾ�����ݼ�¼����
const int ERROR_DELETE_TABLE = 0x0003;
//�������ݼ�¼���� 
const int ERROR_INSERT_TABLE = 0x0004;
// �����ݿ����
const int ERROR_OPEN_DATABASE = 0x0005;   //db log;
//��ѯ���ݿ����
const int ERROR_QUERY_TABLE = 0x0006;  //db log;
//ִ��sql������
const int ERROR_EXEC_TABLE = 0x0007; //db log;
//��ʼ�������
const int ERROR_START_TRANSACTION = 0x0008; //db log;
//�ύ�������
const int ERROR_COMMIT_TRANSACTION = 0x0009; //db log;
//�ع��������
const int ERROR_ROLL_BACK_TRANSACTION = 0x000a; //db log;
//��ȡ�ֶ�ֵ����
const int ERROR_GET_FIELD = 0x000b;
const int ERROR_FIELD_VALUE_NULL_OR_ERROR = 0x000c;

//Database Manage end

//cue control module, subModule:0x0000
//debug

//ThreadManage start to run CUE check;
const int DEBUG_CUE_THREADMANAGE_START_CUE_CHECK = 0x0001;
///Task is Deleting State, ThreadManage delete CUE check Item;
const int DEBUG_CUE_THREADMANAGE_DELETE_CUE_CHECK = 0x0002;
// CUE Check, Hall is playing exit;
const int DEBUG_CUE_CHECK_IS_playing_EXIT = 0x0003;
// CUE Check,Starting DeleteCUE;
const int DEBUG_CUE_CHECK_STATE_DELETE_CUE = 0x0004;
// CUE check, hall exist running cue exit cue check;
const int DEBUG_CUE_CHECK_EXIST_RUNNING_CUE = 0x0005;

// CUE Check,start to Create CUE;
const int DEBUG_CUE_CHECK_START_TO_CREATE_CUE = 0x0006;

//CUE Check, NO Create CUE;
const int DEBUG_CUE_CHECK_NO_CREATE_CUE = 0x0007;
//  CUE_CREATE,GetDcsPlayOffset
const int DEBUG_CUE_CREATE_GetDcsPlayOffset = 0x0008;
// Run CUE, calculate delay  time;
const int DEBUG_RUN_CUE_DELAY_TIME = 0x0009;
//Create CUE Manual open lamp not run;
const int DEBUG_CREATE_CUE_MANUAL_OPEN_LAMP_NOT_RUN = 0x000a;
//Create CUE CUE;
const int DEBUG_CREATE_CUE_CUE = 0x000b;
//Adjust Cue time
const int DEBUG_CUE_ADJUST_TIME = 0x00c;
//debug end

//info
//Finish deleting CUE;
const int INFO_CUE_FINISH_DELETING_CUE = 0x0001; 
//Delete Cue Task;
const int INFO_DELETE_CUE_TASK = 0x0002;
const int INFO_DELETE_CUE_ITEM = 0x0003;
//Delete Cue As DCS not playing by CueTimeAdjust() 
const int INFO_DELETE_CUE_BY_TIME_ADJUST = 0x0004;


//info end

//warning

//warning end

//error
//CUE check,Search Hall id error.
const int ERROR_CUE_SEARCH_HALL_ID_ERROR = 0x0001;
// CUE check,Call IfDcsOperate Error ;
const int ERROR_CUE_CALL_IfDcsOperate = 0x0002;
// CUE check, Call GetPlayStatus Error;
const int ERROR_CUE_CALL_GetPlayStatus = 0x0003;
//CUE check,Call GetNextSchedules Error;
const int ERROR_CUE_CALL_GetNextSchedules = 0x004;
//Current CUE Do not allow to Delete
const int ERROR_CUE_CUR_NOT_ALLOW_DELETE = 0x0005;
//hall not exist Cue deleting Cue error;
const int ERROR_DELETE_CUE_NOT_EXIST = 0x0006;
// Create CUE ERROR CUE has existed;
const int ERROR_CREATE_CUE_EXISTED = 0x0007;
// Create CUE GetDeviceModel ERROR;
const int ERROR_CREATE_CUE_GetDeviceModel = 0x0008;
// Create CUE open DB ERROR;
const int ERROR_CREATE_CUE_OPEN_DB = 0x0009;
//Create CUE Get TMS spl_uuid error;
const int ERROR_CREATE_CUE_GET_SPL_UUID = 0x000A;
//Create CUE Get TMS spl_uuid no exist;
const int ERROR_CREATE_CUE_SPL_UUID_NO_EXIST = 0x000b;
//Create CUE select cue_cpl_list error;
const int ERROR_CREATE_CUE_SELECT_CUE_CPL_LIST = 0x000c;
//Create CUE TMS SPL no exist cue;
const int ERROR_CREATE_CUE_SPL_NO_EXIST_CUE = 0x000d;
//Create CUE null memory visit;
const int ERROR_CREATE_CUE_NULL_MEMORY = 0x000e;
// Run  CUE Cue_code is  unlawful;
const int ERROR_RUN_CUE_CODE_UNLAWFUL = 0x000f;
// Run CUE HallID is not finded; 
const int ERROR_RUN_CUE_HALLID_NOT_FIND = 0x0010;
// Run CUE device not init or not useful;
const int ERROR_RUN_CUE_DEVICE_NOT_USEFUL = 0x0011;
//Run CUE device not allow to operate;
const int ERROR_RUN_CUN_DEVICE_NOT_ALLOW_TO_OPERATE = 0x0012;
//Init CUE Open DB error;
const int ERROR_INIT_CUE_OPEN_DB = 0x0013;
// Init CUE Open cue_device Error;
const int ERROR_INIT_CUE_DB_TABLE = 0x0014;
//Init CUE Table cue_device is empty;
const int ERROR_INIT_CUE_TABLE_IS_EMPTY = 0x0015;
// Create Cue call GetDeviceModel error;
const int ERROR_CREATE_CUE_CALL_GetDeviceModel = 0x0016;
//Create Cue Call GetDeviceModelTimePara error;
const int ERROR_CREATE_CUE_CALL_GetDeviceModelTimePara = 0x0017;
//Create Cue Call GetCueDevicePara error;
const int ERROR_CREATE_CUE_CALL_GetCueDevicePara = 0x0018;
//Create Cue Call GetIdleTask ERROR;
const int ERROR_CREATE_CUE_CALL_GetIdleTask = 0x0019;
//CUE ScheduleID is different ERROR;
const int ERROR_SCHEDULE_ID_IS_DIFFERENT = 0x001a;
//CUE Finish Check Cue State Error;
const int ERROR_CUE_FINISH_CHECK = 0x001b;

//GET Current Cue, hall no exist cue;
const int ERROR_CUE_HALL_NO_EXIST_CUE = 0x001c;
// CUE play delay time no set;
const int ERROR_CUE_PLAY_DELAY_NO_SET = 0x001d;
// Auto Add Cue errror because cpl < 3;
const int ERROR_AUTO_ADD_CUE_CPL_LESS_THAN_3 = 0x001e;
//Auto Add Cue error advertisement color space set error;
const int ERROR_AUTO_ADD_CUE_AD_COLOR_SPACE_SET = 0x001f; 
//Auto Add Cue error CPL color space set;
const int ERROR_AUTO_ADD_CUE_CPL_COLOR_SPACE_SET = 0x0020;

//error end



//zhangyueqiang20130718
//gdc3d
/*
const int GDC3d_RESPONSE_FORMAT_ERROR                                  = -1;
const int GDC3d_RESPONSE_STATUS_ERROR                                  =-2;
const int GDC3d_RESPONSE_STATUS_OK                                     = 0;
const int GDC3d_ERROR_COMMUNICATION_WITH_PROJECTOR                     =-10;
const int GDC3d_DUPLICATED_TASK_FOUND                                  =-11;
const int GDC3d_NO_SPL_FOUND_WITH_THE_SPECIFIED_UUID                   =-12;
const int GDC3d_NO_ASSET_FOUND_WITH_THE_SPECIFIED_UUID                 =-13;
const int GDC3d_UNABLE_TO_PLAY_SHOW                                    =-14;
const int GDC3d_NOT_PAUSED_STATUS                                      =-15;
const int GDC3d_DCPINFO_INIT_ERROR                                     =-16;
const int GDC3d_ERROR_CPL_XML_FORMAT                                   =-17;
const int GDC3d_ERROR_SPL_XML_FORMAT                                   =-18;
const int GDC3d_NOT_STOPPED_OR_PAUSED_STATUS                           =-19;
const int GDC3d_NOT_PLAYING_STATUS                                     =-20;
const int GDC3d_NOT_PLAYING_OR_PAUSED_STATUS                           =-21;
const int GDC3d_NO_PLAYBACK_STATUS                                     =-22;
const int GDC3d_NOT_SUPPORT_API                                        =-23;
const int GDC3d_CREATE_SCHEDULE_ERROR                                  =-24;
const int GDC3d_GET_CPLINFO_ERROR                                      =-25;
const int GDC3d_CREATESPL_ERROR                                        =-26;
const int GDC3d_INGEST_KDM_TIMEOUT                                     =-27;
const int GDC3d_FTP_PARSER_ERROR                                       =-28;
const int GDC3d_RECV_RESPONSE_TIMEOUT                                  =-29;
const int GDC3d_RECV_RESPONSE_ERROR                                    =-30;
const int GDC3d_CREATE_SPL_ERROR                                       =-31;
const int GDC3d_RECV_RESPONSE_UNFINISHED                               =-32;
//const int GDC3d_ERROR_PLAYER_CANNOTCONNECT             		=-33;      
//const int GDC3d_ERROR_PLAYER_CTRL_DEVICECONNECTFAILED
const int GDC3d_ERROR_PLAYER_CANNOTCONNECT      		       =103;
const int GDC3d_ERROR_PLAYER_TCPSEND                                   =-34;
const int GDC3d_ERROR_NO_CPLUUID_FOUND_BY_SPLID                        =-35;
const int GDC3d_ERROR_PLAYER_BADFTPURL                                 =-36;
const int GDC3d_ERROR_AN_EXISTING_SCHEDULE                             =-37;
const int GDC3d_ERROR_UNABLE_TO_GET_SHOW                               =-38;
const int GDC3d_ERROR_PLAYING                                          =-39;
const int GDC3d_ERROR_PAUSING                                          =-40;
//���ڳ�ͻ����  ��Ӧ��ERROR_PLAYER_CTRL_SPLCONFLICT
//const int GDC3d_ERROR_CREATE_SCHEDULE_CONFLICT                         =-41;
const int GDC3d_ERROR_CREATE_SCHEDULE_CONFLICT                           =102;
const int GDC3d_ERROR_LOAD_SPL_FAILED                                    =-42;
const int GDC3d_ERROR_RESUME_FAILED                                      =-43;
const int GDC3d_ERROR_GETPLAYBACK_STATUS                                 =-45;
const int GDC3d_ERROR_INGESTALREADY_STARTED                              =-50;
const int GDC3d_ERROR_DATE_NULL                                          =-51;
const int GDC3d_ERROR_BADSOAPRESPONSE 					 =-52;
const int GDC3D_ERROR_PROJECTOR_OPERATORFAILED				 =-53;	//projector error, operator failed
*/

//duheqing 2013-5-16
const int FILMCENTER_OTHERERROR = -1;
const int FILMCENTER_CANNOTOPENKDMDISCRIBEXML = -2;
const int FILMCENTER_CANNOTGETKDMDISCRIBEXML = -3;
const int FILMCENTER_BADKDMDISCRIBEXML = -4;


//cy 2014-3-17    use for C_MessageList
const int ERROR_MESSAGE_QUERY_EMPTY = -1;
const int ERROR_CREATE_HTTP = -2;
const int ERR_MESSAGE_BADFTPURL = -3;
const int ERROR_MESSAGE_TCP_CONNECT = -4;
const int ERROR_MESSAGE_TCP_SEND = -5;
const int ERROR_MESSAGE_TCP_RECV = -6;

//cy 2014-3-18 use for advertiseplan
const int ERROR_AD_TCP_CONNECT = -1;
const int ERROR_AD_TCP_SEND = -2;
const int ERROR_AD_TCP_RECV = -3;
const int ERROR_AD_GREATE_HTTP = -4;
const int ERROR_AD_RESPONSE_HTTP = -5;
const int ERROR_AD_EMPTY_XML = -6;
const int ERROR_AD_PARSER_XML = -7;
const int ERROR_AD_XML_NO_NODE = -8;
const int ERROR_AD_SPL_TIME_ATTRACK = -9;
const int ERROR_AD_DELETE_SPL = -10;
const int ERROR_AD_GETADPLAN = -11;
const int ERROR_AD_DBOPERATOR = -12;
const int ERROR_FILM_NOBANDING = -13;

//20140321 by xiaozhengxiu add
//const int ERROR_AD_FILM_PRE = -14;//ģ����Ƭǰ����Ԫ�ز�����
//const int ERROR_AD_FILM_PRE_NO_CPL = -15;//Ƭǰ����ʵ���ļ�������
//const int ERROR_AD_FILM_AFTER = -16;//ģ����Ƭ�����Ԫ�ز�����
//const int ERROR_AD_FILM_AFTER_NO_CPL = -17;//Ƭ�����ʵ���ļ�������
const int ERROR_AD_NO_TEMPLATE = -17;// ģ�岻����
const int ERROR_AD_ELEMENT_COUNT = -18;// ģ��Ԫ�ظ�������
const int ERROR_AD_NO_ELEMENT = -19;// �޶�ӦԪ��
const int ERROR_AD_SLICE_NO_CPL = -20;//ʵ���ļ�������
const int ERROR_AD_NO_CENTERAD = -21;//���ϵͳ�����ڹ��ƻ�
const int ERROR_ST_FILM_ISEXIST = -22;//����TMS�д���ͬһʱ���ͬһ��Ƭ����
const int ERROR_ST_ISEXIST = -23;//����TMS�д���ʱ��γ�ͻ����
const int ERROR_ST_FILM_NO_CPL = -24;//����Ƭ
const int ERROR_ST_IMPORT_NO_ALL = -25;//�����г�ͻ������ɹ�
const int ERROR_ST_INPUT_PARE = -26;//�����������
//20141113 add by cy
const int ERROR_AD_SEND_ERROR_INFO = -27;//������ϱ�������Ϣʧ��
const int ERROR_AD_HAVENOT_INSERT_DCP = -28;//��ִ�е�����DCP��

//20140709 by xiaozhengxiu add
const int ERROR_ST_IS_NOT_EXIST = -27;//		str_error = "��Ʊ�����ڲ�����";
const int ERROR_ST_IS_EXIST = -28;//str_error = "��Ʊ�������Ѵ���";
const int ERROR_ST_IS_CHANGE = -29;//str_error = "��Ʊ�������б��";
const int ERROR_ST_IS_ALARM = -30;//str_error = "��Ʊ�������ѱ���";

//cy 2014-5-19 use for GDC //3000
const int GDC_RESPONSE_FORMAT_ERROR	= -3001; //
const int GDC_RESPONSE_STATUS_ERROR	= -3002;
const int GDC_RESPONSE_STATUS_OK = 0;
const int GDC_ERROR_COMMUNICATION_WITH_PROJECTOR = -3010;
const int GDC_DUPLICATED_TASK_FOUND = -3011;
const int GDC_NO_SPL_FOUND_WITH_THE_SPECIFIED_UUID = -3012;
const int GDC_NO_ASSET_FOUND_WITH_THE_SPECIFIED_UUID = -3013;
const int GDC_UNABLE_TO_PLAY_SHOW = -3014;
const int GDC_NOT_PAUSED_STATUS = -3015;
const int GDC_DCPINFO_INIT_ERROR = -3016;
const int GDC_ERROR_CPL_XML_FORMAT = -3017;
const int GDC_ERROR_SPL_XML_FORMAT = -3018;
const int GDC_NOT_STOPPED_OR_PAUSED_STATUS = -3019;
const int GDC_NOT_PLAYING_STATUS = -3020;
const int GDC_NOT_PLAYING_OR_PAUSED_STATUS = -3021;
const int GDC_NO_PLAYBACK_STATUS = -3022;
const int GDC_NOT_SUPPORT_API = -3023;
const int GDC_CREATE_SCHEDULE_ERROR = -3024;
const int GDC_GET_CPLINFO_ERROR = -3025;
const int GDC_CREATESPL_ERROR = -3026;
const int GDC_INGEST_KDM_TIMEOUT = -3027;
const int GDC_FTP_PARSER_ERROR = -3028;
const int GDC_RECV_RESPONSE_TIMEOUT = -3029;
const int GDC_RECV_RESPONSE_ERROR = -3030;
const int GDC_CREATE_SPL_ERROR = -3031;
const int GDC_RECV_RESPONSE_UNFINISHED = -3032;
//#define ERROR_PLAYER_CANNOTCONNECT              -33	  //��Ӧ��ERROR_PLAYER_CTRL_DEVICECONNECTFAILED
const int GDC_ERROR_PLAYER_CANNOTCONNECT = -3033;//103
const int GDC_ERROR_PLAYER_TCPSEND = -3034;
const int GDC_ERROR_NO_CPLUUID_FOUND_BY_SPLID = -3035;
const int GDC_ERROR_PLAYER_BADFTPURL = -3036;
const int GDC_ERROR_AN_EXISTING_SCHEDULE = -3037;
const int GDC_ERROR_UNABLE_TO_GET_SHOW = -3038;
const int GDC_ERROR_PLAYING  = -3039;
const int GDC_ERROR_PAUSING = -3040;
//���ڳ�ͻ����  ��Ӧ��ERROR_PLAYER_CTRL_SPLCONFLICT
//#define ERROR_CREATE_SCHEDULE_CONFLICT          -41
const int GDC_ERROR_CREATE_SCHEDULE_CONFLICT = -3041;//102 
const int GDC_ERROR_LOAD_SPL_FAILED = -3042;
const int GDC_ERROR_RESUME_FAILED = -3043;
const int GDC_ERROR_GETPLAYBACK_STATUS = -3045;
const int GDC_ERROR_INGESTALREADY_STARTED = -3050;
//5-19
const int GDC_ERROR_SAVING_SHOW_PLAYLIST	= -3051;
const int GDC_NO_ASSET_FOUNT_WITH_THE_SPECIFIED_UUID	= -3052;
const int GDC_ERROR_CANCEL_STATUS = -3053;
const int GDC_ERROR_THE_SAME_SCHEDULE_ID = -3054;
const int GDC_ERROR_TO_LOAD_SHOW = -3055;

#endif  //_TMS20_ERROR_DEFINE
