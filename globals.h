#include "defines.h"

// GLOBAL INITIALIZATIONS ---------------------------------------------------------------------------------------------------------------------------------------//

//XPAR_EXLED_0_S00_AXI_BASEADDR
//XPAR_EXLED_0_S00_AXI_BASEADDR 0x44A10000

int wesprite = 1;
int webackground = 2;
int weforeground = 4;

struct character {

	char name;

	int

	x, y,
	t1, t2, t3, t4, // t1 = tile/sprite 1, etc
	left, right, // for facing left/right

	pcd, // projectile cooldown timer
	dead,
	runOnce,

	l_bounds,
	r_bounds,
	u_bounds,
	d_bounds,

	AI_path,
	AI1, AI2, AI3, AI4, AI5, AI6, AI7, AI8, AI9, AI10, AI11, AI12, AI13, AI14, AI15, AI16, // used as counters/timers for enemy AI

	jt, // jump cooldown timer
	j, is_j, j_vel; // j = jump, is_j = is jumping, j_vel = jump velocity

}
p,
e1, e2, e3, e4, e5, e6, e7, e8, e9, e10,
boss; // p = player, e = enemy, boss = boss (variable 'b' is for button b on controller)

struct projectile { int x, y, s, left, right, pcd; }
p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, pboss;
// p1 = projectile 1, p2 = projectile 2, p3 = projectile 3 ...

struct object { int x, y, s, w, h; } obj1,
 o1,  o2,  o3,  o4,  o5,  o6,  o7,  o8,  o9, o10,
o11, o12, o13, o14, o15, o16, o17, o18, o19, o20;

struct screen_map { struct object o1, o2, o3, o4, o5, o6, o7, o8, o9, o10, o11, o12; } scrn0, scrn1, scrn2, scrn2, scrn4, scrn5, scrn6; // scrn = screen

void init_structs();
void init_o_structs();
void move_to_corner(struct character t);
void debug_p_coords();
void debug_e_coords(struct character en);
void facing_right_player();
void facing_left_player();
void check_p_p1();


void draw_sm();
void draw_bg();
void draw_fg();

void reset_bg();
void reset_fg();

void draw_cloud_1(int i);
void draw_cloud_2(int i);

void set_bg_1();
void set_bg_2();

void draw_obj(int x, int y, int s, int w, int h);
void draw_obj_bg(int x, int y, int s, int w, int h);

void draw_scrn0();
void draw_scrn1();
void draw_scrn2();
void draw_scrn3();
void draw_scrn4();
void draw_scrn5();
void draw_scrn6();

void update_screen();

void check_death_p();
void check_gravity();
void check_door();
void check_jump();

//void draw_player(int x, int y);

void check_controller(int btn);

void btn_a		();
void btn_b		();
void btn_start	();
void btn_select	();

void btn_up		();
void btn_down	();
void btn_left	();
void btn_right	();

void wait();

void reset_all();

typedef enum { // enums for controller buttons for switch statement
	none 	= 32, // these numbers are based on working controllers

	a 		= 160,	// buttons
	b 		= 96,
	start 	= 48,
	//select = ---, // none

	up 		= 40,	// directional pad / d-pad
	down 	= 36,
	left 	= 34,
	right 	= 161,

	ua		= 168,	// up    + a
	da		= 164,  // down  + a
	la		= 162,  // left  + a
	//ra	= ---,	// right + a   // none

	ub		= 104,	// d-pad + b
	db		= 100,
	lb		= 98,
	rb		= 225,

	ust		= 56,	// d-pad + start
	dst		= 52,
	lst		= 50,
	rst		= 177,

	ul		= 42,	// up left
	ur		= 169,	// up right
	dl		= 38,	// down left
	dr		= 165,	// down right

//	usel	= ---	// button combos select
//	dsel	= ---
//	lsel	= ---
//	rsel	= ---

	ab      = 224

} btn;

//button combos: (any working controller modified by lab tech Mark)
//
//	168 = up	+ a
//	164 = down 	+ a
//	162 = left	+ a
//	--- = right	+ a		// none
//
//	104 = up 	+ b
//	100 = down	+ b
//	 98 = left	+ b
//	225 = right + b
//
//	 56 = up	+ start
//	 52 = down	+ start
//	 50 = left	+ start
//	177 = right	+ start
//
//	--- = any + select	// none
//
//	169 = up + left
//	 42 = up + right
//
//	 38 = down + left
//	165 = down + right
//
//  224 = a + b

int screen = 1;
int door = 0;
int gravity = 1;

void move_left(struct character t);

void check_dip(int dip_);

void draw_character(struct character t);

void AI_e1();
void AI_e2();
void AI_e3();
void AI_e4();
void AI_e5();
void AI_e6();
void AI_e7();
void AI_e8();
void AI_e9();
void AI_e10();
void AI_boss();

void facing_right_player();
void facing_left_player();

void init_structs();
void init_o_structs();

void p_shoot();
void e2_shoot();
void update_projectiles();

void check_death_e();
void update_e();

void check_death_p_water();
void check_death_p_e(struct character enemy);
void check_death_p_p2();
void check_death_p_p4();
void check_death_p_p10();
void check_death_p_pboss();
void check_death_p();
