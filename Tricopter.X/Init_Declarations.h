/**********************************************************
;Asterik Research Electonics
;Variable Initalization Header Templet

**********************************************************/


#ifndef __INIT_DECLARATIONS_H__
#define __INIT_DECLARATIONS_H__

unsigned char uc_test_it;
unsigned char uc_test_it2;
unsigned char   ubBufferIndex;
unsigned char   ubLastBufferIndex;
unsigned char   ubProcessByte;
unsigned char   ubDecipherErrorByte;
unsigned char   ubCRCIndex;
unsigned char   ubDecipherIndex;
unsigned char   ucData2bCRCd;

unsigned int    uiSelectWhichBuffer;
unsigned int    uiHichClockCount;
unsigned int    uiLowClockCount;
unsigned int    uiCountsBetweenGoodClks;
unsigned int    uiHeaderZeroCount;

unsigned int    uiTEstCounts;
unsigned int    uiCRCCheck;

unsigned int   *uiDecipherBufferAddress;
unsigned int   uiHighClkBuffer[255];
unsigned int   uiLowClkBuffer[255];
unsigned int   uiDataBuffer[130];
unsigned int   uiDataBuffer2[130];


unsigned int    uiTempDataStore;
unsigned int    uiRxHeader;             //10bits
unsigned int    uiCountryCode;          //10bits
unsigned int    uiStatusAndApplication; // 1 bit for status and 1 bit of application
unsigned int    uiCRC;                  // 16 bit
unsigned long   ulExtraData;            //24 bits
unsigned long long    ullNationalCode;         // 38 bits

int ADC_RSLT0=0;
int ADC_RSLT1=0;




unsigned int c_Tmr1_Tim = C_TMR1_TIME;

unsigned int ui_Table_Page_Number;
unsigned int ui_Table_Offset_Number;
unsigned int ui_Table_Offset_Number_Working;
unsigned int ui_Table_Offset_Number_End;



unsigned char uc_100uS_Timer;
unsigned char uc_Main_Case_Index;

extern void     init_PWM(void);
extern void     init_ADC(void);
extern void	init_Osc(void);
extern void	init_T1(void);
extern void     init_I2C(void);
//how do I add the assembly file I2C_data
extern void	init_DAC_Comparators(void);

unsigned int AccX;
unsigned int AccY;
unsigned int AccZ;
unsigned int Temperature;
unsigned int GyroX;
unsigned int GyroY;
unsigned int GyroZ;

unsigned int AccX1;
unsigned  int AccX2;
unsigned   int AccY1;
unsigned  int AccY2;
unsigned  int AccZ1;
unsigned  int AccZ2;
unsigned  int Temperature1;
unsigned  int Temperature2;
unsigned  int GyroX1;
unsigned  int GyroX2;
unsigned  int GyroY1;
unsigned  int GyroY2;
unsigned  int GyroZ1;
unsigned  int GyroZ2;

#endif
