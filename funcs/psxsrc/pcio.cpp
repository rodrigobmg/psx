// C:\diabpsx\PSXSRC\PCIO.CPP

#include "types.h"

// address: 0x800860B4
// size: 0x14
struct PCIO *__4PCIOUl(struct PCIO *this, unsigned long OurMemId) {
}


// address: 0x8008611C
void ___4PCIO(struct PCIO *this, int __in_chrg) {
}


// address: 0x80086174
bool FileExists__4PCIOPCc(struct PCIO *this, char *Name) {
	// register: 4
	register int FileHnd;
}


// address: 0x800861B8
bool LoReadFileAtAddr__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Dest, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8008627C
int GetFileLength__4PCIOPCc(struct PCIO *this, char *Name) {
	// register: 16
	register int FileHnd;
	// register: 17
	register int Len;
}


// address: 0x80086334
bool LoSave__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x80086408
bool LoStreamFile__4PCIOPCciPFPUciib_bii(struct PCIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
	// register: 19
	register int FileHnd;
	// register: 21
	register long hnd;
	// register: 18
	register unsigned char *Dest;
	// register: 22
	register int OrigSize;
	{
		// register: 16
		register int SizeToRead;
	}
}


