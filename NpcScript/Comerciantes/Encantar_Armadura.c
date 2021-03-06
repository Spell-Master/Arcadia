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
| - Author: Sem informa��o precisa                                  |
| - Version: Spell Master                                           |
| - Info: Adiciona +1/+2/+3 de status bonus a armaduras             |
\*-----------------------------------------------------------------*/

prontera,165,60,2	script	Aprendiz de Artes�o#prtEcht	1_F_MERCHANT_01,{
	if (Zeny >= 400000) {
		mes("[Aprendiz de Artes�o]\n"
			"Venho estudando maneiras de melhorar uma armadura para aumentar a sua real capacidade.");
		next;
		mes("[Aprendiz de Artes�o]\n"
			"Encantar � uma habilidade incr�vel que funde um poder misterioso em um espa�o escondido da armadura.");
		next;
		mes("[Aprendiz de Artes�o]\n"
			"No entanto, voc� tem que ter em mente que,\n"
			"se houver duas armaduras do mesmo tipo em seu invent�rio.\n"
			"O encantamento ser� aplicado na ordem em que est�o colocados no seu invent�rio.");
		next;
		mes("[Aprendiz de Artes�o]\n"
			"Nesse caso, o encantamento pode ser aplicado a um item que voc� n�o queira encantar.\n"
			"Ent�o basta trazer ^5555ffUMA Armadura^000000 que voc� deseja, podendo ent�o encantar com seguran�a.");
		next;
		mes("[Aprendiz de Artes�o]\n"
			"Eu n�o sou respons�vel por aquilo que pode acontecer se voc� tiver mais de um equipamento do mesmo tipo em seu invent�rio.");
		next;
		switch (select("Armadura sem Slot.", "Armadura com Slot.", "Armadura de Alto N�vel.", "Talvez na pr�xima.")) {
			case 1:
			setarray(.@items[0], 2307, 2309, 2314, 2316, 2321, 2325, 2327, 2328, 2330, 2332, 2334, 2335, 2341, 2344, 2346, 2348, 2350, 2337, 2386, 2394, 2395, 2396);
			.@j = 50;
			break;
			case 2:
			setarray(.@items[0], 2311, 2318, 2319, 2320, 2308, 2310, 2315, 2317, 2322, 2324, 2326, 2331, 2333, 2336, 2342, 2345, 2347, 2349, 2351);
			.@j = 55;
			.@k = 1;
			break;
			case 3:
			setarray(.@items[0], 2364, 2365, 2391, 2374, 2375, 2376, 2377, 2378, 2379, 2380, 2381, 2382, 2387, 2388, 2389, 2390);
			.@j = 60;
			break;
			case 4:
			mes("[Aprendiz de Artes�o]\n"
				"Por favor, volte quando voc� tiver algum interesse em encantar sua armadura.");
			close;
		}
		.@menu$ = "";
		for (.@i = 0; .@i<getarraysize(.@items); ++.@i) {
			.@menu$ += getitemname(.@items[.@i]) + ((.@k) ? " [1]" : "") + ":";
		}
		callsub(S_EnchantArmor, .@items[select(.@menu$) - 1], .@j);
		end;
	} else {
		mes("[Aprendiz de Artes�o]\n"
			"Estou encarregado de encantar armaduras.\n"
			"Basta p�r, estive estudando formas de aumentar o poder das armaduras.");
		next;
		mes("[Aprendiz de Artes�o]\n"
			"Se por acaso, voc� quiser encantar a sua armadura,\n"
			"traga-me 400,000 zeny e a armadura que pretende encantar e ent�o tudo estar� pronto.");
		close;
	}

	S_EnchantArmor:
	.@itemid = getarg(0);
	.@failrate = getarg(1);
	if (countitem(.@itemid) == 1) {
		mes("[Aprendiz de Artes�o]\n"
			"Adicionar um slot ir� lhe custar 400,000 zeny.\n"
			"E haver� uma op��o aleat�ria encantamento.\n"
			"Naturalmente, h� uma chance de quebrar sua armadura.");
		next;
		mes("[Aprendiz de Artes�o]\n"
			"Primeiro e mais importante.\n"
			"^FF5555Refinamento existente ou carta na armadura ser�o perdidos.^000000\n"
			"Voc� ainda quer tentar encantar?");
		next;
		if (select("Deixe-me pensar mais.", "V� em frente.") == 1) {
			mes("[Aprendiz de Artes�o]\n"
				"Bem, eu n�o posso culp�-lo.\n"
				"Seguran�a em primeiro lugar, certo?\n"
				"Agora tenha um bom dia.");
			close;
		}
		mes("[Aprendiz de Artes�o]\n"
			"Ent�o, um aventureiro hein?\n"
			"Bom, vamos.");
		close2;
		specialeffect(EF_MAPPILLAR, AREA, playerattached());
		if (Zeny < 400000) {
			mes("[Aprendiz de Artes�o]\n"
				"Desculpe, mas voc� n�o tem zeny suficiente.");
			close;
		}
		progressbar("ffff00", 7);
		Zeny -= 400000;
		delitem(.@itemid, 1);
		switch (rand(1, .@failrate)) {
			case 1: .@addpart = 4702;break;
			case 2: .@addpart = 4712;break;
			case 3: .@addpart = 4722;break;
			case 4: .@addpart = 4732;break;
			case 5: .@addpart = 4742;break;
			case 6: .@addpart = 4752;break;
			case 7:
			case 8: .@addpart = 4701;break;
			case 9:
			case 10: .@addpart = 4711;break;
			case 11:
			case 12: .@addpart = 4721;break;
			case 13:
			case 14: .@addpart = 4731;break;
			case 15:
			case 16: .@addpart = 4741;break;
			case 17:
			case 18: .@addpart = 4751;break;
			case 19:
			case 20:
			case 21: .@addpart = 4700;break;
			case 22:
			case 23:
			case 24: .@addpart = 4710;break;
			case 25:
			case 26:
			case 27: .@addpart = 4720;break;
			case 28:
			case 29:
			case 30: .@addpart = 4730;break;
			case 31:
			case 32:
			case 33: .@addpart = 4740;break;
			case 34:
			case 35:
			case 36: .@addpart = 4750;break;
			default:
			specialeffect(EF_PHARMACY_FAIL, AREA, playerattached());
			mes("[Aprendiz de Artes�o]\n"
				"Bem, isso � muito ruim.\n"
				"N�o consegui encantar seu equipamento.");
			close;
		}
		getitem2(.@itemid, 1, 1, 0, 0, 0, 0, 0, .@addpart);
	} else {
		mes("[Aprendiz de Artes�o]\n"
			"Hmm?\n"
			"N�o h� nada para se encantar!\n"
			"Por favor,  volte com apenas um equipamento para encantar.");
		close;
	}
}
