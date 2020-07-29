#ifndef __ATMF04_EFLASH_H__
#define __ATMF04_EFLASH_H__

#define SZ_PAGE_DATA                64
#ifdef CONFIG_LGE_USE_SAR_CONTROLLER
#define FW_DATA_PAGE               	115
#else
#define FW_DATA_PAGE               	96
#endif

#define ADDR_EFLA_STS               0xFF	//eflash status register
#define ADDR_EFLA_PAGE_L            0xFD	//eflash page
#define ADDR_EFLA_PAGE_H            0xFE	//eflash page
#define ADDR_EFLA_CTRL              0xFC	//eflash control register

#define CMD_EFL_L_WR                0x01	//Eflash Write
#define CMD_EFL_RD                  0x03	//Eflash Read
#define CMD_EFL_ERASE_ALL           0x07	//Eflash All Page Erase

#define CMD_EUM_WR                  0x21	//Extra user memory write
#define CMD_EUM_RD                  0x23	//Extra user memory read
#define CMD_EUM_ERASE               0x25	//Extra user memory erase

#define FLAG_DONE                   0x03
#define FLAG_DONE_ERASE             0x02

#define FLAG_FUSE                   1
#define FLAG_FW                     2

//============================================================//
//[20180327] ADS Change
//[START]=====================================================//
//#define FL_EFLA_TIMEOUT_CNT         200
#define FL_EFLA_TIMEOUT_CNT         20
//[END]======================================================//
#define IC_TIMEOUT_CNT        5

#define RTN_FAIL                    0
#define RTN_SUCC                    1
#define RTN_TIMEOUT                 2

#define ON                          1
#define OFF                         2

#if 1 // debugging calibration paused
#define SAR_CAL_RESULT_PASS			0 // "1"
#define SAR_CAL_RESULT_FAIL			"0"
#endif

#endif

#define CONFIG_LGE_ATMF04_2CH

#if defined(CONFIG_LGE_USE_SAR_CONTROLLER) // register init value
#if defined(CONFIG_LGE_ATMF04_2CH)
#define CNT_INITCODE               26
#else
#define CNT_INITCODE               17
#endif
#endif
static unsigned char InitCodeAddr[CNT_INITCODE]    = { 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x09, 0x0A, 0x0B, 0X0C, 0X0D, 0x0E, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D };
static unsigned char InitCodeVal[CNT_INITCODE]     = { 0x00, 0x9A, 0x00, 0x21, 0x33, 0x0B, 0x0B, 0x6E, 0x64, 0xDC, 0x6A, 0x73, 0x83, 0x01, 0x9A, 0x00, 0x19, 0xD0, 0xA4, 0x0B, 0x07, 0x12, 0x07, 0x33, 0x02, 0x13 };