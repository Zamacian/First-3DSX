#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <3ds.h>

int main(int argc, char* argv[])
{
	gfxInitDefault();
	consoleInit(GFX_TOP, NULL);

	printf("Hello 3DSX\n");

	// Main loop
	while (aptMainLoop())
	{
		gspWaitForVBlank();
		gfxSwapBuffers();
		hidScanInput();

		// Your code goes here
		u32 kDown = hidKeysDown();
		if (kDown & KEY_START) {
			printf("exiting ...\n");
			break; // break in order to return to hbmenu
		}
		if (kDown & KEY_SELECT) {
			printf("Patrik, weis Hairline\n");
		}
		if (kDown & KEY_A) {
			printf("Ton pere t'a trompe.\n");
		}
		if (kDown & KEY_B) {
			printf("Net mat de jonge spillen !\n");
		}
		if (kDown & KEY_X) {
			printf("City >> Real !\n");
		}
		if (kDown & KEY_Y) {
			printf("Oula ...\n");
		}
		if (kDown & KEY_UP) {
			printf("WAllah pardon.\n");
		}
		if (kDown & KEY_DOWN) {
			printf("Charlie, la reponse est 3/20 , donc 15/100\n");
		}
		if (kDown & KEY_LEFT) {
			printf("Tibo NotInSHape\n");
		}
		if (kDown & KEY_RIGHT) {
			printf("My password isn't Rt:6-Y#)7\n");
		}
		if (kDown & KEY_L) {
			printf("Stammeto Potato\n");
		}
		if (kDown & KEY_R) {
			printf("Sorry, but Java stinks\n");
		}
	}

	gfxExit();
	return 0;
}