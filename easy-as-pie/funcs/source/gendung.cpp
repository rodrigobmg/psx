// C:\diabpsx\SOURCE\GENDUNG.CPP

#include "types.h"

// address: 0x80157FA8
void FillSolidBlockTbls__Fv() {
	// address: 0xFFFFFFF0
	auto unsigned long dwTiles;
	// register: 16
	register unsigned char *pSBFile;
	// register: 6
	register unsigned char *pTmp;
	{
		// register: 3
		register unsigned long d;
		{
			// register: 4
			register unsigned char bv;
			{
			}
		}
	}
}


// address: 0x80158154
void SetDungeonMicros__Fv() {
}


// address: 0x8015815C
void DRLG_InitTrans__Fv() {
	// register: 3
	register int x;
	// register: 5
	register int y;
}


// address: 0x801581D0
void DRLG_RectTrans__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 3
	register int i;
	// register: 5
	register int j;
}


// address: 0x80158250
void DRLG_CopyTrans__Fiiii(int sx, int sy, int dx, int dy) {
}


// address: 0x801582B8
void DRLG_ListTrans__FiPUc(int num, unsigned char *List) {
	// register: 17
	register int i;
	// register: 4
	register unsigned char x1;
	// register: 5
	register unsigned char y1;
	// register: 6
	register unsigned char x2;
	// register: 7
	register unsigned char y2;
}


// address: 0x8015832C
void DRLG_AreaTrans__FiPUc(int num, unsigned char *List) {
	// register: 17
	register int i;
	// register: 4
	register unsigned char x1;
	// register: 5
	register unsigned char y1;
	// register: 6
	register unsigned char x2;
	// register: 7
	register unsigned char y2;
}


// address: 0x801583BC
void DRLG_InitSetPC__Fv() {
}


// address: 0x801583D4
void DRLG_SetPC__Fv() {
	// register: 4
	register int i;
	// register: 5
	register int j;
	// register: 8
	register int x;
	// register: 10
	register int y;
	// register: 7
	register int w;
	// register: 9
	register int h;
}


// address: 0x80158484
void Make_SetPC__Fiiii(int x, int y, int w, int h) {
	// register: 8
	register int i;
	// register: 9
	register int j;
	// register: 4
	register int dx;
	// register: 5
	register int dy;
	// register: 7
	register int dh;
	// register: 6
	register int dw;
}


// address: 0x80158524
unsigned char DRLG_WillThemeRoomFit__FiiiiiPiT5(int floor, int x, int y, int minSize, int maxSize, int *width, int *height) {
	// register: 7
	register int ii;
	// register: 4
	register int xx;
	// register: 4
	register int yy;
	// register: 3
	register int xSmallest;
	// register: 8
	register int ySmallest;
	// address: 0xFFFFFF20
	// size: 0x50
	auto int xArray[20];
	// address: 0xFFFFFF70
	// size: 0x50
	auto int yArray[20];
	// register: 19
	register int xCount;
	// register: 18
	register int yCount;
	// register: 21
	register unsigned char yFlag;
	// register: 20
	register unsigned char xFlag;
}


// address: 0x801587EC
void DRLG_CreateThemeRoom__Fi(int themeIndex) {
	// register: 6
	register int xx;
	// register: 7
	register int yy;
}


// address: 0x801597F4
void DRLG_PlaceThemeRooms__FiiiiUc(int minSize, int maxSize, int floor, int freq, int rndSize) {
	// register: 18
	register int i;
	// register: 19
	register int j;
	// address: 0xFFFFFFC0
	auto int themeW;
	// address: 0xFFFFFFC4
	auto int themeH;
	{
		{
			{
				{
					{
						{
							{
								{
									{
										{
											// register: 3
											register int rv2;
											// register: 16
											register int min;
											// register: 17
											register int max;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80159A9C
void DRLG_HoldThemeRooms__Fv() {
	// register: 25
	register int i;
	// register: 5
	register int x;
	// register: 8
	register int y;
}


// address: 0x80159C50
unsigned char SkipThemeRoom__Fii(int x, int y) {
	// register: 7
	register int i;
}


// address: 0x80159D1C
void InitLevels__Fv() {
	{
		// register: 5
		register int i;
	}
}


