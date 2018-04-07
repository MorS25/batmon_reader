#pragma once

#define i2cAddress1 0x21

#define READTHERM0 0x10
#define READTHERM1 0x11
#define READTHERM2 0x12
#define READTOTVOLTAGE 0x13
#define READCELLVOLTAGES 0x14
#define READSTATUS 0x15

#define BATMON_NOT_BOOTED 0x33
#define ADC_CHIP_CONNECTION_ERROR 0x34
#define ADC_CANT_WRITE_CHIP 0x35
#define ADC_CHIP_NOT_FOUND 0x36
#define ADC_I2C_ERROR 0x37
#define BATMON_READY 0x38
#define DEF_ERROR 0x38

//typedef struct _Batmon_struct{
	struct Batmon_thermistors{

		union
		{
			struct
			{
				unsigned char T2_HI;
				unsigned char T2_LO;
			}T2Byte;
			unsigned short T2Word; // temperature *10 (deg C)
		}T2;
		
		union
		{
			struct
			{
				unsigned char T1_HI;
				unsigned char T1_LO;
			}T1Byte;
			unsigned short T1Word; // temperature *10 (deg C)
		}T1;
		
		union
		{
			struct
			{
				unsigned char T_int_HI;
				unsigned char T_int_LO;
			}T_int_Byte;
			unsigned short T_int_Word; // temperature *10 (deg C)
		}T_int;
    unsigned char CRC;
	};

  struct Batmon_totalVoltage{
  	union {
  		struct
  		{
  			unsigned char VTot_HI;
  			unsigned char VTot_LO;
  		}VTotByte;
  		unsigned short VTotWord; //mV
  	}TV;
   unsigned char CRC;
  };
	
	struct Batmon_cellVoltages{
		union
		{
			struct
			{
				unsigned char VC1_HI;
				unsigned char VC1_LO;
			}VCell1Byte;
			unsigned short VCell1Word; //mV
		}VCell1;
		union
		{
			struct
			{
				unsigned char VC2_HI;
				unsigned char VC2_LO;
			}VCell1Byte;
			unsigned short VCell2Word; //mV
		}VCell2;
		union
		{
			struct
			{
				unsigned char VC3_HI;
				unsigned char VC3_LO;
			}VCell1Byte;
			unsigned short VCell3Word; //mV
		}VCell3;
		union
		{
			struct
			{
				unsigned char VC4_HI;
				unsigned char VC4_LO;
			}VCell1Byte;
			unsigned short VCell4Word; //mV
		}VCell4;
		union
		{
			struct
			{
				unsigned char VC5_HI;
				unsigned char VC5_LO;
			}VCell1Byte;
			unsigned short VCell5Word;
		}VCell5;
		union
		{
			struct
			{
				unsigned char VC6_HI;
				unsigned char VC6_LO;
			}VCell1Byte;
			unsigned short VCell6Word;
		}VCell6;
		union
		{
			struct
			{
				unsigned char VC7_HI;
				unsigned char VC7_LO;
			}VCell1Byte;
			unsigned short VCell7Word;
		}VCell7;
		union
		{
			struct
			{
				unsigned char VC8_HI;
				unsigned char VC8_LO;
			}VCell1Byte;
			unsigned short VCell8Word;
		}VCell8;
		union
		{
			struct
			{
				unsigned char VC9_HI;
				unsigned char VC9_LO;
			}VCell1Byte;
			unsigned short VCell9Word;
		}VCell9;
		union
		{
			struct
			{
				unsigned char VC10_HI;
				unsigned char VC10_LO;
			}VCell1Byte;
			unsigned short VCell10Word;
		}VCell10;
    unsigned char CRC;
	};
//}Batmon_struct;
