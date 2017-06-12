// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "comidaq.h"

/////////////////////////////////////////////////////////////////////////////
// CComiDaq

IMPLEMENT_DYNCREATE(CComiDaq, CWnd)

/////////////////////////////////////////////////////////////////////////////
// CComiDaq properties

long CComiDaq::GetDeviceId()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void CComiDaq::SetDeviceId(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

long CComiDaq::GetDevInstance()
{
	long result;
	GetProperty(0x2, VT_I4, (void*)&result);
	return result;
}

void CComiDaq::SetDevInstance(long propVal)
{
	SetProperty(0x2, VT_I4, propVal);
}

BOOL CComiDaq::GetEnableErrorMsgDlg()
{
	BOOL result;
	GetProperty(0x3, VT_BOOL, (void*)&result);
	return result;
}

void CComiDaq::SetEnableErrorMsgDlg(BOOL propVal)
{
	SetProperty(0x3, VT_BOOL, propVal);
}

long CComiDaq::GetDlogLevel()
{
	long result;
	GetProperty(0x4, VT_I4, (void*)&result);
	return result;
}

void CComiDaq::SetDlogLevel(long propVal)
{
	SetProperty(0x4, VT_I4, propVal);
}

CString CComiDaq::GetDlogFile()
{
	CString result;
	GetProperty(0x5, VT_BSTR, (void*)&result);
	return result;
}

void CComiDaq::SetDlogFile(LPCTSTR propVal)
{
	SetProperty(0x5, VT_BSTR, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// CComiDaq operations

short CComiDaq::GnDeviceLoad()
{
	short result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_I2, (void*)&result, NULL);
	return result;
}

short CComiDaq::GnDeviceUnload()
{
	short result;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_I2, (void*)&result, NULL);
	return result;
}

short CComiDaq::AiSetInputType(long InputMode)
{
	short result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		InputMode);
	return result;
}

short CComiDaq::AiSetRange(long Channel, double vmin, double vmax)
{
	short result;
	static BYTE parms[] =
		VTS_I4 VTS_R8 VTS_R8;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		Channel, vmin, vmax);
	return result;
}

short CComiDaq::AiGetRangeVolt(long Channel, double* vmin, double* vmax)
{
	short result;
	static BYTE parms[] =
		VTS_I4 VTS_PR8 VTS_PR8;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		Channel, vmin, vmax);
	return result;
}

short CComiDaq::AiGetRangeDigit(long Channel, long* Dmin, long* Dmax)
{
	short result;
	static BYTE parms[] =
		VTS_I4 VTS_PI4 VTS_PI4;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		Channel, Dmin, Dmax);
	return result;
}

long CComiDaq::AiGetDigit(long Channel)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Channel);
	return result;
}

double CComiDaq::AiGetVolt(long Channel)
{
	double result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		Channel);
	return result;
}

long CComiDaq::AiScanStart(long NumChannel, long* ChanList, long ScanFreq, long BufSize, long TrsMethod, long IsPauseAtFull)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_PI4 VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		NumChannel, ChanList, ScanFreq, BufSize, TrsMethod, IsPauseAtFull);
	return result;
}

short CComiDaq::AiScanStop(long IsReleaseBuf)
{
	short result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		IsReleaseBuf);
	return result;
}

short CComiDaq::AiScanSetTrgEvent(long InputSource, long EdgeType, long TrgMode, double AiRef, double AiRefBand)
{
	short result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_R8 VTS_R8;
	InvokeHelper(0x10, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		InputSource, EdgeType, TrgMode, AiRef, AiRefBand);
	return result;
}

long CComiDaq::AiScanCurCount()
{
	long result;
	InvokeHelper(0x11, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long CComiDaq::AiScanChangeFreq(long ScanFreq)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x12, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		ScanFreq);
	return result;
}

short CComiDaq::AiScanReleaseBuf()
{
	short result;
	InvokeHelper(0x13, DISPATCH_METHOD, VT_I2, (void*)&result, NULL);
	return result;
}

short CComiDaq::AiScanResume()
{
	short result;
	InvokeHelper(0x14, DISPATCH_METHOD, VT_I2, (void*)&result, NULL);
	return result;
}

double CComiDaq::AiScanRetrOne(long ChannelOrder, long ScanCount)
{
	double result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x15, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		ChannelOrder, ScanCount);
	return result;
}

long CComiDaq::AiScanRetrChannelI2(long ChannelOrder, long StartCount, long MaxNumData, short* DestBuf)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_PI2;
	InvokeHelper(0x16, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		ChannelOrder, StartCount, MaxNumData, DestBuf);
	return result;
}

long CComiDaq::AiScanRetrChannelF4(long ChannelOrder, long StartCount, long MaxNumData, float* DestBuf)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_PR4;
	InvokeHelper(0x17, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		ChannelOrder, StartCount, MaxNumData, DestBuf);
	return result;
}

long CComiDaq::AiScanRetrChannelF8(long ChannelOrder, long StartCount, long MaxNumData, double* DestBuf)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_PR8;
	InvokeHelper(0x18, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		ChannelOrder, StartCount, MaxNumData, DestBuf);
	return result;
}

long CComiDaq::AiScanRetrBlockI2(long StartCount, long MaxNumData, short* DestBuf)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_PI2;
	InvokeHelper(0x19, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		StartCount, MaxNumData, DestBuf);
	return result;
}

long CComiDaq::AiScanRetrBlockF4(long StartCount, long MaxNumData, float* DestBuf)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_PR4;
	InvokeHelper(0x1a, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		StartCount, MaxNumData, DestBuf);
	return result;
}

long CComiDaq::AiScanRetrBlockF8(long StartCount, long MaxNumData, double* DestBuf)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_PR8;
	InvokeHelper(0x1b, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		StartCount, MaxNumData, DestBuf);
	return result;
}

short CComiDaq::AoOut(long Channel, double OutVolt)
{
	short result;
	static BYTE parms[] =
		VTS_I4 VTS_R8;
	InvokeHelper(0x1c, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		Channel, OutVolt);
	return result;
}

long CComiDaq::AoWfmStart(long Channel, double* DataBuffer, long NumData, long PPS, long MaxLoops)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_PR8 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x1d, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Channel, DataBuffer, NumData, PPS, MaxLoops);
	return result;
}

short CComiDaq::AoWfmStop(long Channel)
{
	short result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1e, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		Channel);
	return result;
}

long CComiDaq::AoWfmGetCurLoops(long Channel)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1f, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Channel);
	return result;
}

long CComiDaq::AoWfmGetCurPos(long Channel)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x20, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Channel);
	return result;
}

long CComiDaq::AoWfmRateChange(long Channel, long PPS)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x21, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Channel, PPS);
	return result;
}

short CComiDaq::DioSetUsage(long Usage)
{
	short result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x22, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		Usage);
	return result;
}

long CComiDaq::DioGetUsage()
{
	long result;
	InvokeHelper(0x23, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long CComiDaq::DiGetOne(long Channel)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x24, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Channel);
	return result;
}

long CComiDaq::DiGetAll()
{
	long result;
	InvokeHelper(0x25, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long CComiDaq::DiGetAllEx(long GroupIdx)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x26, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		GroupIdx);
	return result;
}

long CComiDaq::DoGetOne(long Channel)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x27, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Channel);
	return result;
}

long CComiDaq::DoGetAll()
{
	long result;
	InvokeHelper(0x28, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long CComiDaq::DoGetAllEx(long GroupIdx)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x29, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		GroupIdx);
	return result;
}

short CComiDaq::DoPutOne(long Channel, long OutState)
{
	short result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x2a, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		Channel, OutState);
	return result;
}

short CComiDaq::DoPutAll(long OutStates)
{
	short result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2b, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		OutStates);
	return result;
}

short CComiDaq::DoPutAllEx(long GroupIdx, long OutStates)
{
	short result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x2c, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		GroupIdx, OutStates);
	return result;
}

short CComiDaq::SdioInitComm()
{
	short result;
	InvokeHelper(0x2d, DISPATCH_METHOD, VT_I2, (void*)&result, NULL);
	return result;
}

short CComiDaq::SdioCheckModule(long ModuleNo)
{
	short result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2e, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		ModuleNo);
	return result;
}

short CComiDaq::SdioSetDioUsage(long ModuleNo, long Usage)
{
	short result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x2f, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		ModuleNo, Usage);
	return result;
}

long CComiDaq::SdioReadLowByte(long ModuleNo)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x30, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		ModuleNo);
	return result;
}

long CComiDaq::SdioReadHighByte(long ModuleNo)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x31, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		ModuleNo);
	return result;
}

long CComiDaq::SdioReadWord(long ModuleNo)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x32, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		ModuleNo);
	return result;
}

short CComiDaq::SdioWriteLowByte(long ModuleNo, long Value8)
{
	short result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x33, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		ModuleNo, Value8);
	return result;
}

short CComiDaq::SdioWriteHighByte(long ModuleNo, long Value8)
{
	short result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x34, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		ModuleNo, Value8);
	return result;
}

short CComiDaq::SdioWriteWord(long ModuleNo, long Value16)
{
	short result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x35, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		ModuleNo, Value16);
	return result;
}

short CComiDaq::Cnt16Setup(long Channel, long RwMode, long OpMode, long BcdBin, long LoadValue)
{
	short result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x36, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		Channel, RwMode, OpMode, BcdBin, LoadValue);
	return result;
}

short CComiDaq::Cnt16LoadCount(long Channel, long LoadValue)
{
	short result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x37, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		Channel, LoadValue);
	return result;
}

long CComiDaq::Cnt16ReadCount(long Channel)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x38, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Channel);
	return result;
}

long CComiDaq::Cnt32ReadCount(long Channel)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x39, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Channel);
	return result;
}

short CComiDaq::Cnt32ClearCount(long Channel)
{
	short result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3a, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		Channel);
	return result;
}

short CComiDaq::EncConfig(long Channel, long Mode, long IsResetByZ)
{
	short result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x3b, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		Channel, Mode, IsResetByZ);
	return result;
}

short CComiDaq::EncReset(long Channel)
{
	short result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3c, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		Channel);
	return result;
}

short CComiDaq::EncLoad(long Channel, long Count)
{
	short result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x3d, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		Channel, Count);
	return result;
}

long CComiDaq::EncRead(long Channel)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3e, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Channel);
	return result;
}

short CComiDaq::EncResetZ(long Channel)
{
	short result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3f, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		Channel);
	return result;
}

short CComiDaq::EncLoadZ(long Channel, long Count)
{
	short result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x40, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		Channel, Count);
	return result;
}

long CComiDaq::EncReadZ(long Channel)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x41, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Channel);
	return result;
}

double CComiDaq::PgStart(long Channel, double Freq, long NumPulses)
{
	double result;
	static BYTE parms[] =
		VTS_I4 VTS_R8 VTS_I4;
	InvokeHelper(0x42, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		Channel, Freq, NumPulses);
	return result;
}

double CComiDaq::PgChangeFreq(long Channel, double Freq)
{
	double result;
	static BYTE parms[] =
		VTS_I4 VTS_R8;
	InvokeHelper(0x43, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		Channel, Freq);
	return result;
}

short CComiDaq::PgIsActive(long Channel)
{
	short result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x44, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		Channel);
	return result;
}

short CComiDaq::PgStop(long Channel)
{
	short result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x45, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		Channel);
	return result;
}

short CComiDaq::FcSetCounter(long Channel, long Mode, long ClkSource)
{
	short result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x46, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		Channel, Mode, ClkSource);
	return result;
}

long CComiDaq::FcReadNowCount(long Channel)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x47, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Channel);
	return result;
}

long CComiDaq::FcReadOldCount(long Channel)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x48, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Channel);
	return result;
}

long CComiDaq::FcGetGateState(long Channel)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x49, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Channel);
	return result;
}

double CComiDaq::FcGetClkFreq(long ClkSourceIdx)
{
	double result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4a, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		ClkSourceIdx);
	return result;
}

short CComiDaq::FcClear(long Channel)
{
	short result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4b, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		Channel);
	return result;
}

short CComiDaq::FcClearMulti(long CntrSel)
{
	short result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4c, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		CntrSel);
	return result;
}

long CComiDaq::GnGetErrorCode()
{
	long result;
	InvokeHelper(0x4d, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CComiDaq::GnGetErrorString(long ErrorCode)
{
	CString result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4e, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		ErrorCode);
	return result;
}

long CComiDaq::GnBitShift(long Value, long ShiftOption)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x4f, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Value, ShiftOption);
	return result;
}

short CComiDaq::DlogSetup(long Level, LPCTSTR szLogFile)
{
	short result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR;
	InvokeHelper(0x50, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		Level, szLogFile);
	return result;
}

short CComiDaq::DlogSetSkipThis()
{
	short result;
	InvokeHelper(0x51, DISPATCH_METHOD, VT_I2, (void*)&result, NULL);
	return result;
}

short CComiDaq::DlogAddComment(LPCTSTR szComment)
{
	short result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x52, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		szComment);
	return result;
}

short CComiDaq::GnShowLastError()
{
	short result;
	InvokeHelper(0x53, DISPATCH_METHOD, VT_I2, (void*)&result, NULL);
	return result;
}

short CComiDaq::AiScanIsBufFull()
{
	short result;
	InvokeHelper(0x54, DISPATCH_METHOD, VT_I2, (void*)&result, NULL);
	return result;
}

short CComiDaq::DiEventSetup(long ChannelMask1, long ChannelMask2)
{
	short result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x55, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		ChannelMask1, ChannelMask2);
	return result;
}

short CComiDaq::GnDeviceIsLoaded()
{
	short result;
	InvokeHelper(0x56, DISPATCH_METHOD, VT_I2, (void*)&result, NULL);
	return result;
}
