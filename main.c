// * NO LONGER USES COOPER'S DO-WHILE LOOP *

// SoC Labs : 6, 7, 8
// Current  : Lab 8
// Group    : Erl Cooper James

// INCLUDES AND DEFINES ---------------------------------------------------------------------------------------------------------------------------------------//

#include <stdio.h>
#include "platform.h"
#include "xil_printf.h"
#include "gpio.h"
#include "xparameters.h"

#include "defines.h"
#include "smap.h"
#include "bgtilemap.h"
#include "fgtilemap.h"
#include "globals.h"
#include "functions.h"

// MAIN FUNCTION ---------------------------------------------------------------------------------------------------------------------------------------//

int main() {

// MAIN INITIALIZATIONS ---------------------------------------------------------------------------------------------------------------------------------------//

    init_platform(); // idk what this is for

    init_structs();
    init_o_structs();

//    xil_printf("p.x = %i\n p.y = %i\n", p.x, p.y); // testing to get player's coords

    print("Hello World\n\r"); // test to see if UART (SDK Terminal) is working / if program started
    XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 0, 0); //set write enable all off

    int joy; // for controller (one that works at least)
    int dip = 0; // for built in dip switches

    draw_sm(); // initialize spritemap
    //draw_bg(); // testing
    set_bg_1(); // sets a custom background
    //set_bg_2(); // testing
    draw_fg(); // initialize foreground
    draw_scrn1(); // draw screen 1 objects

    draw_character(p);
    draw_character(e1);
    draw_character(e2);

//    int temp = (p.x+p.y*40);
//
//    xil_printf("x coord \t\t: \t%i\n", p.x);		// testing
//    xil_printf("y coord \t\t: \t%i\n", p.y);
//    xil_printf("1D index \t: \t%i\n", temp);

//    xil_printf("\r%i\n", foreground[((p.x+1)+(p.y+1)*40)]); // testing

//    xil_printf("bg sprite \t: \t%i", background[temp]);		// jumble of code for trying to read certain background sprites
//    xil_printf("%i", background[temp+1]);
//    xil_printf("%i", background[temp+2]);
//    xil_printf("%i\n", background[temp+3]);

    xil_printf("Test:\n\r"); // print test

    int update = 0;	 // update variable for game timer
    int update2 = 0; // another update variable for gravity timer
    int update3 = 0; // another update variable for jump timer

// MAIN LOOP ---------------------------------------------------------------------------------------------------------------------------------------//

     while(1) {

		joy = XGpio_ReadReg(XPAR_MYIPJOY_0_S00_AXI_BASEADDR, 0); // get controller input
		dip = XGpio_ReadReg(XPAR_EXDIP_0_S00_AXI_BASEADDR, 0); // get dip switch input

		XGpio_WriteReg(XPAR_EXLED_0_S00_AXI_BASEADDR, 0, joy); // update LED for controller input
		XGpio_WriteReg(XPAR_EXLED_0_S00_AXI_BASEADDR, 0, dip); // update LED for controller input

		//xil_printf("%d\n", joy); // test what gets read for controller
		//xil_printf("%i\n", dip); // test what gets read for dip switches

		//if (dip != 0) xil_printf("%i\n", dip); // test what gets read for dip switches

		// if (joy == start) reset_all(); // if start is pressed, reset game

		// for testing
//		if (joy == down) {
//			screen = 6;
//			set_bg_1();
//			reset_fg();
//			draw_scrn6();
//			p.x = p.x - 38;
//		}

		check_death_p(); // player death
		check_death_e(); // enemies death

		if (update3 == 1) {
			update3 = 0;
			check_jump(); // check if jump is pressed or if player is jumping
		}
		else update3++;

		if (update2 == 6) {

			check_gravity(); // player gravity

//			update_e(); // updates enemies and boss

			update2 = 0;

		} else update2++;

    	if (update == 3) {

//    		debug_p_coords(); // for debugging player's coordinates
//    		debug_e_coords(e1);
//    		debug_e_coords(e2);
//    		debug_e_coords(e3);
//    		debug_e_coords(e4);
//    		debug_e_coords(boss);

//    		check_death_p(); // player death
//    		check_death_e(); // enemies death
    		check_door(); // player door

//    		check_jump();

    		draw_fg();

    		draw_character(p); // p = struct for player

    		update_projectiles();

    		check_dip(dip); // for dip switches
    		check_controller(joy); // for nes controller

    		update_screen(joy);

    		update_e(); // updates enemies and boss

//    		debug_p_coords(); // for debugging player's coordinates

    		update = 0;

    	} else update++;

    	wait(150000); // wait function for game timer

    } // while

    cleanup_platform(); // idk what this is for
    return 0;
} // main

// END ---------------------------------------------------------------------------------------------------------------------------------------//

// lab 8 requirements
//
// DONE get direction of characters (player, enemies, boss)
//
// DONE make enemies (different from boss)
//
// DONE make AI for enemies
//   DONE enemy 1 - left and right
//   DONE enemy 2 - jump and shoot
//   DONE enemy 3 - left and right
//   DONE enemy 4 - stand still and shoot
//   DONE enemy 5 - left and right
//   DONE enemy 6 - left and right
//   DONE enemy 7 - jumps
//   DONE enemy 8 - jumps
//   DONE enemy 9 - stuck in a wall lol
//   DONE enemy 10 - IS A CLOUD - stay still and shoot
//
// DONE make boss (Obito)
//   DONE make AI for boss - jump on platforms, jumps on clouds, reset
//
// DONE implement projectile attack (shurikens / ninja stars)
//   DONE player (Naruto)
//   DONE enemies (Zetsus)
//   DONE boss (Obito)
//
// WIP make sprites
//   DONE Naruto
//   DONE Zetsus
//   DONE Obito
//   DONE platforms/walls
//   DONE water
//   DONE sky
//   DONE clouds
//   DONE door
//   DONE projectile

// other goals
//
// WIP clean up code
//   WIP actually use structs
//     RIP I TRIED use structs properly
//   WIP make logic easy to follow
//   MEH maybe use linked lists / arrays / pointers
//
// WIP fix player projectile collision - glitch: can shoot through 1 tile wide walls
//
// WIP fix death conditions
//
// WIP health/death system (kinda done - everything dies in 1 hit so far)
//   WIP player
//   WIP enemies
//   WIP boss










