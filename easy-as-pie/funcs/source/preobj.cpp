// C:\diabpsx\SOURCE\PREOBJ.CPP

#include "types.h"

// address: 0x801539F0
void AddL1Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x80153B28
void AddSCambBook__Fi(int i) {
}


// address: 0x80153BC8
void AddChest__Fii(int i, int t) {
}


// address: 0x80153DA8
void AddL2Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x80153EF4
void AddL3Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x80153F88
void AddSarc__Fi(int i) {
	// register: 5
	register int x;
	// register: 2
	register int y;
}


// address: 0x80154064
void AddFlameTrap__Fi(int i) {
}


// address: 0x801540C0
void AddTrap__Fii(int i, int ot) {
	// register: 4
	register int mt;
}


// address: 0x801541B8
void AddArmorStand__Fi(int i) {
}


// address: 0x80154240
void AddObjLight__Fii(int i, int r) {
}


// address: 0x801542E8
void AddBarrel__Fii(int i, int ot) {
}


// address: 0x80154398
void AddShrine__Fi(int i) {
	// register: 3
	register int st;
	// address: 0xFFFFFFD0
	// size: 0x1A
	auto unsigned char slist[26];
}


// address: 0x801544E8
void AddBookcase__Fi(int i) {
}


// address: 0x80154540
void AddBookstand__Fi(int i) {
}


// address: 0x80154588
void AddBloodFtn__Fi(int i) {
}


// address: 0x801545D0
void AddPurifyingFountain__Fi(int i) {
	// register: 5
	register int x;
	// register: 7
	register int y;
}


// address: 0x801546AC
void AddGoatShrine__Fi(int i) {
}


// address: 0x801546F4
void AddCauldron__Fi(int i) {
}


// address: 0x8015473C
void AddMurkyFountain__Fi(int i) {
	// register: 5
	register int x;
	// register: 7
	register int y;
}


// address: 0x80154818
void AddTearFountain__Fi(int i) {
}


// address: 0x80154860
void AddDecap__Fi(int i) {
}


// address: 0x801548D8
void AddVilebook__Fi(int i) {
}


// address: 0x80154928
void AddMagicCircle__Fi(int i) {
}


// address: 0x8015499C
void AddBrnCross__Fi(int i) {
}


// address: 0x801549E4
void AddPedistal__Fi(int i) {
}


// address: 0x80154A58
void AddStoryBook__Fi(int i) {
	// register: 4
	register int bookframe;
}


// address: 0x80154C24
void AddWeaponRack__Fi(int i) {
}


// address: 0x80154CAC
void AddTorturedBody__Fi(int i) {
}


// address: 0x80154D28
void AddFlameLvr__Fi(int i) {
}


// address: 0x80154D68
void GetRndObjLoc__FiRiT1(int randarea, int *xx, int *yy) {
	// register: 17
	register int i;
	// register: 16
	register int j;
	// register: 3
	register unsigned char failed;
	{
		{
			// register: 19
			register int tries;
		}
	}
}


// address: 0x80154E74
void AddMushPatch__Fv() {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
	{
		{
			// register: 16
			register int i;
		}
	}
}


// address: 0x80154F98
void AddSlainHero__Fv() {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x80154FD8
unsigned char RndLocOk__Fii(int xp, int yp) {
}


// address: 0x801550BC
unsigned char TrapLocOk__Fii(int xp, int yp) {
}


// address: 0x80155124
unsigned char RoomLocOk__Fii(int xp, int yp) {
}


// address: 0x801551BC
void InitRndLocObj__Fiii(int min, int max, int objtype) {
	// register: 20
	register int xp;
	// register: 21
	register int yp;
	// register: 23
	register int numobjs;
	{
		// register: 22
		register int i;
	}
}


// address: 0x80155368
void InitRndLocBigObj__Fiii(int min, int max, int objtype) {
	// register: 18
	register int xp;
	// register: 21
	register int yp;
	// register: 23
	register int numobjs;
	{
		// register: 22
		register int i;
	}
}


// address: 0x80155560
void InitRndLocObj5x5__Fiii(int min, int max, int objtype) {
	// register: 19
	register int xp;
	// register: 18
	register int yp;
	// register: 16
	register int xx;
	// register: 17
	register int yy;
	// register: 21
	register int cnt;
	// register: 20
	register unsigned char done;
	// register: 23
	register int numobjs;
	{
		// register: 22
		register int i;
	}
}


// address: 0x80155688
void SetMapObjects__FPUcii(unsigned char *pMap, int startx, int starty) {
	// register: 16
	register int i;
	// register: 18
	register int j;
	// register: 19
	register int rw;
	// register: 20
	register int rh;
	// register: 17
	register unsigned char *lm;
	// register: 7
	register unsigned char *h;
	// register: 2
	register long mapoff;
	// register: 3
	register int ot;
	// address: 0xFFFFFF60
	// size: 0x38
	auto unsigned char fileload[56];
	// address: 0xFFFFFF98
	// size: 0x20
	auto char filestr[32];
}


// address: 0x80155928
void ClrAllObjects__Fv() {
	// register: 4
	register int i;
}


// address: 0x80155A18
void AddTortures__Fv() {
	// register: 19
	register int yp;
	// register: 18
	register int xp;
}


// address: 0x80155BA4
void AddCandles__Fv() {
	// register: 16
	register int xp;
	// register: 17
	register int yp;
}


// address: 0x80155C2C
void AddTrapLine__Fiiii(int min, int max, int tobjtype, int lobjtype) {
	// address: 0xFFFFFFA0
	auto int i;
	// register: 16
	register int j;
	// register: 17
	register int xp;
	// register: 18
	register int yp;
	// address: 0xFFFFFFA8
	auto int numobjs;
	// address: 0xFFFFFFB0
	auto int sx;
	// address: 0xFFFFFFB8
	auto int sy;
	// address: 0xFFFFFFC0
	auto int xa;
	// address: 0xFFFFFFC8
	auto int ya;
	// register: 20
	register int t;
	// register: 30
	register int lx1;
	// register: 23
	register int ly1;
	// register: 22
	register int lx2;
	// register: 21
	register int ly2;
	// register: 19
	register unsigned char found;
}


// address: 0x80155FC8
void AddLeverObj__Fiiiiiiii(int lx1, int ly1, int lx2, int ly2, int x1, int y1, int x2, int y2) {
}


// address: 0x80155FD0
void AddBookLever__Fiiiiiiiii(int lx1, int ly1, int lx2, int ly2, int x1, int y1, int x2, int y2, int msg) {
	// register: 20
	register int xp;
	// register: 19
	register int yp;
	// register: 16
	register int xx;
	// register: 17
	register int yy;
	// register: 21
	register int cnt;
	// register: 18
	register unsigned char done;
	// register: 16
	register int i;
}


// address: 0x801561E4
void InitRndBarrels__Fv() {
	// register: 19
	register int xp;
	// register: 18
	register int yp;
	// register: 4
	register int o;
	// register: 20
	register int c;
	// register: 17
	register int t;
	// register: 30
	register int numobjs;
	{
		// register: 21
		register int i;
		{
			// register: 16
			register unsigned char found;
		}
	}
}


// address: 0x80156380
void AddL1Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x801564B8
void AddL2Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x801565CC
void AddL3Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 16
	register int i;
	// register: 19
	register int j;
	// register: 17
	register int pn;
}


// address: 0x801566CC
unsigned char WallTrapLocOk__Fii(int xp, int yp) {
}


// address: 0x80156734
unsigned char TorchLocOK__Fii(int xp, int yp) {
}


// address: 0x80156774
void AddL2Torches__Fv() {
	// register: 16
	register int i;
	// register: 18
	register int j;
	// register: 17
	register int pn;
}


// address: 0x80156928
void AddObjTraps__Fv() {
	// register: 18
	register int i;
	// register: 19
	register int j;
	// register: 16
	register int x;
	// register: 17
	register int y;
	// address: 0xFFFFFFD0
	auto int rndv;
	// register: 23
	register char oi;
}


// address: 0x80156CA0
void AddChestTraps__Fv() {
	// register: 18
	register int i;
	// register: 20
	register int j;
}


// address: 0x80156DF0
void LoadMapObjects__FPUciiiiiii(unsigned char *pMap, int startx, int starty, int x1, int y1, int w, int h, int leveridx) {
	// register: 17
	register int i;
	// register: 20
	register int j;
	// register: 21
	register int rw;
	// register: 22
	register int rh;
	// register: 16
	register int ox;
	// register: 19
	register int oy;
	// register: 18
	register unsigned char *lm;
	// register: 2
	register long mapoff;
}


// address: 0x80156F5C
void AddDiabObjs__Fv() {
	// register: 17
	register unsigned char *lpSetPiece;
	{
		{
			{
			}
		}
	}
}


// address: 0x801570B0
void AddStoryBooks__Fv() {
	// register: 19
	register int xp;
	// register: 20
	register int yp;
	// register: 16
	register int xx;
	// register: 17
	register int yy;
	// register: 21
	register int cnt;
	// register: 18
	register unsigned char done;
}


// address: 0x80157200
void AddHookedBodies__Fi(int freq) {
	// register: 23
	register int i;
	// address: 0xFFFFFFC8
	auto int j;
	// register: 19
	register int ii;
	// register: 17
	register int jj;
}


// address: 0x801573F8
void AddL4Goodies__Fv() {
}


// address: 0x801574A8
void AddLazStand__Fv() {
	// register: 19
	register int xp;
	// register: 20
	register int yp;
	// register: 16
	register int xx;
	// register: 17
	register int yy;
	// register: 21
	register int cnt;
	// register: 18
	register unsigned char done;
}


// address: 0x8015763C
void InitObjects__Fv() {
	// register: 17
	register int textdef;
	// register: 16
	register unsigned char *setp;
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


// address: 0x80157CA0
void PreObjObjAddSwitch__Fiiii(int ot, int ox, int oy, int oi) {
}


