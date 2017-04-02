/*-----------------------------------------------------------------*\
|             ______ ____ _____ ___   __                            |
|            / ____ / _  / ____/  /  /  /                           |
|            \___  /  __/ __/ /  /__/  /___                         |
|           /_____/_ / /____//_____/______/                         |
|                /\  /|   __    __________ _________                |
|               /  \/ |  /  |  /  ___  __/ ___/ _  /                |
|              /      | / ' | _\  \ / / / __//  __/                 |
|             /  /\/| |/_/|_|/____//_/ /____/_/\ \                  |
|            /__/   |_|      npc Script         \/                  |
|                                                                   |
+-------------------------------------------------------------------+
|                     Projeto Ragnarok Online                       |
+-------------------------------------------------------------------+
| - Vers�o: Spell Master                                            |
| - Nota: Potais na Torre do Rel�gio                                |
\*-----------------------------------------------------------------*/

c_tower1,200,157,0	warp	ald003	1,1,aldebaran,139,131
c_tower1,235,226,0	warp	clt001	1,1,c_tower2,268,26
c_tower1,123,22,0	warp	clt002	1,1,alde_dun01,297,25

// ------------------------------------------------------------------
c_tower2,142,283,0	warp	clt003	1,1,c_tower3,65,147
c_tower2,24,24,0	warp	clt004	1,1,alde_dun03,277,178
c_tower2,273,26,0	warp	clt005	1,1,c_tower1,235,223

c_tower2,13,288,4	script	clt006r	WARPNPC,1,1,{
	switch(rand(3)) {
		case 0: warp "c_tower2",13,282; end;
		case 1: warp "alde_dun03",175,131; end;
		case 2: warp "c_tower3",235,7; end;
	}
}

c_tower2,223,267,4	script	clt007r	WARPNPC,1,1,{
	switch(rand(3)) {
		case 0: warp "c_tower2",288,267; end;
		case 1: warp "alde_dun03",130,130; end;
		case 2: warp "c_tower3",252,29; end;
	}
}

// ------------------------------------------------------------------
c_tower3,60,147,0	warp	clt009	1,1,c_tower2,148,283
c_tower3,212,159,0	warp	clt010	1,1,alde_dun03,276,53
c_tower3,7,39,0	warp	clt011	1,1,alde_dun01,171,158
c_tower3,42,41,0	warp	clt012	1,1,alde_dun02,127,169
c_tower3,146,8,0	warp	clt013	1,1,c_tower1,235,223

c_tower3,163,252,4	script	clt014r	WARPNPC,1,1,{
	if (rand(2))
		warp "c_tower3",168,252;
	else
		warp "alde_dun02",262,41;
	end;
}

c_tower3,240,7,4	script	clt015r	WARPNPC,1,1,{
	switch(rand(3)) {
		case 0: warp "c_tower2",13,282; end;
		case 1: warp "alde_dun03",175,131; end;
		case 2: warp "c_tower3",235,7; end;
	}
}

c_tower3,252,24,4	script	clt016r	WARPNPC,1,1,{
	switch(rand(3)) {
		case 0: warp "c_tower2",228,267; end;
		case 1: warp "alde_dun03",130,130; end;
		case 2: warp "c_tower3",252,29; end;
	}
}

// ------------------------------------------------------------------
c_tower4,37,70,0	warp	clt017	1,1,alde_dun03,277,54
c_tower4,51,156,0	warp	clt018	1,1,alde_dun01,171,158
c_tower4,68,46,0	warp	clt019	1,1,c_tower4,73,154
c_tower4,70,19,0	warp	clt020	2,2,c_tower3,151,8
c_tower4,79,49,0	warp	clt021	2,2,c_tower4,204,60
c_tower4,133,202,0	warp	clt022	1,1,c_tower4,140,149
c_tower4,153,107,0	warp	clt023	1,1,c_tower2,228,267
c_tower4,171,179,0	warp	clt024	1,1,alde_dun03,276,53
c_tower4,198,59,0	warp	clt025	1,1,c_tower4,152,98
c_tower4,204,57,0	warp	clt026	1,1,c_tower4,65,77

c_tower4,75,156,4	script	clt027r	WARPNPC,0,0,{
	switch(rand(4)) {
		case 0: warp "c_tower3",168,252; end;
		case 1: warp "alde_dun02",262,41; end;
		case 2: warp "c_tower4",73,154; end;
		case 3: warp "c_tower4",140,149; end;
	}
}

c_tower4,68,79,4	script	clt028r	WARPNPC,0,0,{
	switch(rand(4)) {
		case 0: warp "c_tower2",13,282; end;
		case 1: warp "alde_dun03",175,131; end;
		case 2: warp "c_tower3",235,7; end;
		case 3: warp "c_tower4",65,77; end;
	}
}

c_tower4,142,151,4	script	clt029r	WARPNPC,0,0,{
	switch(rand(4)) {
		case 0: warp "c_tower3",168,252; end;
		case 1: warp "alde_dun02",262,41; end;
		case 2: warp "c_tower4",73,154; end;
		case 3: warp "c_tower4",140,149; end;
	}
}

c_tower4,151,96,4	script	clt030r	WARPNPC,0,0,{
	switch(rand(4)) {
		case 0: warp "c_tower2",228,267; end;
		case 1: warp "alde_dun03",130,130; end;
		case 2: warp "c_tower3",252,29; end;
		case 3: warp "c_tower4",152,95; end;
	}
}

c_tower4,189,40,4	script	clt031r	WARPNPC,2,2,{
	switch(rand(4)) {
		case 0: warp "c_tower2",228,267; end;
		case 1: warp "alde_dun03",130,130; end;
		case 2: warp "c_tower3",252,29; end;
		case 3: warp "c_tower4",152,95; end;
	}
}