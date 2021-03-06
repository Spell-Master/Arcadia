/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|   Ragnarok - Npc Script                        |
|                                                                   |
+-------------------------------------------------------------------+
| - Author: Sem informação precisa                                  |
| - Version: Spell Master                                           |
| - Info: Potais nos Catelos e seus Feudos Woe 2.0                  |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Feudos ] -
// ------------------------------------------------------------------

sch_gld,354,89,0	warp	schg_yuno	1,1,yuno,16,126
sch_gld,293,90,0	warp	schg102	1,1,schg_cas01,119,8
sch_gld,288,258,0	warp	schg202	1,1,schg_cas02,339,78
sch_gld,97,183,0	warp	schg302	1,1,schg_cas03,337,330
sch_gld,137,98,0	warp	schg402	1,1,schg_cas04,119,8
sch_gld,65,315,0	warp	schg502	1,1,schg_cas05,119,8

// ------------------------------------------------------------------
aru_gld,195,363,0	warp	arug_vefild	1,1,ve_fild02,191,24
aru_gld,155,274,0	warp	arug102	1,1,arug_cas01,275,93
aru_gld,78,47,0	warp	arug202	1,1,arug_cas02,139,31
aru_gld,68,150,0	warp	arug302	1,1,arug_cas03,141,45
aru_gld,289,347,0	warp	arug402	1,1,arug_cas04,141,45
aru_gld,287,107,0	warp	arug502	1,1,arug_cas05,141,45

// ------------------------------------------------------------------
// - [ Castelos ] -
// ------------------------------------------------------------------

// Himinn (Juno) ----------------------------------------------------
schg_cas01,119,4,0	warp	schg101	1,1,sch_gld,293,100
schg_cas01,275,240,0	warp	schg103	1,1,schg_cas01,120,7

// Andlangr (Juno) --------------------------------------------------
schg_cas02,339,73,0	warp	schg201	1,1,sch_gld,288,252
schg_cas02,101,301,0	warp	schg203	1,1,schg_cas02,340,78

// Viblainn (Juno) --------------------------------------------------
schg_cas03,337,336,0	warp	schg301	1,1,sch_gld,97,196
schg_cas03,57,9,0	warp	schg303	1,1,schg_cas03,337,330

// Hljod (Juno) -----------------------------------------------------
schg_cas04,119,4,0	warp	schg401	1,1,sch_gld,137,90
schg_cas04,275,240,0	warp	schg403	1,1,schg_cas04,120,7

// Skidbladnir (Juno) -----------------------------------------------
schg_cas05,119,4,0	warp	schg501	1,1,sch_gld,71,315
schg_cas05,275,240,0	warp	schg503	1,1,schg_cas05,120,7

// Mardol (Veins) ---------------------------------------------------
arug_cas01,281,93,0	warp	arug101	1,1,aru_gld,158,272
arug_cas01,127,357,0	warp	arug103	1,1,arug_cas01,275,93

// Cyr (Veins) ------------------------------------------------------
arug_cas02,139,25,0	warp	arug201	1,1,aru_gld,83,47
arug_cas02,393,324,0	warp	arug203	1,1,arug_cas02,139,31

// Horn (Veins) -----------------------------------------------------
arug_cas03,141,40,0	warp	arug301	1,1,aru_gld,68,155
arug_cas03,321,52,0	warp	arug303	1,1,arug_cas03,141,45

// Gefn (Veins) -----------------------------------------------------
arug_cas04,141,40,0	warp	arug401	1,1,aru_gld,299,345
arug_cas04,321,52,0	warp	arug403	1,1,arug_cas04,141,45

// Bandis (Veins) ---------------------------------------------------
arug_cas05,141,40,0	warp	arug501	1,1,aru_gld,292,107
arug_cas05,321,52,0	warp	arug503	1,1,arug_cas05,141,45
