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
| - Copyright: Spell Master (14/03/2017)                            |
| - Info: Hoteis e estalagens                                       |
\*-----------------------------------------------------------------*/

-	script	InnHouse	FAKE_NPC,{
	.@name$ = strnpcinfo(NPC_NAME_VISIBLE);
	.@npc$ = strnpcinfo(NPC_NAME_HIDDEN);
	.@map$ = strnpcinfo(NPC_MAP);

	mes("[" + .@name$ + "]\n"
		"Bom dia, seja bem vind" + (Sex == SEX_MALE ? "o":"a") + " a nossa estalagem.\n"
		"Em que posso ajudar?");
	next;
	switch (select("Salvar Retorno", "Descançar (5000 zeny)", "Cancelar")) {
		case 1:
		mes("[" + .@name$ + "]\n"
			"Seu Ponto de Retorno foi salvo.\n"
			"Curta sua estadia na cidade.");
		// Prontera
		if (.@npc$ == "prtInn1") { savepoint("prt_in",238,130); }
		if (.@npc$ == "prtInn2") { savepoint("prt_in",64,136); }
		// Aldebaran
		if (.@map$ == "aldeba_in") { savepoint("aldeba_in",92,50); }
		// Alberta
		if (.@map$ == "alberta_in") { savepoint("alberta_in",26,142); }
		// Einbroch
		if (.@map$ == "ein_in01") { savepoint("ein_in01",200,224); }
		// Geffen
		if (.@map$ == "geffen_in") { savepoint("geffen_in",70,59); }
		// Payon
		if (.@map$ == "payon_in01") { savepoint("payon_in01",136,61); }
		// Rachel
		if (.@map$ == "ra_in01") { savepoint("ra_in01",375,58); }
		// Hugel
		if (.@map$ == "hu_in01") { savepoint("hu_in01",263,95); }
		// Lighthalzen
		if (.@map$ == "lhz_in02") { savepoint("lhz_in02",209,275); }
		// Veins
		if (.@map$ == "ve_in") { savepoint("ve_in",157,209); }
		// Eclage
		if (.@map$ == "ecl_in02") { savepoint("ecl_in02",162,50); }
		// Malangdo
		if (.@map$ == "malangdo") { savepoint("malangdo",142,118); }
		// Malaya
		if (.@map$ == "ma_in01") { savepoint("ma_in01",43,98); }
		// Mora
		if (.@map$ == "mora") { savepoint("mora",56,143); }
		close;
		case 2:
		mes("[" + .@name$ + "]");
		if (Zeny < 5000) {
			mes(" Me desculpe mas a taxa para descanso é de 5.000 zenys.");
			close;
		} else {
			mes("Curta sua estadia.\n"
				"E aproveite seu descanso.");
			close2;
			Zeny -= 5000;
			percentheal(100,100);
			// Prontera
			if (.@npc$ == "prtInn1") { warp("prt_in",247,104); }
			if (.@npc$ == "prtInn2") { warp("prt_in",60,166); }
			// Aldebaran
			if (.@map$ == "aldeba_in") { warp("aldeba_in",92,112); }
			// Alberta
			if (.@map$ == "alberta_in") { warp("alberta_in",18,188); }
			// Einbroch
			if (.@map$ == "ein_in01") { warp("ein_in01",272,167); }
			// Geffen
			if (.@map$ == "geffen_in") { warp("geffen_in",31,31); }
			// Payon
			if (.@map$ == "payon_in01") { warp("payon_in01",132,11); }
			// Rachel
			if (.@map$ == "ra_in01") { warp("ra_in01",384,128); }
			// Hugel
			if (.@map$ == "hu_in01") { warp("hu_in01",267,5); }
			// Lighthalzen
			if (.@map$ == "lhz_in02") { warp("lhz_in02",219,150); }
			// Veins
			if (.@map$ == "ve_in") { warp("ve_in",184,228); }
			// Eclage
			if (.@map$ == "ecl_in02") { warp("ecl_in02",167,49); }
			// Malangdo
			if (.@map$ == "malangdo") { warp("malangdo",140,121); }
			// Malaya
			if (.@map$ == "ma_in01") { warp("ma_in01",43,98); }
			// Mora
			if (.@map$ == "mora") { warp("mora",32,123); }
			end;
		}
		case 3:
		mes("[" + .@name$ + "]\n"
			"Volte sempre.");
		close;
	}
}

prt_in,244,135,2	duplicate(InnHouse)	Funcionária#prtInn1	1_M_INNKEEPER
prt_in,61,141,2	duplicate(InnHouse)	Funcionária#prtInn2	1_M_INNKEEPER
aldeba_in,92,58,5	duplicate(InnHouse)	Funcionária#aldeInn	1_M_INNKEEPER
alberta_in,32,142,3	duplicate(InnHouse)	Funcionária#albInn	1_M_INNKEEPER
ein_in01,206,224,3	duplicate(InnHouse)	Funcionário#einInn	4_M_EINMAN
geffen_in,70,64,5	duplicate(InnHouse)	Funcionária#gefInn	1_M_INNKEEPER
payon_in01,132,62,5	duplicate(InnHouse)	Funcionária#payInn	1_M_INNKEEPER
ra_in01,376,69,4	duplicate(InnHouse)	Funcionária#raInn	4_M_RACHMAN1
hu_in01,246,107,3	duplicate(InnHouse)	Funcionária#huInn	1_M_INNKEEPER
lhz_in02,230,284,4	duplicate(InnHouse)	Funcionário#lhzInn	4_M_04
ve_in,157,219,5	duplicate(InnHouse)	Funcionário#veInn	4_M_SEAMAN
ecl_in02,164,56,3	duplicate(InnHouse)	Funcionária#eclInn	4_F_FAIRYKID2
malangdo,147,117,3	duplicate(InnHouse)	Funcionário#eclInn	4_CAT_REST
ma_in01,30,94,4	duplicate(InnHouse)	Funcionária#malInn	4_F_MALAYA
mora,43,127,3	duplicate(InnHouse)	Funcionário#morInn	4_M_RAFLE_OR
