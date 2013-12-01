
#ifndef DCM_CFG_H_
#define DCM_CFG_H_

#define DCM_VERSION_INFO_API              STD_ON
#define DCM_DEV_ERROR_DETECT              STD_OFF
#define DCM_RESPOND_ALL_REQUEST           STD_ON  // Activate/Deactivate response on SID 0x40-0x7f and 0xc0-0xff.
#define DCM_REQUEST_INDICATION_ENABLED    STD_ON  // Activate/Deactivate indication request mechanism.
#define DCM_PAGEDBUFFER_ENABLED           STD_OFF	// Enable/disable page buffer mechanism (currently only disabled supported)

#define DCM_DSL_BUFFER_LIST_LENGTH		2
#define DCM_DSL_TX_PDU_ID_LIST_LENGTH		1
#define DCM_DSL_RX_PDU_ID_LIST_LENGTH		1

#define DCM_MAIN_FUNCTION_PERIOD_TIME_MS	10

#define DCM_LIMITNUMBER_PERIODDATA		5  //MaxNumberofSimultaneousPeriodictransmissions
#define DCM_MAX_DDDSOURCE_NUMBER			7  //MaxSourcesforOneDynamicIdentifier
#define DCM_MAX_DDD_NUMBER				1  

#define DCM_PERIODICTRANSMIT_SLOW			50
#define DCM_PERIODICTRANSMIT_MEDIUM		30
#define DCM_PERIODICTRANSMIT_FAST			15

#define DCM_RX_DIAG_P2P		0
#define DCM_RX_DIAG_P2A		1

#define DCM_TX_DIAG_P2P		0
#define DCM_TX_DIAG_P2A		1



//do add/subtract by hand.please
//#define USE_DEM
#define DCM_USE_SERVICE_DIAGNOSTICSESSIONCONTROL
#define DCM_USE_SERVICE_ECURESET
//#define DCM_USE_SERVICE_CLEARDIAGNOSTICINFORMATION
//#define DCM_USE_SERVICE_READDTCINFORMATION
#define DCM_USE_SERVICE_READDATABYIDENTIFIER
#define DCM_USE_SERVICE_READMEMORYBYADDRESS
#define DCM_USE_SERVICE_WRITEMEMORYBYADDRESS
#define DCM_USE_SERVICE_READSCALINGDATABYIDENTIFIER
#define DCM_USE_SERVICE_SECURITYACCESS
#define DCM_USE_SERVICE_WRITEDATABYIDENTIFIER
#define DCM_USE_SERVICE_ROUTINECONTROL
#define DCM_USE_SERVICE_TESTERPRESENT
//#define DCM_USE_SERVICE_CONTROLDTCSETTING
#define DCM_USE_SERVICE_READDATABYPERIODICIDENTIFIER
#define DCM_USE_SERVICE_DYNAMICALLYDEFINEDATAIDENTIFIER
#define DCM_USE_SERVICE_INPUTOUTPUTCONTROLBYIDENTIFIER
#endif /*DCM_CFG_H_*/

