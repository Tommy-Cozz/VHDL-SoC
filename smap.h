#include "defines.h"

// SPRITES TILEMAP ARRAY ---------------------------------------------------------------------------------------------------------------------------------------//

int sprite[2048] = {
	cyn, cyn, cyn, cyn, cyn, cyn, cyn, cyn, // s0
	cyn, cyn, cyn, cyn, cyn, cyn, cyn, cyn, // using as sky for now
	cyn, cyn, cyn, cyn, cyn, cyn, cyn, cyn,
	cyn, cyn, cyn, cyn, cyn, cyn, cyn, cyn,
	cyn, cyn, cyn, cyn, cyn, cyn, cyn, cyn,
	cyn, cyn, cyn, cyn, cyn, cyn, cyn, cyn,
	cyn, cyn, cyn, cyn, cyn, cyn, cyn, cyn,
	cyn, cyn, cyn, cyn, cyn, cyn, cyn, cyn,

	trs, trs, trs, trs, trs, trs, trs, trs, // s1
	trs, trs, trs, trs, trs, trs, trs, trs, // clear/transparent tiles
	trs, trs, trs, trs, trs, trs, trs, trs,
	trs, trs, trs, trs, trs, trs, trs, trs,
	trs, trs, trs, trs, trs, trs, trs, trs,
	trs, trs, trs, trs, trs, trs, trs, trs,
	trs, trs, trs, trs, trs, trs, trs, trs,
	trs, trs, trs, trs, trs, trs, trs, trs,

	blu, blu, blu, blu, blu, blu, blu, blu, // s2
	blu, blu, wht, wht, blu, blu, blu, blu, // using as "water" for now
	blu, wht, blu, blu, wht, blu, blu, wht, // (death tiles)
	blu, blu, blu, blu, blu, wht, wht, blu,
	blu, blu, blu, blu, blu, blu, blu, blu,
	blu, wht, wht, blu, blu, blu, wht, blu,
	wht, blu, blu, wht, blu, blu, blu, wht,
	blu, blu, blu, blu, blu, blu, blu, blu,

	wht, wht, wht, wht, wht, wht, wht, wht, // s3
	red, red, red, red, wht, red, red, red, // using as wall/platform tiles for now
	red, red, red, red, wht, red, red, red,
	red, red, red, red, wht, red, red, red,
	wht, wht, wht, wht, wht, wht, wht, wht,
	wht, red, red, red, red, red, red, red,
	wht, red, red, red, red, red, red, red,
	wht, red, red, red, red, red, red, red,

	wht, wht, wht, wht, wht, wht, wht, wht, // s4
	wht, wht, wht, wht, wht, wht, wht, wht, // using as clouds for now
	wht, wht, wht, wht, wht, wht, wht, wht,
	wht, wht, wht, wht, wht, wht, wht, wht,
	wht, wht, wht, wht, wht, wht, wht, wht,
	wht, wht, wht, wht, wht, wht, wht, wht,
	wht, wht, wht, wht, wht, wht, wht, wht,
	wht, wht, wht, wht, wht, wht, wht, wht,

	grn, grn, grn, grn, grn, grn, grn, grn, // s5
	grn, grn, grn, grn, grn, grn, grn, grn, // using as ground for now
	grn, grn, grn, grn, grn, grn, grn, grn,
	grn, grn, grn, grn, grn, grn, grn, grn,
	grn, grn, grn, grn, grn, grn, grn, grn,
	grn, grn, grn, grn, grn, grn, grn, grn,
	grn, grn, grn, grn, grn, grn, grn, grn,
	grn, grn, grn, grn, grn, grn, grn, grn,

	pnk, pnk, pnk, pnk, pnk, pnk, pnk, pnk, // s6
	pnk, pnk, pnk, pnk, pnk, pnk, pnk, pnk, // using as character tiles for now
	pnk, pnk, pnk, pnk, pnk, pnk, pnk, pnk,
	pnk, pnk, pnk, pnk, pnk, pnk, pnk, pnk,
	pnk, pnk, pnk, pnk, pnk, pnk, pnk, pnk,
	pnk, pnk, pnk, pnk, pnk, pnk, pnk, pnk,
	pnk, pnk, pnk, pnk, pnk, pnk, pnk, pnk,
	pnk, pnk, pnk, pnk, pnk, pnk, pnk, pnk,

	ylw, ylw, ylw, ylw, ylw, ylw, ylw, ylw, // s7
	ylw, ylw, ylw, ylw, ylw, ylw, ylw, ylw, // using as character tiles for now
	ylw, ylw, ylw, ylw, ylw, ylw, ylw, ylw,
	ylw, ylw, ylw, ylw, ylw, ylw, ylw, ylw,
	ylw, ylw, ylw, ylw, ylw, ylw, ylw, ylw,
	ylw, ylw, ylw, ylw, ylw, ylw, ylw, ylw,
	ylw, ylw, ylw, ylw, ylw, ylw, ylw, ylw,
	ylw, ylw, ylw, ylw, ylw, ylw, ylw, ylw,

	wht, wht, wht, wht, wht, wht, wht, wht, // s8
	wht, trs, trs, trs, trs, trs, trs, wht, // using as door tiles for now
	wht, trs, trs, trs, trs, trs, trs, wht,
	wht, trs, trs, trs, trs, trs, trs, wht,
	wht, trs, trs, trs, trs, trs, trs, wht,
	wht, trs, trs, trs, trs, trs, trs, wht,
	wht, trs, trs, trs, trs, trs, trs, wht,
	wht, wht, wht, wht, wht, wht, wht, wht,

	blk, blk, blk, blk, blk, blk, blk, blk, // s9
	blk, blk, blk, blk, blk, blk, blk, blk, // using as cave tiles for now
	blk, blk, blk, blk, blk, blk, blk, blk,
	blk, blk, blk, blk, blk, blk, blk, blk,
	blk, blk, blk, blk, blk, blk, blk, blk,
	blk, blk, blk, blk, blk, blk, blk, blk,
	blk, blk, blk, blk, blk, blk, blk, blk,
	blk, blk, blk, blk, blk, blk, blk, blk,

	red, red, red, red, red, red, red, red, // s10
	red, red, red, red, red, red, red, red, // using as red tiles for now
	red, red, red, red, red, red, red, red, // for enemies and boss
	red, red, red, red, red, red, red, red,
	red, red, red, red, red, red, red, red,
	red, red, red, red, red, red, red, red,
	red, red, red, red, red, red, red, red,
	red, red, red, red, red, red, red, red,

	trs, trs, trs, trs, wht, wht, trs, trs, // s11
	trs, trs, trs, wht, blk, wht, trs, trs, // using as projectiles for now
	trs, trs, wht, blk, blk, wht, trs, trs,
	blk, blk, blk, blk, blk, wht, trs, trs,
	wht, blk, blk, wht, blk, blk, wht, trs,
	trs, wht, blk, blk, blk, blk, blk, wht,
	trs, wht, blk, blk, wht, wht, wht, wht,
	trs, wht, blk, wht, trs, trs, trs, trs,

	trs, trs, trs, trs, trs, trs, trs, trs, // s12
	trs, blk, blk, trs, trs, blk, blk, trs, // using as smiley for now
	trs, blk, blk, trs, trs, blk, blk, trs, // to display on the screen what the code thinks is the player's coordinates
	trs, trs, trs, trs, trs, trs, trs, trs,
	trs, trs, trs, trs, trs, trs, trs, trs,
	trs, blk, trs, trs, trs, trs, blk, trs,
	trs, trs, blk, blk, blk, blk, trs, trs,
	trs, trs, trs, trs, trs, trs, trs, trs,

	trs, trs, trs, trs, trs, trs, trs, trs, // s13
	trs, blk, trs, trs, trs, trs, blk, trs, // using as another smiley for now
	trs, trs, blk, trs, trs, blk, trs, trs, // to display on the screen what the code thinks is the enemie's coordinates
	trs, trs, trs, trs, trs, trs, trs, trs,
	trs, blk, trs, trs, trs, trs, blk, trs,
	trs, trs, trs, blk, blk, trs, trs, trs,
	trs, trs, blk, trs, trs, blk, trs, trs,
	trs, trs, trs, trs, trs, trs, trs, trs,

	trs, trs, trs, trs, trs, trs, trs, trs, // s14
	trs, trs, trs, trs, trs, trs, trs, trs,
	trs, trs, trs, trs, trs, trs, trs, trs,
	trs, trs, trs, trs, trs, trs, trs, trs,
	trs, trs, trs, trs, trs, trs, trs, trs,
	trs, trs, trs, trs, trs, trs, trs, trs,
	trs, trs, trs, trs, trs, trs, trs, trs,
	trs, trs, trs, trs, trs, trs, trs, trs,

	trs, trs, trs, trs, trs, trs, trs, trs, // s15
	trs, trs, trs, trs, trs, trs, trs, trs,
	trs, trs, trs, trs, trs, trs, trs, trs,
	trs, trs, trs, trs, trs, trs, trs, trs,
	trs, trs, trs, trs, trs, trs, trs, trs,
	trs, trs, trs, trs, trs, trs, trs, trs,
	trs, trs, trs, trs, trs, trs, trs, trs,
	trs, trs, trs, trs, trs, trs, trs, trs,

	trs, trs, trs, trs, trs, trs, trs, trs, // s16
	trs, trs, trs, trs, trs, trs, pnk, trs, // player tile top left
	trs, trs, trs, trs, trs, pnk, pnk, trs,
	trs, trs, pnk, pnk, pnk, pnk, pnk, pnk,
	trs, trs, trs, pnk, pnk, pnk, pnk, pnk,
	trs, trs, trs, pnk, blk, blk, grn, grn,
	trs, trs, trs, blk, ylw, ylw, ylw, ylw,
	trs, trs, trs, pnk, ylw, blu, ylw, ylw,

	trs, trs, trs, trs, trs, trs, trs, trs, // s17
	trs, pnk, trs, trs, trs, trs, trs, trs, // player tile top right
	pnk, pnk, trs, trs, trs, trs, trs, trs,
	pnk, pnk, pnk, pnk, pnk, trs, trs, trs,
	pnk, pnk, pnk, pnk, trs, trs, trs, trs,
	grn, blk, blk, pnk, trs, trs, trs, trs,
	ylw, ylw, ylw, blk, trs, trs, trs, trs,
	ylw, blu, ylw, pnk, trs, trs, trs, trs,

	trs, trs, trs, ylw, ylw, blu, ylw, ylw, // s18
	trs, trs, trs, pnk, ylw, ylw, ylw, ylw, // player tile bot left
	trs, trs, trs, trs, ylw, ylw, ylw, ylw,
	trs, trs, trs, trs, trs, blk, blk, blk,
	trs, trs, trs, trs, blk, red, red, blk,
	trs, trs, trs, trs, blk, blk, blk, blk,
	trs, trs, trs, trs, ylw, red, red, red,
	trs, trs, trs, trs, trs, red, trs, trs,

	ylw, blu, ylw, ylw, blk, trs, trs, trs, // s19
	ylw, ylw, ylw, pnk, grn, blk, trs, trs, // player tile bot right
	ylw, ylw, ylw, trs, blk, trs, trs, trs,
	blk, blk, trs, trs, trs, trs, trs, trs,
	red, red, blk, trs, trs, trs, trs, trs,
	blk, blk, blk, trs, trs, trs, trs, trs,
	red, red, ylw, trs, trs, trs, trs, trs,
	trs, red, trs, trs, trs, trs, trs, trs,

	trs, trs, trs, trs, trs, trs, trs, trs, // s20
	trs, trs, trs, trs, trs, trs, trs, trs, // enemy tile top left
	trs, trs, wht, wht, wht, wht, wht, wht,
	trs, trs, wht, wht, blk, blk, wht, wht,
	trs, trs, wht, wht, wht, wht, blk, wht,
	trs, trs, wht, wht, wht, wht, wht, wht,
	trs, trs, wht, wht, wht, blk, wht, wht,
	trs, trs, wht, wht, wht, blk, wht, wht,

	trs, trs, trs, trs, trs, trs, trs, trs, // s21
	trs, trs, trs, trs, trs, trs, trs, trs, // enemy tile top right
	wht, wht, wht, wht, wht, wht, trs, trs,
	wht, wht, blk, blk, wht, wht, trs, trs,
	wht, blk, wht, wht, wht, wht, trs, trs,
	wht, wht, wht, wht, wht, wht, trs, trs,
	wht, wht, blk, wht, wht, wht, trs, trs,
	wht, wht, blk, wht, wht, wht, trs, trs,

	wht, wht, wht, wht, wht, wht, wht, wht, // s22
	wht, wht, wht, wht, wht, wht, blk, blk, // enemy tile bot left
	trs, trs, wht, wht, wht, blk, wht, wht,
	trs, trs, wht, wht, wht, wht, wht, wht,
	trs, trs, wht, wht, wht, wht, wht, wht,
	trs, trs, wht, wht, wht, wht, wht, wht,
	trs, trs, wht, wht, trs, trs, trs, trs,
	trs, trs, wht, wht, trs, trs, trs, trs,

	wht, wht, wht, wht, wht, wht, wht, wht, // s23
	blk, blk, wht, wht, wht, wht, wht, wht, // enemy tile bot right
	wht, wht, blk, wht, wht, wht, trs, trs,
	wht, wht, wht, wht, wht, wht, trs, trs,
	wht, wht, wht, wht, wht, wht, trs, trs,
	wht, wht, wht, wht, wht, wht, trs, trs,
	trs, trs, trs, trs, wht, wht, trs, trs,
	trs, trs, trs, trs, wht, wht, trs, trs,

	trs, trs, trs, trs, trs, trs, trs, trs, // s24
	trs, trs, trs, trs, trs, trs, trs, trs, // boss tile top left
	trs, trs, trs, trs, trs, blk, trs, blk,
	trs, trs, trs, trs, blk, blk, blk, blk,
	trs, trs, trs, blk, blk, pnk, pnk, pnk,
	trs, trs, trs, blk, pnk, pnk, red, pnk,
	trs, trs, trs, blk, pnk, pnk, red, pnk,
	trs, trs, trs, blk, pnk, pnk, pnk, pnk,

	trs, trs, trs, trs, trs, trs, trs, trs, // s25
	trs, trs, trs, trs, trs, trs, trs, trs, // boss tile top right
	blk, trs, blk, trs, trs, trs, trs, trs,
	blk, blk, blk, blk, trs, trs, trs, trs,
	pnk, pnk, pnk, blk, blk, trs, trs, trs,
	pnk, pnk, pnk, pnk, blk, trs, trs, trs,
	pnk, wht, pnk, pnk, blk, trs, trs, trs,
	pnk, wht, pnk, pnk, blk, trs, trs, trs,

	trs, trs, trs, trs, pnk, pnk, pnk, pnk, // s26
	trs, trs, trs, trs, trs, pnk, pnk, pnk, // boss tile bot left
	trs, trs, trs, trs, trs, trs, blk, blk,
	trs, trs, trs, trs, trs, blk, blk, blu,
	trs, trs, trs, trs, trs, blk, blu, blu,
	trs, trs, trs, trs, trs, blk, blu, blu,
	trs, trs, trs, trs, trs, pnk, blk, blk,
	trs, trs, trs, trs, trs, trs, blk, trs,

	pnk, pnk, pnk, pnk, trs, trs, trs, trs, // s27
	pnk, pnk, pnk, trs, trs, trs, trs, trs, // boss tile bot right
	blk, blk, trs, trs, trs, trs, trs, trs,
	blu, blk, blk, trs, trs, trs, trs, trs,
	blu, blu, blk, trs, trs, trs, trs, trs,
	blu, blu, blk, trs, trs, trs, trs, trs,
	blk, blk, pnk, trs, trs, trs, trs, trs,
	trs, blk, trs, trs, trs, trs, trs, trs,

	trs, trs, trs, trs, trs, trs, trs, trs, // s28
	trs, trs, pnk, pnk, pnk, pnk, trs, trs, // Door
	trs, trs, trs, trs, trs, trs, trs, trs,
	trs, trs, pnk, pnk, pnk, pnk, trs, trs,
	trs, trs, pnk, trs, trs, pnk, trs, trs,
	trs, trs, pnk, pnk, pnk, pnk, trs, trs,
	trs, trs, pnk, trs, trs, trs, trs, trs,
	trs, pnk, pnk, trs, trs, trs, trs, trs,

	trs, trs, trs, trs, trs, trs, trs, trs, // s29
	trs, trs, trs, trs, trs, trs, trs, trs,
	trs, trs, trs, trs, trs, trs, trs, trs,
	trs, trs, trs, trs, trs, trs, trs, trs,
	trs, trs, trs, trs, trs, trs, trs, trs,
	trs, trs, trs, trs, trs, trs, trs, trs,
	trs, trs, trs, trs, trs, trs, trs, trs,
	trs, trs, trs, trs, trs, trs, trs, trs,

	trs, trs, trs, trs, trs, trs, trs, trs, // s30
	trs, trs, trs, trs, trs, trs, trs, trs,
	trs, trs, trs, trs, trs, trs, trs, trs,
	trs, trs, trs, trs, trs, trs, trs, trs,
	trs, trs, trs, trs, trs, trs, trs, trs,
	trs, trs, trs, trs, trs, trs, trs, trs,
	trs, trs, trs, trs, trs, trs, trs, trs,
	trs, trs, trs, trs, trs, trs, trs, trs,

	trs, trs, trs, trs, trs, trs, trs, trs, // s31
	trs, trs, trs, trs, trs, trs, trs, trs,
	trs, trs, trs, trs, trs, trs, trs, trs,
	trs, trs, trs, trs, trs, trs, trs, trs,
	trs, trs, trs, trs, trs, trs, trs, trs,
	trs, trs, trs, trs, trs, trs, trs, trs,
	trs, trs, trs, trs, trs, trs, trs, trs,
	trs, trs, trs, trs, trs, trs, trs, trs
};
