// C:\diabpsx\SOURCE\GAMEPAD.CPP

#include "types.h"

// address: 0x80070C00
void flyabout__7GamePad(struct GamePad *this) {
	// register: 16
	register int cp;
	// register: 20
	register int owx;
	// register: 21
	register int owy;
	// register: 18
	register int wx;
	// register: 19
	register int wy;
	// register: 23
	// size: 0xE0
	register struct CBlocks *gblocks;
	// register: 4
	register int step;
}


// address: 0x800710BC
void CloseInvChr__Fv() {
}


// address: 0x80071104
void WorldToOffset__Fiii(int pnum, int WorldX, int WorldY) {
	// register: 8
	register int x;
	// register: 7
	register int y;
	// register: 3
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x800711B0
char pad_UpIsUp__Fi(int pval) {
	// register: 3
	register int walk_dir;
}


// address: 0x80071220
char pad_UpIsUpRight__Fi(int pval) {
	// register: 3
	register int walk_dir;
}


// address: 0x80071290
// size: 0x9C
struct GamePad *__7GamePadi(struct GamePad *this, int player_num) {
}


// address: 0x800713C0
void SetMoveStyle__7GamePadc(struct GamePad *this, char style_num) {
}


// address: 0x80071400
void SetDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x80071444
void SetComboDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x80071488
void SetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 18
	register int i;
}


// address: 0x800716F8
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 19
	register int i;
	// register: 20
	register int oc;
}


// address: 0x800718B8
int GetActionButton__7GamePadPFi_v(struct GamePad *this, void (*func)()) {
	{
	}
}


// address: 0x80071914
void SetUpAction__7GamePadPFi_vT1(struct GamePad *this, void (*func)(), void (*upfunc)()) {
}


// address: 0x80071950
void RunFunc__7GamePadi(struct GamePad *this, int pad) {
	// register: 2
	register int i;
}


// address: 0x800719F0
void ButtonDown__7GamePadi(struct GamePad *this, int button) {
}


// address: 0x80071DC4
void TestButtons__7GamePad(struct GamePad *this) {
	// register: 16
	register int hand;
	// register: 18
	register int joydown;
	// register: 19
	register int joyup;
}


// address: 0x80071E98
int CheckDirs__7GamePadi(struct GamePad *this, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
}


// address: 0x80071FB0
int CheckSide__7GamePadi(struct GamePad *this, int dir) {
	// register: 5
	register int lnd;
}


// address: 0x80071FF4
int CheckBodge__7GamePadi(struct GamePad *this, int dir) {
	// register: 20
	register int x;
	// register: 21
	register int y;
	// register: 16
	register int lnd;
	// register: 17
	register int rnd;
	// register: 22
	register int newdir;
	// register: 17
	register int fx;
	// register: 16
	register int fy;
}


// address: 0x800722F8
void walk__7GamePadc(struct GamePad *this, char cmd) {
	// register: 18
	register int xv;
	// register: 19
	register int yv;
	// register: 17
	register int dir;
}


// address: 0x80072604
void check_around_player__7GamePad(struct GamePad *this) {
	// register: 17
	register int x;
	// register: 18
	register int y;
	{
		{
			// register: 16
			// size: 0x98
			register struct ItemStruct *pi;
		}
	}
}


// address: 0x8007295C
void show_combos__7GamePad(struct GamePad *this) {
	// register: 22
	register int x;
	// register: 21
	register int y;
	{
		// register: 19
		register int i;
	}
}


// address: 0x80072B10
void Handle__7GamePad(struct GamePad *this) {
	// register: 17
	register int cp;
	{
		{
			{
				{
					{
						// register: 6
						register unsigned long msk;
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
				}
			}
		}
	}
}


// address: 0x80073174
void GamePadTask__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFEA8
	// size: 0x9C
	auto struct GamePad GPad1;
	// address: 0xFFFFFF48
	// size: 0x9C
	auto struct GamePad GPad2;
	// register: 18
	// size: 0x10
	register struct DEF_ARGS *args;
	// register: 16
	register int omp;
	// register: 17
	register int oms;
}


// address: 0x80073378
void PostGamePad__Fiiii(int val, int var1, int var2, int var3) {
	// register: 2
	// size: 0x5C
	register struct TASK *gtask;
	// register: 16
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x80073428
void Init_GamePad__Fv() {
}


// address: 0x80073458
void InitGamePadVars__Fv() {
}


// address: 0x800734E8
int SetWalkStyle__Fii(int pnum, int style) {
	// register: 17
	register int ret;
	// register: 17
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
}


