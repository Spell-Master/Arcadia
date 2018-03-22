/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |   [ Emulador ]    | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  Ragnarok - Npc Script                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Author: Sem informa��o precisa                                  |
| - Version: Spell Master                                           |
| - Info: Quest da habilidade Luz Divina (AL_HOLYLIGHT) para novi�o |
\*-----------------------------------------------------------------*/

prt_church,173,23,4	script	Novi�o Klift	1_F_PRIEST,{
	mes "[Novi�o Klift]";
	mes "Ahh. Irm�os!";
	mes "Ser� que a tarefa de cuidar das ovelhas perdidas � muito fardo para voc�?";
	mes "Estou aqui para ajud�-lo.";
	next;
	switch (select("^3355FF\"Sobre habilidades ocultas de Novi�o\"^000000","Treinar ^3355FF\"Luz Divina\"^000000","Terminar conversa")) {
		case 1:
		mes "[Novi�o Klift]";
		mes "Nossos membros do clero normalmente vencem com suas habilidades naturais.";
		mes "Com o tempo os novi�os desenvolvem uma habilidade especial.";
		next;
		mes "[Novi�o Klift]";
		mes "Confrontando com perigos intermin�veis contra o mal, nossos irm�os necessitam muito de ajuda.";
		mes "^3355FF\"Luz Divina\"^000000 � a habilidade.";
		mes "Para obter esta habilidade, � preciso algum trabalho.";
		next;
		mes "[Novi�o Klift]";
		mes "Para obter esta habilidade, voc� precisa encontrar estes itens:";
		mes "^FF33551 Opala^000000";
		mes "^FF33551 Cristal Azul^000000";
		mes "^FF33551 Ros�rio^000000 ";
		next;
		mes "[Novi�o Klift]";
		mes "Quando voc� obtiver a experi�ncia necess�ria, voc� poder� usar esta habilidade..";
		mes "^FF3355 N�vel 30 de classe^000000 � necess�rio para voc� aprender esta habilidade.";
		next;
		mes "[Novi�o Klift]";
		mes "Sacerdotes, por terem uma vasta experi�ncia, podem aprender esta habilidade em qualquer n�vel de classe.";
		close;
		case 2:
		if (getskilllv("AL_HOLYLIGHT") == 1) {
			mes "[Novi�o Klift]";
			mes "Irm�o, voc� j� possui a habilidade \"Luz Divina\".";
			mes "Voc� n�o pode ganhar uma habilidade que j� possui...";
			mes "Rezo para que voc� esteja usando esta habilidade para o bem...";
			close;
		}
		if ((countitem(White_Jewel) > 0) && (countitem(Crystal_Blue) > 0) && (countitem(Rosary) > 0) && (JobLevel > 29 || (BaseJob == Job_Priest || BaseJob == Job_Monk)) && (BaseClass == Job_Acolyte)) {
			mes "[Novi�o Klift]";
			mes "Sua f� provou que voc� � digno de usar a habilidade \"Luz Divina\".";
			mes "Sua experi�ncia � suficiente para usar esta habilidade.";
			mes "Use-a sabiamente...";
			next;
			delitem(White_Jewel,1);
			delitem(Crystal_Blue,1);
			delitem(Rosary,1);
			skill("AL_HOLYLIGHT",1,0);
			mes "[Novi�o Klift]";
			mes "Voc� agora possui a \"Luz Divina\".";
			mes "Use esta habilidade somente para bons prop�sitos...";
			close;
		}
		mes "[Novi�o Klift]";
		mes "Ah, � claro.";
		mes "Voc� ainda n�o est� pronto para receber a habilidade \"Luz Divina\".";
		next;
		mes "[Novi�o Klift]";
		mes "Voc� deve ouvir atentamente o que � necess�rio para obter esta habilidade.";
		mes "Se voc� escutasse, saberia o que falta para poder adquir�-la.";
		mes "Assim voc� pode aperfei�oar-se.";
		close;
		case 3:
		mes "[Novi�o Klift]";
		mes ".....";
		mes "Eu entendo o seu zelo.";
		mes "Voc� ainda tem muito tempo para praticar e adquirir experi�ncia.";
		mes "B�n��os sobre v�s!";
		close;
	}
}
