// C:\diabpsx\SOURCE\SOUND.CPP

#include "types.h"

// address: 0x80070848
void snd_update__FUc(unsigned char bStopAll) {
}


// address: 0x80070850
void snd_get_volume__FPCcPl(char *pszKey, long *plVolume) {
	// register: 2
	register unsigned long dwTemp;
}


// address: 0x800708B8
void snd_stop_snd__FP4TSnd(struct TSnd *pSnd) {
}


// address: 0x800708D8
void snd_play_snd__FP4TSFXll(struct TSFX *pSnd, long lVolume, long lPan) {
}


// address: 0x80070948
void snd_play_msnd__FUsll(unsigned short pszName, long lVolume, long lPan) {
}


// address: 0x800709E4
void snd_init__FUl(unsigned long hWnd) {
}


// address: 0x80070A40
void music_stop__Fv() {
}


// address: 0x80070A84
void music_fade__Fv() {
}


// address: 0x80070AC4
void music_start__Fi(int nTrack) {
	{
		{
			// register: 6
			register int MusicVolume;
		}
	}
}


// address: 0x80070B50
void music_hold__Fv() {
}


// address: 0x80070BB0
void music_release__Fv() {
}


