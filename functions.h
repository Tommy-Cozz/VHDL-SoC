#include "defines.h"

// GENERAL FUNCTIONS ---------------------------------------------------------------------------------------------------------------------------------------//

void init_structs() { // initailize/reset struct variables

	p.r_bounds = 0;
	p.l_bounds = 0;
	p.u_bounds = 0;
	p.d_bounds = 0;

	p.name = 'p';
    p.t1 = s16; // top left  tile/sprite of player
    p.t2 = s17; // top right tile/sprite of player
    p.t3 = s18; // bot left  tile/sprite of player
    p.t4 = s19; // bot right tile/sprite of player
    p.x = 3-1;  // player x start coord
    p.y = 23-1; // player y start coord
    p.left = 0; // player starts facing not left
    p.right = 1;// player starts facing right
    p.dead = 0; // player is not dead

    e1.name = '1';
    e1.t1 = s20; // top left  tile/sprite of enemy 1
    e1.t2 = s21; // top right tile/sprite of enemy 1
    e1.t3 = s22; // bot left  tile/sprite of enemy 1
    e1.t4 = s23; // bot right tile/sprite of enemy 1
    e1.x = 28-1; // enemy 1 x start coord
    e1.y = 23-1; // enemy 1 y start coord
    e1.dead = 0; // enemy 1 is not dead

    e2.name = '2';
    e2.t1 = s20; // top left  tile/sprite of enemy 2
    e2.t2 = s21; // top right tile/sprite of enemy 2
    e2.t3 = s22; // bot left  tile/sprite of enemy 2
    e2.t4 = s23; // bot right tile/sprite of enemy 2
    e2.x = 33-1; // enemy 2 x start coord
    e2.y = 23-1; // enemy 2 y start coord
    e2.dead = 0; // enemy 2 is not dead

    e3.name = '3';
    e3.t1 = s20; // top left  tile/sprite of enemy 3
    e3.t2 = s21; // top right tile/sprite of enemy 3
    e3.t3 = s22; // bot left  tile/sprite of enemy 3
    e3.t4 = s23; // bot right tile/sprite of enemy 3
    e3.x = 20-1; // enemy 3 x start coord
    e3.y = 18-1; // enemy 3 y start coord
    e3.dead = 0; // enemy 3 is not dead

    e4.name = '4';
    e4.t1 = s20; // top left  tile/sprite of enemy 4
    e4.t2 = s21; // top right tile/sprite of enemy 4
    e4.t3 = s22; // bot left  tile/sprite of enemy 4
    e4.t4 = s23; // bot right tile/sprite of enemy 4
    e4.x = 31-1; // enemy 4 x start coord
    e4.y = 17-1; // enemy 4 y start coord
    e4.dead = 0; // enemy 4 is not dead

    e5.name = '5';
    e5.t1 = s20; // top left  tile/sprite of enemy 5
    e5.t2 = s21; // top right tile/sprite of enemy 5
    e5.t3 = s22; // bot left  tile/sprite of enemy 5
    e5.t4 = s23; // bot right tile/sprite of enemy 5
    e5.x = 22-1; // enemy 5 x start coord
    e5.y = 21-1; // enemy 5 y start coord
    e5.dead = 0; // enemy 5 is not dead

    e6.name = '6';
    e6.t1 = s20; // top left  tile/sprite of enemy 6
    e6.t2 = s21; // top right tile/sprite of enemy 6
    e6.t3 = s22; // bot left  tile/sprite of enemy 6
    e6.t4 = s23; // bot right tile/sprite of enemy 6
    e6.x = 33-1; // enemy 6 x start coord
    e6.y = 18-1; // enemy 6 y start coord
    e6.dead = 0; // enemy 6 is not dead

    e7.name = '7';
    e7.t1 = s20; // top left  tile/sprite of enemy 7
    e7.t2 = s21; // top right tile/sprite of enemy 7
    e7.t3 = s22; // bot left  tile/sprite of enemy 7
    e7.t4 = s23; // bot right tile/sprite of enemy 7
    e7.x = 38-1; // enemy 7 x start coord
    e7.y = 26-1; // enemy 7 y start coord
    e7.dead = 0; // enemy 7 is not dead

    e8.name = '8';
    e8.t1 = s20; // top left  tile/sprite of enemy 8
    e8.t2 = s21; // top right tile/sprite of enemy 8
    e8.t3 = s22; // bot left  tile/sprite of enemy 8
    e8.t4 = s23; // bot right tile/sprite of enemy 8
    e8.x = 26-1; // enemy 8 x start coord
    e8.y = 26-1; // enemy 8 y start coord
    e8.dead = 0; // enemy 8 is not dead

    e9.name = '9';
    e9.t1 = s20; // top left  tile/sprite of enemy 9
    e9.t2 = s21; // top right tile/sprite of enemy 9
    e9.t3 = s22; // bot left  tile/sprite of enemy 9
    e9.t4 = s23; // bot right tile/sprite of enemy 9
    e9.x = 33-1; // enemy 9 x start coord
    e9.y = 18-1; // enemy 9 y start coord
    e9.dead = 0; // enemy 9 is not dead

    e10.name = '0';
    e10.t1 = s20; // top left  tile/sprite of enemy 10
    e10.t2 = s21; // top right tile/sprite of enemy 10
    e10.t3 = s22; // bot left  tile/sprite of enemy 10
    e10.t4 = s23; // bot right tile/sprite of enemy 10
    e10.x = 24-1; // enemy 10 x start coord
    e10.y = 14-1; // enemy 10 y start coord
    e10.dead = 0; // enemy 10 is not dead

    boss.name = 'b';
    boss.t1 = s24; // top left  tile/sprite of boss
    boss.t2 = s25; // top right tile/sprite of boss
    boss.t3 = s26; // bot left  tile/sprite of boss
    boss.t4 = s27; // bot right tile/sprite of boss
    boss.x = 35-1; // boss x start coord
    boss.y = 23-1; // boss y start coord
    boss.dead = 0; // boss is not dead

    p1.x = 0;
    p1.y = 0;
    p1.s = s11; // sprite/tile for projectile 1

    p2.x = 0;
    p2.y = 0;
    p2.s = s11; // sprite/tile for projectile 2

    p3.x = 0;
    p3.y = 0;
    p3.s = s11; // sprite/tile for projectile 3

    p4.x = 0;
    p4.y = 0;
    p4.s = s11; // sprite/tile for projectile 4

    p5.x = 0;
    p5.y = 0;
    p5.s = s11; // sprite/tile for projectile 5

    p6.x = 0;
    p6.y = 0;
    p6.s = s11; // sprite/tile for projectile 6

    p7.x = 0;
    p7.y = 0;
    p7.s = s11; // sprite/tile for projectile 7

    p8.x = 0;
    p8.y = 0;
    p8.s = s11; // sprite/tile for projectile 8

    p9.x = 0;
    p9.y = 0;
    p9.s = s11; // sprite/tile for projectile 9

    p10.x = 0;
    p10.y = 0;
    p10.s = s11; // sprite/tile for projectile 10

    pboss.x = 0;
    pboss.y = 0;
    pboss.s = s11; // sprite/tile for projectile boss

    p.runOnce = 0;
    e1.runOnce = 0;
    e2.runOnce = 0;
    e3.runOnce = 0;
    e4.runOnce = 0;
    e5.runOnce = 0;
    e6.runOnce = 0;
    e7.runOnce = 0;
    e8.runOnce = 0;
    e9.runOnce = 0;
    e10.runOnce = 0;
    boss.runOnce = 0;

} // void init_structs

void init_o_structs() { // initialize/reset object and screen map variables

	o1.x =  5;
	o1.y = 20;
	o1.s = s3;
	o1.w =  1;
	o1.h =  4;

	o2.x =  8;
	o2.y = 21;
	o2.s = s3;
	o2.w =  3;
	o2.h =  1;

	o3.x = 13;
	o3.y = 22;
	o3.s = s3;
	o3.w =  3;
	o3.h =  1;

} // void init_o_structs

void move_to_corner(struct character t) {

	t.x = 39;
	t.y = 29;

} // void move_to_corner

void debug_p_coords() { // for debugging player coordinates

	foreground[p.x + p.y*40] = s12;

	xil_printf("\np.x p.y = %i %i    ", p.x, p.y);

} // void debug_p_coords

void debug_e_coords(struct character en) { // for debugging enemy and boss coordinates

	foreground[en.x + en.y*40] = s13;

	xil_printf("en.x en.y = %i %i    ", en.x, en.y);

} // void debug_e_coords

void facing_right_player() { // if player facing right, update sprite

//	p.t1 = s7;  // top left  tile/sprite of player
//	p.t2 = s6;  // top right tile/sprite of player
//	p.t3 = s6;  // bot left  tile/sprite of player
//	p.t4 = s7;  // bot right tile/sprite of player

	p.left = 0;
	p.right = 1;

} // void facing_right_player

void facing_left_player() { // if player facing left, update sprite

//	p.t1 = s6;  // top left  tile/sprite of player
//	p.t2 = s7;  // top right tile/sprite of player
//	p.t3 = s7;  // bot left  tile/sprite of player
//	p.t4 = s6;  // bot right tile/sprite of player

	p.right = 0;
	p.left = 1;

} // void facing_left_player

void check_p_p1() { // check collision for player's projectile 1

	int t = (p1.x) + (p1.y)*40;

	if (p1.left == 1) { // if projectile 1 is facing left
		if ( (p1.x == 1-1) || (p1.x == 40-2) ) {
			p.pcd = 0;
			xil_printf("LEFT BOUNDARY - projectile 1\n"); // reset projectile 1
		}
		else if ((background[t-1] == s5) || (background[t-2] == s5)) { // s5 = ground sprite
			p.pcd = 0;
			xil_printf("GROUND COLLISION - projectile 1\n"); // reset projectile 1
		}
		else if ((foreground[t] == s3) || (foreground[t-1] == s3)) { // s3 = wall/platform sprite
			p.pcd = 0;
			xil_printf("LEFT OBJECT COLLISION - projectile 1\n"); // reset projectile 1
		}
	}
	else { // if projectile 1 is facing right
		if ( (p1.x == 40-2) || (p1.x == 1-1) ) {
			p.pcd = 0;
			xil_printf("RIGHT BOUNDARY - projectile 1\n"); // reset projectile 1
		}
		else if ((background[t+1] == s5) || (background[t+2] == s5)) { // s5 = ground sprite
			p.pcd = 0;
			xil_printf("GROUND COLLISION - projectile 1\n"); // reset projectile 1
		}
		else if ( (foreground[t] == s3) || (foreground[t+1] == s3) || (foreground[t+2] == s3) ) { // s3 = wall/platform sprite
			p.pcd = 0;
			xil_printf("RIGHT OBJECT COLLISION - projectile 1\n"); // reset projectile 1
		}
	}

} // void check_p_p1

// PROJECTILE FUNCTIONS ---------------------------------------------------------------------------------------------------------------------------------------//

void draw_projectile_p() { // draw player's projectile

	int pro = p1.x + p1.y*40; // projectile 1d array coord
	int spr = p1.s;

	if (p.right == 0) { // if projectile is facing left
		p1.right = 0;
		p1.left = 1;
//		p1.x = p1.x - 2;
		p1.x--;
		pro--;
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 5*4 , pro); //set address
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 6*4 , spr); //set data					// projectile sprite
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 0, weforeground); //write to foremap
	}
	else { // if projectile is facing right
		p1.left = 0;
		p1.right = 1;
//		p1.x = p1.x + 2;
		p1.x++;
		pro = pro + 2;
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 5*4 , pro); //set address
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 6*4 , spr); //set data					// projectile sprite
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 0, weforeground); //write to foremap
	}

	check_p_p1();

} // void draw_projectile_p

void draw_projectile_e2() {

	int temp = p2.x + p2.y*40;

	p2.x--;

	XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 5*4 , temp); //set address
	XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 6*4 , p2.s); //set data					// projectile sprite
	XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 0, weforeground); //write to foremap

} // void draw_projectile_e2

void draw_projectile_e4() {

	int temp = p4.x + p4.y*40;

	p4.x--;

	XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 5*4 , temp); //set address
	XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 6*4 , p4.s); //set data					// projectile sprite
	XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 0, weforeground); //write to foremap

} // void draw_projectile_e4

void draw_projectile_e10() {

	int temp = p10.x + p10.y*40;

	p10.x--;

	XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 5*4 , temp); //set address
	XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 6*4 , p10.s); //set data					// projectile sprite
	XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 0, weforeground); //write to foremap

} // void draw_projectile_e10

void draw_projectile_boss() {

	int temp = pboss.x + pboss.y*40;

	if (boss.left  == 1) pboss.x--;
	if (boss.right == 1) pboss.x++;

	XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 5*4 , temp); //set address
	XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 6*4 , pboss.s); //set data					// projectile sprite
	XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 0, weforeground); //write to foremap

} // void draw_projectile_boss()

void p_shoot() { // player fires projectile

	if (p.pcd == 0) {

		p.pcd = 8;

		p1.x = p.x; // projectile x coord
		p1.y = p.y; // projectile y coord

		draw_projectile_p();

	} // if p.pcd == 0

} // void p_shoot

void e2_shoot() { // enemy 2 fires projectile

//	int temp = e2.x-1 + e2.y*40;

	if (e2.pcd == 0) {
		e2.pcd = 6;
		p2.x = e2.x-1;
		p2.y = e2.y;
		draw_projectile_e2();
	}

//	xil_printf("%i\n", e2.pcd); // testing

} // void e2_shoot

void e4_shoot() { // enemy 4 fires projectile

	if (e4.pcd == 0) {
		e4.pcd = 6;
		p4.x = e4.x-1;
		p4.y = e4.y;
		draw_projectile_e4();
	}

} // void e4_shoot

void e10_shoot() { // enemy 10 fires projectile

	if (e10.pcd == 0) {
		e10.pcd = 6;
		p10.x = e10.x-1;
		p10.y = e10.y;
		draw_projectile_e10();
	}

} // void e10_shoot

void boss_shoot() { // boss fires projectile

	if (boss.pcd == 0) {
		boss.pcd = 6;
		pboss.x = boss.x-1;
		pboss.y = boss.y;
		draw_projectile_boss();
	}

} // void boss_shoot

void update_projectiles() {

	if (p.pcd > 0) { p.pcd--; draw_projectile_p(); }
	if (e2.pcd > 0) { e2.pcd--; draw_projectile_e2(); }
	if (e4.pcd > 0) { e4.pcd--; draw_projectile_e4(); }
	if (e10.pcd > 0) { e10.pcd--; draw_projectile_e10(); }
	if (boss.pcd > 0) { boss.pcd--; draw_projectile_boss(); }

} // int update_projectiles

// GENERAL FUNCTIONS ---------------------------------------------------------------------------------------------------------------------------------------//

void check_dip(int dip_) {

//	int temp = 0; // temporary

	switch(dip_) {
		case 1:
			// jump
			p.j = 1;
			break;
		case 5:
			// jump and move right
			p.j = 1;
			btn_right();
			break;
		case 9:
			// jump and move left
			p.j = 1;
			btn_left();
			break;
		case 2:
			// shoot projectile
			p_shoot();
//			xil_printf("%i", p.pcd); // temporary
			break;
		case 3:
			// jump and shoot projectile
			p_shoot();
			p.j = 1;
			break;
		case 4:
			// move right
			btn_right();
			break;
		case 6:
			// shoot and move right
			p_shoot();
			btn_right();
			break;
		case 8:
			// move left
			btn_left();
			break;
		case 10:
			// shoot and move left
			p_shoot();
			btn_left();
			break;
		case 13:
			// left + right + jump
			reset_all();
			break;
	} // switch(dip)
} // void check_dip

void draw_character(struct character t) { // draws any of the characters: player, enemies 1-4, boss

	if (t.dead == 0) { // dead = 0 means alive

		int temp = t.y*40 + t.x;

		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 5*4 , temp); //set address				// top left sprite of character
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 6*4 , t.t1); //set data
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 0, weforeground); //write to foremap

		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 5*4 , temp+1); //set address			// top right sprite of character
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 6*4 , t.t2); //set data
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 0, weforeground); //write to foremap

		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 5*4 , temp+40); //set address			// bot left sprite of character
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 6*4 , t.t3); //set data
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 0, weforeground); //write to foremap

		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 5*4 , temp+40+1); //set address			// bot right sprite of character
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 6*4 , t.t4); //set data
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 0, weforeground); //write to foremap

		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 0, 0); //turn off write

	}

} // void draw_character

void check_death_e() { // check if enemies die or if boss dies (to player's projectile - this is the only way they can die)

	if ( ((e1.x   == p1.x+1) && (e1.y   == p1.y)) ||
		 ((e1.x+1 == p1.x+1) && (e1.y   == p1.y)) ||
		 ((e1.x   == p1.x+1) && (e1.y+1 == p1.y)) ||
		 ((e1.x+1 == p1.x+1) && (e1.y+1 == p1.y)) ) {
		e1.dead = 1;
		e1.x = 40-2;
		e1.y = 30-2;
		print("e1 died\n");
	}

	if ( ((e2.x   == p1.x+1) && (e2.y   == p1.y)) ||
		 ((e2.x+1 == p1.x+1) && (e2.y   == p1.y)) ||
		 ((e2.x   == p1.x+1) && (e2.y+1 == p1.y)) ||
		 ((e2.x+1 == p1.x+1) && (e2.y+1 == p1.y)) ) {
		e2.dead = 1;
		e2.x = 40-2;
		e2.y = 30-2;
		print("e2 died\n");
		p2.x = 40-2;
		p2.y = 30-2;
	}

	if ( ((e3.x   == p1.x+1) && (e3.y   == p1.y)) ||
		 ((e3.x+1 == p1.x+1) && (e3.y   == p1.y)) ||
		 ((e3.x   == p1.x+1) && (e3.y+1 == p1.y)) ||
		 ((e3.x+1 == p1.x+1) && (e3.y+1 == p1.y)) ) {
		e3.dead = 1;
		e3.x = 40-2;
		e3.y = 30-2;
		print("e3 died\n");
	}

	if ( ((e4.x   == p1.x+1) && (e4.y   == p1.y)) ||
		 ((e4.x+1 == p1.x+1) && (e4.y   == p1.y)) ||
		 ((e4.x   == p1.x+1) && (e4.y+1 == p1.y)) ||
		 ((e4.x+1 == p1.x+1) && (e4.y+1 == p1.y)) ) {
		e4.dead = 1;
		e4.x = 40-2;
		e4.y = 30-2;
		print("e4 died\n");
		p4.x = 40-2;
		p4.y = 30-2;
	}

	if ( ((e5.x   == p1.x+1) && (e5.y   == p1.y)) ||
		 ((e5.x+1 == p1.x+1) && (e5.y   == p1.y)) ||
		 ((e5.x   == p1.x+1) && (e5.y+1 == p1.y)) ||
		 ((e5.x+1 == p1.x+1) && (e5.y+1 == p1.y)) ) {
		e5.dead = 1;
		e5.x = 40-2;
		e5.y = 30-2;
		print("e5 died\n");
	}

	if ( ((e6.x   == p1.x+1) && (e6.y   == p1.y)) ||
		 ((e6.x+1 == p1.x+1) && (e6.y   == p1.y)) ||
		 ((e6.x   == p1.x+1) && (e6.y+1 == p1.y)) ||
		 ((e6.x+1 == p1.x+1) && (e6.y+1 == p1.y)) ) {
		e6.dead = 1;
		e6.x = 40-2;
		e6.y = 30-2;
		print("e6 died\n");
	}

	if ( ((e7.x   == p1.x+1) && (e7.y   == p1.y)) ||
		 ((e7.x+1 == p1.x+1) && (e7.y   == p1.y)) ||
		 ((e7.x   == p1.x+1) && (e7.y+1 == p1.y)) ||
		 ((e7.x+1 == p1.x+1) && (e7.y+1 == p1.y)) ) {
		e7.dead = 1;
		e7.x = 40-2;
		e7.y = 30-2;
		print("e7 died\n");
	}

	if ( ((e8.x   == p1.x+1) && (e8.y   == p1.y)) ||
		 ((e8.x+1 == p1.x+1) && (e8.y   == p1.y)) ||
		 ((e8.x   == p1.x+1) && (e8.y+1 == p1.y)) ||
		 ((e8.x+1 == p1.x+1) && (e8.y+1 == p1.y)) ) {
		e8.dead = 1;
		e8.x = 40-2;
		e8.y = 30-2;
		print("e8 died\n");
	}

	if ( ((e9.x   == p1.x+1) && (e9.y   == p1.y)) ||
		 ((e9.x+1 == p1.x+1) && (e9.y   == p1.y)) ||
		 ((e9.x   == p1.x+1) && (e9.y+1 == p1.y)) ||
		 ((e9.x+1 == p1.x+1) && (e9.y+1 == p1.y)) ) {
		e9.dead = 1;
		e9.x = 40-2;
		e9.y = 30-2;
		print("e9 died\n");
	}

	if ( ((e10.x   == p1.x+1) && (e10.y   == p1.y)) ||
		 ((e10.x+1 == p1.x+1) && (e10.y   == p1.y)) ||
		 ((e10.x   == p1.x+1) && (e10.y+1 == p1.y)) ||
		 ((e10.x+1 == p1.x+1) && (e10.y+1 == p1.y)) ) {
		e10.dead = 1;
		e10.x = 40-2;
		e10.y = 30-2;
		print("e10 died\n");
		p10.x = 40-2;
		p10.y = 30-2;
	}

	if ( ((boss.x   == p1.x+1) && (boss.y   == p1.y)) ||
		 ((boss.x+1 == p1.x+1) && (boss.y   == p1.y)) ||
		 ((boss.x   == p1.x+1) && (boss.y+1 == p1.y)) ||
		 ((boss.x+1 == p1.x+1) && (boss.y+1 == p1.y)) ) {
		boss.dead = 1;
		boss.x = 40-2;
		boss.y = 30-2;
		print("boss died\n");
		p3.x = 40-2;
		p3.y = 30-2;
	}

} // void check_death_e

// ENEMY AI FUNCTIONS ---------------------------------------------------------------------------------------------------------------------------------------//

void AI_e1() { // runs AI for enemy 1 - move left and right

	if (e1.dead == 1 || screen != 1) {
		e1.x = 39;
		e1.y = 29;
	}
	else {

		if (e1.AI1 == 6) {
			e1.AI1 = 0;
			e1.AI_path = 1;
		}

		if (e1.AI2 == 6) {
			e1.AI2 = 0;
			e1.AI_path = 0;
		}

		switch (e1.AI_path) {

			case 0: // move enemy 1 left

				e1.x--;
				e1.AI1++;
	//			e1.AI1 = e1.AI1/2;

				// face enemy 1 left (update sprites)

				e1.right = 0;
				e1.left = 1;

//				e1.t1 = s10; // top left  tile/sprite of enemy t
//				e1.t2 = s7;  // top right tile/sprite of enemy t
//				e1.t3 = s7;  // bot left  tile/sprite of enemy t
//				e1.t4 = s10; // bot right tile/sprite of enemy t

				break;

			case 1: // move enemy 1 right

				e1.x++;
				e1.AI2++;
	//			e1.AI2 = e1.AI2/2;

				// face enemy 1 right (update sprites)

				e1.left = 0;
				e1.right = 1;

//				e1.t1 = s7;  // top left  tile/sprite of enemy t
//				e1.t2 = s10; // top right tile/sprite of enemy t
//				e1.t3 = s10; // bot left  tile/sprite of enemy t
//				e1.t4 = s7;  // bot right tile/sprite of enemy t

				break;

		} // switch e1.AI_path
	} // else
} // void AE_e1

void AI_e2() { // runs AI for enemy 2 - jump in place and shoot

	if (e2.dead == 1 || screen != 1) {
		e2.x = 39;
		e2.y = 29;
	}
	else {

		if (e2.AI1 == 3) {
			e2_shoot();
			e2.AI1 = 0;
			e2.AI_path = 1;
		}

		if (e2.AI2 == 6) {
			e2.AI2 = 0;
			e2.AI_path = 0;
		}

		switch (e2.AI_path) {
			case 0: // move enemy 2 up ("jump")
				e2.y = e2.y-2;
				e2.AI1++;
				break;
			case 1: // move enemy 2 down ("fall")
				if (background[(e2.x) + (e2.y+2)*40] != s5) e2.y++;
				e2.AI2++;
		} // switch e2.AI_path
	} // else
} // void AE_e2

void AI_e3() { // runs AI for enemy 3 - move left and right

	if (e3.dead == 1 || screen != 2) {
		e3.x = 39;
		e3.y = 29;
	}
	else {

		if (e3.AI1 == 6) {
			e3.AI1 = 0;
			e3.AI_path = 1;
		}

		if (e3.AI2 == 6) {
			e3.AI2 = 0;
			e3.AI_path = 0;
		}

		switch (e3.AI_path) {

			case 0: // move enemy 3 left

				e3.x--;
				e3.AI1++;
	//			e3.AI1 = e3.AI1/2;

				// face enemy 1 left (update sprites)

				e3.right = 0;
				e3.left = 1;

//				e3.t1 = s10; // top left  tile/sprite of enemy t
//				e3.t2 = s7;  // top right tile/sprite of enemy t
//				e3.t3 = s7;  // bot left  tile/sprite of enemy t
//				e3.t4 = s10; // bot right tile/sprite of enemy t

				break;

			case 1: // move enemy 3 right

				e3.x++;
				e3.AI2++;
	//			e3.AI2 = e3.AI2/2;

				// face enemy 3 right (update sprites)

				e3.left = 0;
				e3.right = 1;

//				e3.t1 = s7;  // top left  tile/sprite of enemy t
//				e3.t2 = s10; // top right tile/sprite of enemy t
//				e3.t3 = s10; // bot left  tile/sprite of enemy t
//				e3.t4 = s7;  // bot right tile/sprite of enemy t

				break;

		} // switch e3.AI_path
	} // else
} // void AE_e3

void AI_e4() { // runs AI for enemy 4 - face left and right and shoot

	if (e4.dead == 1 || screen != 2) {
		e4.x = 39;
		e4.y = 29;
	}
	else {

		if (e4.AI1 == 5) e4_shoot();

		if (e4.AI1 == 8) {
			e4.AI1 = 0;
			e4.AI_path = 1;
		}

		if (e4.AI2 == 8) {
			e4.AI2 = 0;
			e4.AI_path = 0;
		}

		switch (e4.AI_path) {
			case 0: // face e4 left (update timer and sprites)
				e4.AI1++;
//				e4.t1 = s7;  // top left  tile/sprite of e4
//				e4.t2 = s10; // top right tile/sprite of e4
//				e4.t3 = s10; // bot left  tile/sprite of e4
//				e4.t4 = s10; // bot right tile/sprite of e4
				break;
			case 1: // face e4 left (update timer and sprites)
				e4.AI2++;
//				e4.t1 = s10;  // top left  tile/sprite of e4
//				e4.t2 = s7; // top right tile/sprite of e4
//				e4.t3 = s10; // bot left  tile/sprite of e4
//				e4.t4 = s10; // bot right tile/sprite of e4
				break;
		} // switch e4.AI_path
	} // else
} // void AI_e4

void AI_e5() { // runs AI for enemy 5 - move left and right
	if (e5.dead == 1 || screen != 3) {
		e5.x = 39;
		e5.y = 29;
	}
	else {

		if (e5.AI1 == 6) {
			e5.AI1 = 0;
			e5.AI_path = 1;
		}

		if (e5.AI2 == 6) {
			e5.AI2 = 0;
			e5.AI_path = 0;
		}

		switch (e5.AI_path) {

			case 0: // move enemy 5 left

				e5.x--;
				e5.AI1++;
	//			e5.AI1 = e5.AI1/2;

				// face enemy 1 left (update sprites)

				e5.right = 0;
				e5.left = 1;

//				e5.t1 = s10; // top left  tile/sprite of enemy t
//				e5.t2 = s7;  // top right tile/sprite of enemy t
//				e5.t3 = s7;  // bot left  tile/sprite of enemy t
//				e5.t4 = s10; // bot right tile/sprite of enemy t

				break;

			case 1: // move enemy 5 right

				e5.x++;
				e5.AI2++;
	//			e5.AI2 = e5.AI2/2;

				// face enemy 5 right (update sprites)

				e5.left = 0;
				e5.right = 1;

//				e5.t1 = s7;  // top left  tile/sprite of enemy t
//				e5.t2 = s10; // top right tile/sprite of enemy t
//				e5.t3 = s10; // bot left  tile/sprite of enemy t
//				e5.t4 = s7;  // bot right tile/sprite of enemy t

				break;

		} // switch e5.AI_path
	} // else

} // void AI_e5

void AI_e6() { // runs AI for enemy 6 - move left and right
	if (e6.dead == 1 || screen != 3) {
		e6.x = 39;
		e6.y = 29;
	}
	else {

		if (e6.AI1 == 6) {
			e6.AI1 = 0;
			e6.AI_path = 1;
		}

		if (e6.AI2 == 6) {
			e6.AI2 = 0;
			e6.AI_path = 0;
		}

		switch (e6.AI_path) {

			case 0: // move enemy 5 left

				e6.x--;
				e6.AI1++;
	//			e6.AI1 = e6.AI1/2;

				// face enemy 1 left (update sprites)

				e6.right = 0;
				e6.left = 1;

//				e6.t1 = s10; // top left  tile/sprite of enemy t
//				e6.t2 = s7;  // top right tile/sprite of enemy t
//				e6.t3 = s7;  // bot left  tile/sprite of enemy t
//				e6.t4 = s10; // bot right tile/sprite of enemy t

				break;

			case 1: // move enemy 5 right

				e6.x++;
				e6.AI2++;
	//			e6.AI2 = e6.AI2/2;

				// face enemy 5 right (update sprites)

				e6.left = 0;
				e6.right = 1;

//				e6.t1 = s7;  // top left  tile/sprite of enemy t
//				e6.t2 = s10; // top right tile/sprite of enemy t
//				e6.t3 = s10; // bot left  tile/sprite of enemy t
//				e6.t4 = s7;  // bot right tile/sprite of enemy t

				break;

		} // switch e6.AI_path
	} // else
} // void AI_e6

void AI_e7() { // runs AI for enemy 7 - jump in place
	if (e7.dead == 1 || screen != 3) {
		e7.x = 39;
		e7.y = 29;
	}
	else {

		if (e7.AI1 == 5) {
//			e7_shoot();
			e7.AI1 = 0;
			e7.AI_path = 1;
		}

		if (e7.AI2 == 10) {
			e7.AI2 = 0;
			e7.AI_path = 0;
		}

		switch (e7.AI_path) {
			case 0: // move enemy 7 up ("jump")
				e7.y = e7.y-2;
				e7.AI1++;
				break;
			case 1: // move enemy 7 down ("fall")
				if (background[(e7.x) + (e7.y+2)*40] != s5) e7.y++;
				e7.AI2++;
		} // switch e7.AI_path
	} // else
} // void AI_e7

void AI_e8() { // runs AI for enemy 8 - jump in place
	if (e8.dead == 1 || screen != 4) {
		e8.x = 39;
		e8.y = 29;
	}
	else {

		if (e8.AI1 == 5) {
//			e8_shoot();
			e8.AI1 = 0;
			e8.AI_path = 1;
		}

		if (e8.AI2 == 10) {
			e8.AI2 = 0;
			e8.AI_path = 0;
		}

		switch (e8.AI_path) {
			case 0: // move enemy 8 up ("jump")
				e8.y = e8.y-2;
				e8.AI1++;
				break;
			case 1: // move enemy 8 down ("fall")
				if (background[(e8.x) + (e8.y+2)*40] != s5) e8.y++;
				e8.AI2++;
		} // switch e8.AI_path
	} // else
} // void AI_e8

void AI_e9() { // runs AI for enemy 9 - do nothing bc he stuck in wall hehe


} // void AI_e9

void AI_e10() { // runs AI for enemy 10 - stay still and shoot

	if (e10.dead == 1 || screen != 5) {
		e10.x = 39;
		e10.y = 29;
	}
	else {

		if (e10.AI1 == 5) e10_shoot();

		if (e10.AI1 == 8) {
			e10.AI1 = 0;
			e10.AI_path = 1;
		}

		if (e10.AI2 == 8) {
			e10.AI2 = 0;
			e10.AI_path = 0;
		}

		switch (e10.AI_path) {
			case 0: // face e10 left (update timer and sprites)
				e10.AI1++;
				break;
			case 1: // face e10 left (update timer and sprites)
				e10.AI2++;
				break;
		} // switch e10.AI_path
	} // else
} // void AI_e10

void AI_boss() { // runs AI for enemy 10 - go wild

	if (boss.dead == 1 || screen != 6) {
		boss.x = 39;
		boss.y = 29;
	}
	else {

		if (boss.AI1  ==  4) { boss.AI1  = 0; boss.AI_path =  1; } // left 4
		if (boss.AI2  ==  1) { boss.AI2  = 0; boss.AI_path =  2; } // up 1
		if (boss.AI3  == 12) { boss.AI3  = 0; boss.AI_path =  3; } // left 12
		if (boss.AI4  ==  6) { boss.AI4  = 0; boss.AI_path =  4; } // up 6
		if (boss.AI5  ==  2) { boss.AI5  = 0; boss.AI_path =  5; } // right 2
		if (boss.AI6  ==  2) { boss.AI6  = 0; boss.AI_path =  6; } // left 2
		if (boss.AI7  ==  2) { boss.AI7  = 0; boss.AI_path =  7; } // right 2
		if (boss.AI8  ==  4) { boss.AI8  = 0; boss.AI_path =  8; } // up 4
		if (boss.AI9  ==  4) { boss.AI9  = 0; boss.AI_path =  9; } // right 4
		if (boss.AI10 == 10) { boss.AI10 = 0; boss.AI_path = 10; } // wait 10
		if (boss.AI11 ==  3) { boss.AI11 = 0; boss.AI_path = 11; } // up 3
		if (boss.AI12 ==  4) { boss.AI12 = 0; boss.AI_path = 12; } // right 4
		if (boss.AI13 == 10) { boss.AI13 = 0; boss.AI_path = 13; } // wait 10
		if (boss.AI14 ==  6) { boss.AI14 = 0; boss.AI_path = 14; } // right 6
		if (boss.AI15 == 14) { boss.AI15 = 0; boss.AI_path = 15; } // down 14
		if (boss.AI16 == 10) { boss.AI16 = 0; boss.AI_path =  0; } // wait 10

		if (boss.AI5  == 1) { boss_shoot(); }
		if (boss.AI10 == 1) { boss_shoot(); }
		if (boss.AI13 == 1) { boss_shoot(); }
		if (boss.AI16 == 1) { boss_shoot(); }

		switch (boss.AI_path) {

			case 0: // move boss left 4
				boss.x--;
				boss.AI1++;
				boss.right = 0;
				boss.left = 1;
				break;

			case 1: // move boss up 1 (step up from ground to battlefield)
				boss.y--;
				boss.AI2++;
				break;

			case 2: // move boss left 12
				boss.x--;
				boss.AI3++;
				boss.right = 0;
				boss.left = 1;
				break;

			case 3: // move boss up 6 ("jump")
				boss.y--;
				boss.AI4++;
				break;

			case 4: // move boss right 2
				boss.x++;
				boss.AI5++;
				boss.right = 1;
				boss.left = 0;
				break;

			case 5: // move boss left 2
				boss.x--;
				boss.AI6++;
//				boss.right = 0;
//				boss.left = 1;
				break;

			case 6: // move boss right 2
				boss.x++;
				boss.AI7++;
				break;

			case 7: // move boss up 4 ("jump")
				boss.y--;
				boss.AI8++;
				break;

			case 8: // move boss right 4
				boss.x++;
				boss.AI9++;
				break;

			case 9: // stand still 10
				boss.AI10++;
				boss.right = 0;
				boss.left = 1;
				break;

			case 10: // move boss up 3 ("jump")
				boss.y--;
				boss.AI11++;
				break;

			case 11: // move boss right 4
				boss.x++;
				boss.AI12++;
				boss.right = 1;
				boss.left = 0;
				break;

			case 12: // stand still 10
				boss.AI13++;
				boss.right = 0;
				boss.left = 1;
				break;

			case 13: // move boss right 6
				boss.x++;
				boss.AI14++;
				break;

			case 14: // move boss down 14
				boss.y++;
				boss.AI15++;
				break;

			case 15: // stand still 10
				boss.AI16++;
				boss.right = 0;
				boss.left = 1;
				break;

		} // switch boss.AI_path
	} // else
} // void AI_boss

void update_e() { // update enemies and boss

	check_death_e();

	switch (screen) {

		case 0:
			e1.x = 38; e2.x = 38; e3.x = 38; e4.x = 38; e5.x = 38; e6.x = 38; e7.x = 38; e8.x = 38; e9.x = 38; e10.x = 38; boss.x = 38;
			e1.y = 28; e2.y = 28; e3.y = 28; e4.y = 28; e5.y = 28; e6.y = 28; e7.y = 28; e8.y = 28; e9.y = 28; e10.y = 28; boss.y = 28;
			break;

		case 1:
			if (e1.runOnce == 0) {
			    e1.x = 28-1; // enemy 1 x start coord
			    e1.y = 23-1; // enemy 1 y start coord
				e1.runOnce = 1;
			}
			draw_character(e1); AI_e1();
			draw_character(e2); AI_e2();
			e3.x = 38; e4.x = 38; e5.x = 38; e6.x = 38; e7.x = 38; e8.x = 38; e9.x = 38; e10.x = 38; boss.x = 38;
			e3.y = 28; e4.y = 28; e5.y = 28; e6.y = 28; e7.y = 28; e8.y = 28; e9.y = 28; e10.y = 28; boss.y = 28;
			break;

		case 2:
			if (e3.runOnce == 0) {
				e3.x = 16-1; // enemy 3 x start coord
				e3.y = 18-1; // enemy 3 y start coord
				e3.runOnce = 1;
			}
			if (e4.runOnce == 0) {
			    e4.x = 31-1; // enemy 4 x start coord
			    e4.y = 17-1; // enemy 4 y start coord
				e4.runOnce = 1;
			}
			draw_character(e3); AI_e3();
			draw_character(e4); AI_e4();
			e1.x = 38; e2.x = 38; e5.x = 38; e6.x = 38; e7.x = 38; e8.x = 38; e9.x = 38; e10.x = 38; boss.x = 38;
			e1.y = 28; e2.y = 28; e5.y = 28; e6.y = 28; e7.y = 28; e8.y = 28; e9.y = 28; e10.y = 28; boss.y = 28;
			break;

		case 3:
			if (e5.runOnce == 0) {
			    e5.x = 22-1; // enemy 5 x start coord
			    e5.y = 21-1; // enemy 5 y start coord
				e5.runOnce = 1;
			}
			if (e6.runOnce == 0) {
			    e6.x = 33-1; // enemy 4 x start coord
			    e6.y = 18-1; // enemy 4 y start coord
				e6.runOnce = 1;
			}
			if (e7.runOnce == 0) {
			    e7.x = 38-1; // enemy 7 x start coord
			    e7.y = 26-1; // enemy 7 y start coord
				e7.runOnce = 1;
			}
			draw_character(e5); AI_e5();
			draw_character(e6); AI_e6();
			draw_character(e7); AI_e7();
			e1.x = 38; e2.x = 38; e3.x = 38; e4.x = 38; e8.x = 38; e9.x = 38; e10.x = 38; boss.x = 38;
			e1.y = 28; e2.y = 28; e3.y = 28; e4.y = 28; e8.y = 28; e9.y = 28; e10.y = 28; boss.y = 28;
			break;

		case 4:
			if (e8.runOnce == 0) {
			    e8.x = 26-1; // enemy 8 x start coord
			    e8.y = 26-1; // enemy 8 y start coord
				e8.runOnce = 1;
			}
			if (e9.runOnce == 0) {
			    e9.x = 33-1; // enemy 9 x start coord
			    e9.y = 18-1; // enemy 9 y start coord
				e9.runOnce = 1;
			}
			draw_character(e8); AI_e8();
			draw_character(e9); AI_e9();
			e1.x = 38; e2.x = 38; e3.x = 38; e4.x = 38; e5.x = 38; e6.x = 38; e7.x = 38; e10.x = 38; boss.x = 38;
			e1.y = 28; e2.y = 28; e3.y = 28; e4.y = 28; e5.y = 28; e6.y = 28; e7.y = 28; e10.y = 28; boss.y = 28;
			break;

		case 5:
			if (e10.runOnce == 0) {
			    e10.x = 24-1; // enemy 10 x start coord
			    e10.y = 14-1; // enemy 10 y start coord
				e10.runOnce = 1;
			}
			draw_character(e10); AI_e10();
			e1.x = 38; e2.x = 38; e3.x = 38; e4.x = 38; e5.x = 38; e6.x = 38; e7.x = 38; e8.x = 38; e9.x = 38; boss.x = 38;
			e1.y = 28; e2.y = 28; e3.y = 28; e4.y = 28; e5.y = 28; e6.y = 28; e7.y = 28; e8.y = 28; e9.y = 28; boss.y = 28;
			break;

		case 6:
			if (boss.runOnce == 0) {
			    boss.x = 35-1; // boss x start coord
			    boss.y = 23-1; // boss y start coord
				boss.runOnce = 1;
			}
			draw_character(boss); AI_boss();
			e1.x = 38; e2.x = 38; e3.x = 38; e4.x = 38; e5.x = 38; e6.x = 38; e7.x = 38; e8.x = 38; e9.x = 38; e10.x = 38;
			e1.y = 28; e2.y = 28; e3.y = 28; e4.y = 28; e5.y = 28; e6.y = 28; e7.y = 28; e8.y = 28; e9.y = 28; e10.y = 28;
			break;

		default:
			e1.x = 38; e2.x = 38; e3.x = 38; e4.x = 38; e5.x = 38; e6.x = 38; e7.x = 38; e8.x = 38; e9.x = 38; e10.x = 38; boss.x = 38;
			e1.y = 28; e2.y = 28; e3.y = 28; e4.y = 28; e5.y = 28; e6.y = 28; e7.y = 28; e8.y = 28; e9.y = 28; e10.y = 28; boss.y = 28;
			break;
	} // switch screen

//	if ( (screen == 1) ) { draw_character(e1); AI_e1(); } else { e1.x = 39; e1.y = 29; }
//	if ( (screen == 1) ) { draw_character(e2); AI_e2(); } else { e2.x = 39; e2.y = 29; }
//	if ( (screen == 2) ) { draw_character(e3); AI_e3(); } else { e3.x = 39; e3.y = 29; }
//	if ( (screen == 2) ) { draw_character(e4); AI_e4(); } else { e4.x = 39; e4.y = 29; }
//	if ( (screen == 2) ) { draw_character(boss); AI_boss(); } else { boss.x = 39; boss.y = 29; }

	if (e1.dead == 1) { e1.x = 39; e1.y = 29; }
	if (e2.dead == 1) { e2.x = 39; e2.y = 29; p2.x = 39; p2.y = 29; }
	if (e3.dead == 1) { e3.x = 39; e3.y = 29; }
	if (e4.dead == 1) { e4.x = 39; e4.y = 29; p4.x = 39; p4.y = 29; }
	if (e5.dead == 1) { e5.x = 39; e5.y = 29; }
	if (e6.dead == 1) { e6.x = 39; e6.y = 29; }
	if (e7.dead == 1) { e7.x = 39; e7.y = 29; }
	if (e8.dead == 1) { e8.x = 39; e8.y = 29; }
	if (e9.dead == 1) { e9.x = 39; e9.y = 29; }
	if (e10.dead == 1) { e10.x = 39; e10.y = 29; p10.x = 39; p10.y = 29; }
	if (boss.dead == 1) { boss.x = 39; boss.y = 29; }

} // void update_e

// SCREEN FUNCTIONS ---------------------------------------------------------------------------------------------------------------------------------------//

void draw_sm(){ // initialize spritemap
    for (int x=0; x<2048; x++) {
    	XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 1*4 , x);             //set address
    	XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 2*4 , sprite[x]);     //set data
    	XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 0, wesprite);         //write to spritemap
    	XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 0, 0);                //turn off write
    }
} // void draw_sm

void draw_bg(){ // initialize background
	for (int x=0; x<1200; x++) {
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 3*4 , x);             //set address
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 4*4 , background[x]); //set data
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 0, webackground);     //write to backmap
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 0, 0);                //turn off write
	}
} // void draw_bg

void draw_fg(){ // initialize foreground
    for (int x=0; x<1200; x++) {
    	XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 5*4 , x);             //set address
    	XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 6*4 , foreground[x]); //set data
    	XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 0, weforeground);     //write to foremap
    	XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 0, 0);                //turn off write
    }
} // void draw_fg

void reset_bg(){ // reset background
    for (int x=0; x<1200; x++) {

    	background[x] = s1;

    	XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 3*4 , x); //set address
    	XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 4*4 , background[x]); //set data
    	XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 0, webackground); //write to foremap
    	XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 0, 0); //turn off write
    }
}

void reset_fg(){ // reset foreground
    for (int x=0; x<1200; x++) {

    	foreground[x] = s1; // s1 transparent tile

    	XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 5*4 , x); //set address
    	XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 6*4 , foreground[x]); //set data
    	XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 0, weforeground); //write to foremap
    	XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 0, 0); //turn off write
    }
}

void draw_cloud_1(int i){ // draw cloud 1

	for (int x=i+1; x<=i+2; x++) { // set these tiles to clouds (s4 - white)

		background[x] = s4;

		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 3*4 , x); //set address
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 4*4 , s4); //set data
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 0, webackground); //write to backmap
	} // for

	for (int x=i+40; x<=i+40+3; x++) { // set these tiles to clouds (s4 - white)

		background[x] = s4;

		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 3*4 , x); //set address
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 4*4 , s4); //set data
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 0, webackground); //write to backmap
	} // for

} // void draw_cloud_1

void draw_cloud_2(int i){ // draw cloud 2

	for (int x=i+1; x<=i+4; x++) { // set these tiles to clouds (s4 - white)

		background[x] = s4;

		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 3*4 , x); //set address
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 4*4 , s4); //set data
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 0, webackground); //write to backmap
	} // for

	for (int x=i+40; x<=i+40+5; x++) { // set these tiles to clouds (s4 - white)

		background[x] = s4;

		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 3*4 , x); //set address
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 4*4 , s4); //set data
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 0, webackground); //write to backmap
	} // for

} // void draw_cloud_2

void set_bg_1() { // set background to overworld

	reset_bg();

	for (int x=0; x<960; x++) { // set these tiles to sky (s0 - cyan)

		background[x] = s0;

		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 3*4 , x); //set address
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 4*4 , s0); //set data
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 0, webackground); //write to backmap
	} // for

	for (int x=960; x<1200; x++) { // set these tiles to ground (s5 - green)

		background[x] = s5;

		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 3*4 , x); //set address
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 4*4 , s5); //set data
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 0, webackground); //write to backmap
	} // for

	draw_cloud_1(282);
	draw_cloud_2(427);
	draw_cloud_2(542);

	XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 0, 0); //turn off write
} // void set_bg_1

void set_bg_2() { // set background to underworld/cave

	reset_bg();

	for (int x=0; x<1200; x++) { // set these tiles to cave (s9 - black)

		background[x] = s9;

		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 3*4 , x); //set address
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 4*4 , s9); //set data
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 0, webackground); //write to backmap
	} // for

	for (int x=0; x<4*40; x++) { // set these tiles to ground (s5 - green)

		background[x] = s5;

		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 3*4 , x); //set address
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 4*4 , s5); //set data
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 0, webackground); //write to backmap
	} // for

	for (int x=1200-3*40; x<1200; x++) { // set these tiles to ground (s5 - green)

		background[x] = s5;

		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 3*4 , x); //set address
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 4*4 , s5); //set data
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 0, webackground); //write to backmap
	} // for

	XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 0, 0); //turn off write
} // void set_bg_2

void draw_obj(int x, int y, int s, int w, int h) { // draw a custom rectangle into the foreground

	int temp = x + y*40; // convert 2d coordinates into 1d coordinates

	o1.x = x;
	o1.y = y;
	o1.s = s;
	int ww = temp + (w-1);
	int hh = temp + (w-1) + 40*(h-1);

	for(int i = temp; i <= ww; i++) {
		foreground[i] = o1.s;
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 5*4 , i); //set address
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 6*4 , o1.s); //set data
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 0, weforeground); //write to foremap

		for (int j = i; j <= hh; j += 40) {
			foreground[j] = o1.s;
			XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 5*4 , j); //set address
			XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 6*4 , o1.s); //set data
			XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 0, weforeground); //write to foremap
		} // for height
	} // for width
} // void draw_obj

void draw_o(struct object o) {

	int temp = o.x + o.y*40; // convert 2d coordinates into 1d coordinates

	int ww = temp + (o.w-1);
	int hh = temp + (o.w-1) + 40*(o.h-1);

	for(int i = temp; i <= ww; i++) {
		foreground[i] = o.s;
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 5*4 , i); //set address
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 6*4 , o.s); //set data
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 0, weforeground); //write to foremap

		for (int j = i; j <= hh; j += 40) {
			foreground[j] = o.s;
			XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 5*4 , j); //set address
			XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 6*4 , o.s); //set data
			XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 0, weforeground); //write to foremap
		} // for height
	} // for width
} // void draw_o

void draw_obj_bg(int x, int y, int s, int w, int h) { // draw a custom rectangle into the background

	int temp = x + y*40; // convert 2d coordinates into 1d coordinates

	o1.x = x;
	o1.y = y;
	o1.s = s;
	int ww = temp + (w-1);
	int hh = temp + (w-1) + 40*(h-1);

	for(int i = temp; i <= ww; i++) {
		background[i] = o1.s;
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 3*4 , i); //set address
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 4*4 , o1.s); //set data
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 0, webackground); //write to backmap

		for (int j = i; j <= hh; j += 40) {
			background[j] = o1.s;
			XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 3*4 , j); //set address
			XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 4*4 , o1.s); //set data
			XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 0, webackground); //write to backmap
		} // for height
	} // for width
} // void draw_obj_bg

void draw_scrn0() { // death screen
	for (int x=0; x<1200; x++) {

		background[x] = s0;

		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 3*4 , x); //set address
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 4*4 , s0); //set data
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 0, webackground); //write to backmap
		XGpio_WriteReg(XPAR_MYIPVGA_0_S00_AXI_BASEADDR, 0, 0); //turn off write

	} // for
} // draw_scrn0

void draw_scrn1(){ // starting screen - overworld
	draw_fg();
	draw_obj(5, 20, s3, 1, 4);  // wall
	draw_obj(8, 21, s3, 3, 1);  // platform 1
	draw_obj(13, 22, s3, 3, 1); // platform 2
} // void draw_scrn1

void draw_scrn2(){ // overworld with water and door
	draw_fg();
	draw_obj_bg(11, 24, s2, 18, 2); // water
	draw_obj(5, 21, s3, 3, 1); // platform 1
	draw_obj(8, 20, s3, 3, 1); // platform 2
	draw_obj(11, 19, s3, 10, 1); // platform 3
	draw_obj(29, 18, s3, 11, 6); // rectangle
	draw_obj(34, 16, s28, 4, 4); // door
} // void draw_scrn2

void draw_scrn3(){ // cave with water
	draw_fg();
	draw_obj_bg(0, 27, s2, 36, 2); // water
	draw_obj(4, 24, s3, 6, 5); // rectangle 1
	draw_obj(15, 22, s3, 8, 7); // rectangle 2
	draw_obj(27, 19, s3, 7, 1); // platform
	draw_obj(5, 20, s28, 4, 4); // door
} // void draw_scrn3

void draw_scrn4(){ // cave with water and door
	draw_fg();
	draw_obj_bg(2, 27, s2, 18, 2); // water
	draw_obj_bg(38, 7, s2, 2, 20); // waterfall
	draw_obj_bg(35, 27, s2, 4, 2); // water (bottom of waterfall)
	draw_obj_bg(39, 8, s5, 1, 19); // ground wall
	draw_obj(4, 24, s3, 4, 1); // platform 1
	draw_obj(12, 22, s3, 4, 0); // platform 2
	draw_obj(20, 18, s3, 4, 9); // wall platform
	draw_obj(28, 23, s3, 3, 0); // platform 3
	draw_obj(31, 4, s3, 4, 20); // wall from ceiling
	draw_obj(32, 22, s28, 2, 4); // door
} // void draw_scrn4

void draw_scrn5(){ // overworld downward steps
	draw_fg();
	draw_obj(0, 7, s3, 6, 17); // rectangle 1
	draw_obj(1, 10, s3, 15, 14); // rectangle 2
	draw_obj(16, 16, s3, 10, 6); // rectangle 3
	draw_obj(16, 22, s3, 22, 2); // rectangle 4
	draw_obj(2, 4, s28, 2, 4); // door
} // void draw_scrn5

void draw_scrn6(){ // final boss screen

	draw_fg();

//	draw_obj(20, 0, s3, 5, 1); // horizontal platform
//	draw_obj(39, 0, s3, 1, 40); // vertical wall
//	draw_obj(10, 0, s3, 5, 5); // rectangle
//	draw_obj(0, 29, s3, 40, 1); // "ground"

	draw_obj(18, 17, s3, 4, 1); // top platform
	draw_obj(12, 20, s3, 4, 1); // left platform
	draw_obj(24, 20, s3, 4, 1); // right platform

	draw_obj(10, 23, s3, 20, 1); // top layer of battlefield
	draw_obj(11, 24, s3, 18, 2); // mid layer of battlefield
	draw_obj(12, 26, s3, 16, 1); // mid layer of battlefield
	draw_obj(13, 27, s3, 14, 1); // bot layer of battlefield

} // void draw_scrn6

void update_screen(int j) {

	switch (screen) {

		case 0:
			gravity = 0; // no gravity on death screen
			e1.x = 38; e2.x = 38; e3.x = 38; e4.x = 38; e5.x = 38; e6.x = 38; e7.x = 38; e8.x = 38; e9.x = 38; e10.x = 38; boss.x = 38;
			e1.y = 28; e2.y = 28; e3.y = 28; e4.y = 28; e5.y = 28; e6.y = 28; e7.y = 28; e8.y = 28; e9.y = 28; e10.y = 28; boss.y = 28;
			break;

		case 1:
			if (p.r_bounds == 1) { // change screen 1 to screen 2
				screen = 2;
				p.r_bounds = 0;
				set_bg_1();
				reset_fg();
				draw_scrn2();
				p.x = p.x - 38;
			} // if p.r_bounds = 1
			break;

		case 2:
			if (p.l_bounds == 1) { // change screen 2 to screen 1
				screen = 1;
				p.l_bounds = 0;
				set_bg_1();
				reset_fg();
				draw_scrn1();
				p.x = p.x + 38;
//				draw_player(p.x, p.y);
			} // if p.l_bounds = 1
			if ((door == 1) && (j == up)){ // change screen 2 to screen 3
				screen = 3;
				door = 0;
				set_bg_2();
				reset_fg();
				draw_scrn3();
				p.x = 6;
				p.y = 22;
//				draw_player(p.x, p.y);
			} // if door
			break;

		case 3:
			if ((door == 1) && (j == down)) { // change screen 3 to screen 2
				door = 0;
				screen = 2;
				set_bg_1();
				reset_fg();
				draw_scrn2();
				p.x = 35;
				p.y = 18;
//				draw_player(p.x, p.y);
			} // if on door and b is pressed
			if (p.r_bounds == 1) { // change screen 3 to screen 4
				screen = 4;
				p.r_bounds = 0;
				set_bg_2();
				reset_fg();
				draw_scrn4();
				p.x = p.x - 38;
//				draw_player(p.x, p.y);
			} // if p.r_bounds = 1
			break;

		case 4:
			if (p.l_bounds == 1) { // change screen 4 to screen 3
				screen = 3;
				p.l_bounds = 0;
				set_bg_2();
				reset_fg();
				draw_scrn3();
				p.x = p.x + 38;
//				draw_player(p.x, p.y);
			} // if p.l_bounds = 1
			if ((door == 1) && (j == up)) { // change screen 4 to screen 5
				door = 0;
				screen = 5;
				set_bg_1();
				reset_fg();
				draw_scrn5();
				p.x = 2;
				p.y = 6;
//				draw_player(p.x, p.y);
			} // if p.l_bounds = 1
			break;

		case 5:
			if ((door == 1) && (j == down)) { // change screen 5 to screen 4
				door = 0;
				screen = 4;
				set_bg_2();
				reset_fg();
				draw_scrn4();
				p.x = 32;
				p.y = 22;
//				draw_player(p.x, p.y);
			} // if on door and b is pressed
			if (p.r_bounds == 1) { // change screen 5 to screen 6
				screen = 6;
				p.r_bounds = 0;
				set_bg_1();
				reset_fg();
				draw_scrn6();
				p.x = p.x - 38;
//				draw_player(p.x, p.y);
			} // if p.r_bounds = 1
			break;

		case 6:
			if (p.l_bounds == 1) { // change screen 6 to screen 5
				screen = 5;
				p.l_bounds = 0;
				set_bg_1();
				reset_fg();
				draw_scrn5();
				p.x = p.x + 38;
//				draw_player(p.x, p.y);
			} // if p.l_bounds = 1
			break;

		default:
			print("ERROR - screen");
			break;

	} // switch (screen)
} // void update_screen

// DEATH FUNCTIONS ---------------------------------------------------------------------------------------------------------------------------------------//

void check_death_p_water() { // check if player died to water

	// if any player sprite is on top of a water sprite
	if (background[ (p.x+1) + (p.y+1)* 40 ] == s2 ||
		background[ (p.x+1) +  p.y   * 40 ] == s2 ||
		background[  p.x    + (p.y+1)* 40 ] == s2 ||
		background[  p.x    +  p.y   * 40 ] == s2 ){
		p.dead = 1;
		screen = 0;
		reset_bg();
		reset_fg();
		draw_scrn0();
		print("DEATH - water");
	}

} // void check_death_p_water

void check_death_p_e(struct character enemy) { // check if player died to enemy

	// if a player sprite is on top of an enemy sprite
	if ( ( ( p.x   == enemy.x   ) && ( p.y   == enemy.y   ) ) ||
		 ( ( p.x   == enemy.x+1 ) && ( p.y   == enemy.y   ) ) ||
		 ( ( p.x   == enemy.x   ) && ( p.y   == enemy.y+1 ) ) ||
		 ( ( p.x   == enemy.x+1 ) && ( p.y   == enemy.y+1 ) ) ||
		 ( ( p.x+1 == enemy.x   ) && ( p.y   == enemy.y   ) ) ||
		 ( ( p.x+1 == enemy.x+1 ) && ( p.y   == enemy.y   ) ) ||
		 ( ( p.x+1 == enemy.x   ) && ( p.y   == enemy.y+1 ) ) ||
		 ( ( p.x+1 == enemy.x+1 ) && ( p.y   == enemy.y+1 ) ) ||
		 ( ( p.x   == enemy.x   ) && ( p.y+1 == enemy.y   ) ) ||
		 ( ( p.x   == enemy.x+1 ) && ( p.y+1 == enemy.y   ) ) ||
		 ( ( p.x   == enemy.x   ) && ( p.y+1 == enemy.y+1 ) ) ||
		 ( ( p.x   == enemy.x+1 ) && ( p.y+1 == enemy.y+1 ) ) ||
		 ( ( p.x+1 == enemy.x   ) && ( p.y+1 == enemy.y   ) ) ||
		 ( ( p.x+1 == enemy.x+1 ) && ( p.y+1 == enemy.y   ) ) ||
		 ( ( p.x+1 == enemy.x   ) && ( p.y+1 == enemy.y+1 ) ) ||
		 ( ( p.x+1 == enemy.x+1 ) && ( p.y+1 == enemy.y+1 ) ) ){
		p.dead = 1;
		screen = 0;
		reset_bg();
		reset_fg();
		draw_scrn0();
		xil_printf("DEATH - %c\n", enemy.name);
	}

} // void check_death_p_e

void check_death_p_p2() { // check if player died to p2 (p2 = enemy projectile)

	if ( ( (p.x   == p2.x) && (p.y   == p2.y) ) ||
		 ( (p.x+1 == p2.x) && (p.y   == p2.y) ) ||
		 ( (p.x   == p2.x) && (p.y+1 == p2.y) ) ||
		 ( (p.x+1 == p2.x) && (p.y+1 == p2.y) ) ){
		p.dead = 1;
		screen = 0;
		reset_bg();
		reset_fg();
		draw_scrn0();
		print("DEATH - enemy 2 projectile\n");
	}

} // void check_death_p_p2

void check_death_p_p4() { // check if player died to p4 (p4 = enemy projectile)

	if ( ( (p.x   == p4.x) && (p.y   == p4.y) ) ||
		 ( (p.x+1 == p4.x) && (p.y   == p4.y) ) ||
		 ( (p.x   == p4.x) && (p.y+1 == p4.y) ) ||
		 ( (p.x+1 == p4.x) && (p.y+1 == p4.y) ) ){
		p.dead = 1;
		screen = 0;
		reset_bg();
		reset_fg();
		draw_scrn0();
		print("DEATH - enemy 4 projectile\n");
	}

} // void check_death_p_p4

void check_death_p_p10() { // check if player died to p10 (p10 = enemy projectile)

	if ( ( (p.x   == p10.x) && (p.y   == p10.y) ) ||
		 ( (p.x+1 == p10.x) && (p.y   == p10.y) ) ||
		 ( (p.x   == p10.x) && (p.y+1 == p10.y) ) ||
		 ( (p.x+1 == p10.x) && (p.y+1 == p10.y) ) ){
		p.dead = 1;
		screen = 0;
		reset_bg();
		reset_fg();
		draw_scrn0();
		print("DEATH - enemy 4 projectile\n");
	}

} // void check_death_p_p10

void check_death_p_pboss() { // check if player died to pboss (pboss = boss projectile)

	if ( ( (p.x   == pboss.x) && (p.y   == pboss.y) ) ||
		 ( (p.x+1 == pboss.x) && (p.y   == pboss.y) ) ||
		 ( (p.x   == pboss.x) && (p.y+1 == pboss.y) ) ||
		 ( (p.x+1 == pboss.x) && (p.y+1 == pboss.y) ) ){
		p.dead = 1;
		screen = 0;
		reset_bg();
		reset_fg();
		draw_scrn0();
		print("DEATH - boss projectile\n");
	}

 } // void check_death_p_pboss

void check_death_p() { // checks for player death by water, enemies, boss, or projectiles

	check_death_p_water();

	check_death_p_e(e1);
	check_death_p_e(e2);
	check_death_p_e(e3);
	check_death_p_e(e4);
	check_death_p_e(e5);
	check_death_p_e(e6);
	check_death_p_e(e7);
	check_death_p_e(e8);
	check_death_p_e(e9);
	check_death_p_e(e10);
	check_death_p_e(boss);

	check_death_p_p2();
	check_death_p_p4();
	check_death_p_p10();
//	check_death_p_pboss(); // UNCOMMENTING THIS CAUSES LAUNCH FAIL (memory error maybe)

} // void check_death_p

// CONTROLLER FUNCTIONS ---------------------------------------------------------------------------------------------------------------------------------------//

void check_controller(int btn) {
	 switch (btn) {
		case none:
			break;

		case a:
			print("Button:  a - FIRE PROJECTILE\n");
			p_shoot();
			break;

		case ua:
			print("Button:  up + a\n");
			btn_up();
			p_shoot();
			break;

		case da:
			print("Button:  down + a\n");
			btn_down();
			p_shoot();
			break;

		case la:
			print("Button:  left + a\n");
			btn_left();
			p_shoot();
			break;

//		case ra: // right + a does not work
//			print("Button:  right + a\n");
//			btn_right();
//			p_shoot();
//			break;

		case b:
			print("Button:  b - JUMP\n");
			p.j = 1;
			break;

		case ub:
			print("Button:  up + b\n");
			btn_up();
			p.j = 1;
			break;

		case db:
			print("Button:  down + b\n");
			btn_down();
			p.j = 1;
			break;

		case lb:
			print("Button:  left + b\n");
			btn_left();
			p.j = 1;
			break;

		case rb:
			print("Button:  right + b\n");
			p.j = 1;
			btn_right();
			break;

		case ab:
			print("Button:  a + b\n");
			p_shoot();
			p.j = 1;
			break;

		case start:
			print("Button:  start\n");
			reset_all();
			break;

		//case select:
			//print("Button:  select\n");
			//btn_select();
			//break;

		case up:
			print("Button:  up - ENTER DOOR to next level\n");
			btn_up();
			break;

		case down:
			print("Button:  down - ENTER DOOR to previous level\n");
			btn_down();
			break;

		case ul:
			print("Button:  up + left\n");
			btn_up();
			btn_left();
			break;

		case dl:
			print("Button:  down + left\n");
			btn_down();
			btn_left();
			break;

		case left:
			print("Button:  left\n");
			btn_left();
			break;

		case ur:
			print("Button:  up + right\n");
			btn_up();
			btn_right();
			break;

		case dr:
			print("Button:  down + right\n");
			btn_down();
			btn_right();
			break;

		case right:
			print("Button:  right\n");
			btn_right();
			break;

		default: // print error or something
			xil_printf("ERROR CONTROLLER - %d\n\r", btn);
			break;
	 } // switch
} // controller_input

void btn_up() {

	//int t = (p.x-1) + (p.y-1)*40;

// move straight up ("no gravity"/"moonjump"/"fly")
//
//	if (p.y == 1) {
//		xil_printf("TOP BOUNDARY\n\r"); // don't move the player
//	}
//	else if ((background[t-40]) == s5 || (background[t+1-40]) == s5) {
//		xil_printf("GROUND COLLISION\n\r"); // don't move the player
//	}
//	else if ((foreground[t-40]) == s3 || (foreground[t+1-40]) == s3) {
//		xil_printf("TOP OBJECT COLLISION\n\r"); // don't move the player
//	}
//	else {
//		draw_fg();
//		p.y--;
//		draw_player(p.x, p.y);
//	} // else

} // void btn_up

void btn_down() {

//	int t = (p.x-1) + (p.y-1)*40;
//
//	if ((p.y+1) == 30) {
//		xil_printf("BOTTOM BOUNDARY\n\r"); // don't move the player
//	} // if
//	else if ((background[t+2*40]) == s5 || (background[t+1+2*40]) == s5) {
//		xil_printf("GROUND COLLISION\n\r"); // don't move the player
//	}
//	else if ((foreground[t+2*40]) == s3 || (foreground[t+1+2*40]) == s3) {
//		xil_printf("BOTTOM OBJECT COLLISION\n\r"); // don't move the player
//	}
//	else {
//		draw_fg();
//		p.y++;
//		draw_player(p.x, p.y);
//	} // else
} // void btn_down

void btn_left() {

	facing_left_player();

	int t = (p.x) + (p.y)*40;

	if (p.x == 1-1) {
		p.l_bounds = 1;
		xil_printf("LEFT BOUNDARY - player\n"); // don't move the player
	} // if
	else if ((background[t-1]) == s5 || (background[t-1+40]) == s5) {
		xil_printf("GROUND COLLISION - player\n"); // don't move the player
	}
	else if ((foreground[t-1]) == s3 || (foreground[t-1+40]) == s3) {
		xil_printf("LEFT OBJECT COLLISION - player\n"); // don't move the player
	}
	else {
//		draw_fg();
		p.x--;
//		draw_player(p.x, p.y);
	} // else

} // void btn_left

void btn_right() {

	facing_right_player();

	int t = (p.x) + (p.y)*40;

	if ((p.x+1) == 40-1) {
		p.r_bounds = 1;
		xil_printf("RIGHT BOUNDARY - player\n"); // don't move the player
	} // if
	else if ((background[t+2]) == s5 || (background[t+2+40]) == s5) {
		xil_printf("GROUND COLLISION - player\n"); // don't move the player
	}
	else if ((foreground[t+2]) == s3 || (foreground[t+2+40]) == s3) {
		xil_printf("RIGHT OBJECT COLLISION - player\n"); // don't move the player
	}
	else {
//		draw_fg();
		p.x++;
//		draw_player(p.x, p.y);
	} // else
} // void btn_right

void btn_a() {

} // void btn_a

void btn_b() {

} // void btn_b

void btn_start() {

} // void btn_start

void btn_select() {

} // void btn_select

// GENERAL FUNCTIONS ---------------------------------------------------------------------------------------------------------------------------------------//

void wait (int s) { // custom wait function for game timer purposes
	for (int i = 0; i < s; i++) {
		// do nothing for [s] amount of times
	} // for
} // void wait

void check_gravity() { // checks player gravity

	if (gravity == 0) { }
	else {
		if ((foreground[(p.x)+(p.y+2)*40] == s3) || (foreground[(p.x+1)+(p.y+2)*40] == s3) || // s3 = wall/platform sprite
			(background[(p.x)+(p.y+2)*40] == s5) || (background[(p.x+1)+(p.y+2)*40] == s5)) { // s5 = ground sprite
			p.is_j = 0;
		}
		else {
//			draw_fg();
			p.y++;
//			draw_player(p.x, p.y);
		} // else
	} // else
} // void check_gravity

void check_jump() { // checks player jump
	if (p.j == 1 && p.is_j == 0) {
		p.j = 0;
		p.is_j = 1;
		p.j_vel = 8;
	}
	if (p.is_j == 1) {
		p.j = 0;
		if (p.j_vel > 0) {
			p.j_vel--;
			//draw_fg();
			p.y = p.y-1;
			//draw_player(p.x, p.y);
		}
	}
} // void check_jump

void check_door() { // check if any of the player sprite tiles are on top of a door tile

	if (foreground[(p.x)+(p.y)*40] == s28 || foreground[(p.x+1)+p.y*40] == s28 || foreground[p.x+(p.y+1)*40] == s28 || foreground[p.x+1+(p.y+1)*40] == s28) {
		door = 1;
		//print("DOOR\n");
	} // if any of the player sprite tiles are on top of a door tile
	else {
		door = 0;
	}

} // void check_door

void reset_all() { // reset everything

	init_structs();

	screen = 1;
	door = 0;
	gravity = 1;

	reset_bg();
	reset_fg();
	set_bg_1();
	draw_scrn1();

	draw_character(p);
	draw_character(e1);
	draw_character(e2);

	print("RESTARTED\n\r");

} // void reset_all
