/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |   [ Emulador ]    | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|   Ragnarok - Npc Script                        |
|                                                                   |
+-------------------------------------------------------------------+
| - Author: Sem informa��o precisa                                  |
| - Version: Spell Master                                           |
| - Info: Quest de Mudan�a de Classe para Alquimista.               |
| - Nota:                                                           |
| * Necess�rio quest do Antigeno e Mistura.                         |
| * Necess�rio quest dos Irm�os Alquimista de Juno.                 |
\*-----------------------------------------------------------------*/

alde_alche,27,185,5	script	Alquim�sta#alchemistq	4_F_ALCHE,{
	mes "[Parmy Gianino]";
	if (BaseJob != Job_Merchant) {
		if (BaseJob == Job_Alchemist) {
			mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" � Guilda Alquim�sta.";
			mes "A Guilda Alquimista";
			mes "Estou meio ocupado, como sempre.";
			next;
			mes "[Parmy Gianino]";
			mes "Todo mundo aqui est� ocupado com o sua pr�pria pesquisa.";
			mes "Mas recentemente, alguns avan�os foram feitos no campo da biotecnologia.";
			next;
			mes "[Parmy Gianino]";
			mes "Todos esperam que os estudos biotecnol�gicos produzam resultados positivos...";
			mes "Falando nisso, eu me pergunto como os alquimistas que trabalham na vida artificial est�o fazendo...";
			close;
		}
		mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" � Guilda Alquim�sta.";
		mes "Estamos recrutando pessoas talentosas, com id�ias novas.";
		next;
		mes "[Parmy Gianino]";
		mes "Se voc� conhece alguns mercadores.";
		mes "Por favor, fale a ele sobre nossa associa��o.";
		mes "Esses tipos de pessoas tendem a ter um talento para a Alquimia e experimenta��o ";
		close;
	}
	if (!alchemistq) {
		mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" � Guilda Alquim�sta.";
		mes "Como posso ajud�-lo?";
		next;
		switch (select("Gostaria de saber sobre Alquimistas","Quero ser um Alquimista","Nada")) {
			case 1:
			mes "[Parmy Gianino]";
			mes "Os alquimistas estudam e criam novas subst�ncias e itens a partir de materiais existentes.";
			mes "Nosso conhecimento nos permite mudar as propriedades dos produtos qu�micos no n�vel at�mico.";
			next;
			mes "[Parmy Gianino]";
			mes "A maioria das pessoas pensa nosso objetivo final � criar ouro.";
			mes "Mas isso n�o � toda a verdade, queremos criar coisas como rem�dios e novos materiais.";
			next;
			mes "[Parmy Gianino]";
			mes "Alguns de n�s pesquisa a cria��o da vida.";
			mes "Embora muitos de n�s considerem que o territ�rio � trabalho de Deus.";
			mes "Isso � t�o complexo, a maioria dos alquimistas lidam com projetos, menos complicados.";
			next;
			mes "[Parmy Gianino]";
			mes "Se voc� est� interessado em se tornar um alquimista.";
			mes "Recomendo que voc� obtenha muita experi�ncia como mercador.";
			mes "Ser um mercador � uma grande oportunidade para aprender sobre materiais e como lidar com eles.";
			next;
			mes "[Parmy Gianino]";
			mes "Voc� se tornar ou n�o um Alquimista � a sua decis�o.";
			mes "O caminho para se tornar um Alquimista � muito desafiador.";
			mes "E voc� precisa se concentrar em experimenta��o e pesquisa, em vez de com�rcio.";
			close;
			case 2:
			mes "[Parmy Gianino]";
			mes "Verdade?";
			mes "Prazer em conhec�-l"+(Sex == SEX_MALE ? "o":"a")+".";
			mes "Meu nome � Parmy Gianino.";
			next;
			mes "[Parmy Gianino]";
			mes "Mas n�s n�o aceitamos todos.";
			mes "Voc� deve ter muita tenacidade e devo��o sincera na explora��o aos v�rios campos da ci�ncia.";
			next;
			mes "[Parmy Gianino]";
			mes "S�o v�rios requisitos para se juntar a Guilda dos Alquimistas.";
			mes "Mas vamos discutir isso depois de sua inscri��o.";
			next;
			mes "[Parmy Gianino]";
			mes "Bem, ent�o,";
			mes "Voc� gosta de assinar o fomul�rio de registro agora?";
			next;
			if (select("Gostaria de assinar agora","Farei isso mais tarde") == 1) {
				if (JobLevel < 40) {
					mes "[Parmy Gianino]";
					mes "Hmmm ...";
					mes "Um momento.";
					mes "Lamento dizer isso, mas voc� n�o tem muita experi�ncia como mercador para se juntar a n�s.";
					next;
					mes "[Parmy Gianino]";
					mes "Voc� deve ser pelo menos ^551A8BN�vel 40 de classe^000000 para se tornar iniciar seus testes.";
					mes "Volte mais tarde quando voc� alcan�ar esse n�vel.";
					mes "Est� bem?";
					close;
				}
				mes "[Parmy Gianino]";
				mes "Agora, voc� deve pagar a taxa de inscri��o que custa 50.000 Zeny.";
				mes "E trazer alguns itens antes que voc� possa come�ar seu treinamento formal.";
				next;
				mes "[Parmy Gianino]";
				mes "Mas se voc� trouxer um ^551A8Grim�rio Antigo^000000 e um ^551A8BMartelo de Ferreiro^000000.";
				mes "Ser� aceito como um substitutos dos itens.";
				next;
				mes "[Parmy Gianino]";
				mes "Agora...";
				mes "Por favor assine aqui.";
				next;
				select (strcharinfo(PC_NAME));
				mes "[Parmy Gianino]";
				mes "Bom, agora, se voc� tiver O Zeny para sua taxa de inscri��o.";
				mes "Vou dizer-lhe quais os itens que voc� precisar� trazer.";
				mes "Agora, preste aten��o.";
				next;
				if (Zeny < 50000) {
					mes "[Parmy Gianino]]";
					mes "Uh oh. Voc� n�o";
					mes "Parece ter Zeny suficiente.";
					mes "Volte quando voc� tem 50.000 Zeny, caso contr�rio, n�o podemos posseguir sua inscri��o.";
					close;
				}
				Zeny -= 50000;
				mes "[Parmy Gianino]";
				mes "Vamos ver... "+strcharinfo(PC_NAME);
				mes "Precisa trazer ...";
				switch (rand(1,3)) {
					case 1:
					alchemistq = 1;
					setquest(2028);
					mes "^551A8B7 Po��o da F�ria Selvagem^000000.";
					break;
					case 2:
					alchemistq = 2;
					setquest(2029);
					mes "^551A8B100 Mini-Fornalha^000000.";
					break;
					case 3:
					alchemistq = 3;
					setquest(2030);
					mes "^551A8B7,500 Flecha de Fogo^000000.";
				}
				next;
				mes "[Parmy Gianino]";
				mes "Uma vez que voc� se reuniu esses itens, volte e seu teste de Alquimista vai come�ar.";
				mes "Vejo voc� em breve.";
				close;
			}
			mes "[Parmy Gianino]";
			mes "Comerciantes talentosos s�o sempre bem-vindos aqui.";
			mes "Por favor, volte logo.";
			close;
			case 3:
			mes "[Parmy Gianino]";
			mes "Umm ...";
			mes "Se voc� n�o precisar de qualquer coisa porque veio me atrapalhar?";
			close;
		}
	} else if (alchemistq >= 1 && alchemistq <= 3) {
		if (countitem(Old_Magic_Book) > 0 && countitem(Hammer_Of_Blacksmith) > 0) {
			mes "Bem, voc� trouxe um Grim�rio Antigo e um Martelo de Ferreiro!";
			mes "Usaremos esses itens da melhor forma.";
			next;
			delitem(Old_Magic_Book,1);
			delitem(Hammer_Of_Blacksmith,1);
			mes "[Parmy Gianino]";
			mes "Certo, agora voc� precisa aprender O b�sico para ser um Alquimista.";
			mes "Aprender os procedimentos para misturar produtos qu�micos e medicamentos.";
			alchemistq = 4;
			if (questprogress(2028)) { changequest(2028,2031); }
			else if (questprogress(2029)) { changequest(2029,2031); }
			else if (questprogress(2030)) { changequest(2030,2031); }
			next;
			mes "[Parmy Gianino]";
			mes "Mas antes de tudo isso, voc� precisa falar com Raspuchin.";
			mes "Eu n�o estou realmente certo do que voc� vai falar com ele...";
			next;
			mes "[Parmy Gianino]";
			mes "Mas voc� ainda � obrigado a falar com Raspuchin.";
			mes "Uma vez que ele � respons�vel por uma parte no processo de sele��o Alquimista.";
			close;
		}
		switch (alchemistq) {
			case 1: setarray(.@items[0],657,7); break;
			case 2: setarray(.@items[0],612,100); break;
			case 3: setarray(.@items[0],1752,7500); break;
		}
		if (countitem(.@items[0]) >= .@items[1]) {
			mes "Parece que est� tudo aqui.";
			mes "A Guilda usar� esses itens para bem.";
			next;
			delitem(.@items[0],.@items[1]);
			mes "[Parmy Gianino]"; 
			mes "Certo, agora voc� precisa aprender O b�sico para ser um Alquimista.";
			mes "Aprender os procedimentos para misturar produtos qu�micos e medicamentos.";
			alchemistq = 4;
			if (questprogress(2028)) { changequest(2028,2031); }
			else if (questprogress(2029)) { changequest(2029,2031); }
			else if (questprogress(2030)) { changequest(2030,2031); }
			next;
			mes "[Parmy Gianino]";
			mes "Mas voc� ainda � obrigado a falar com Raspuchin.";
			mes "Uma vez que ele � respons�vel por uma parte no processo de sele��o Alquimista.";
			close;
		}
		mes "Voc� n�o est� pronto?";
		mes "Como eu disse antes voc� deve trazer.";
		mes "^551A8B"+.@items[1]+" "+getitemname(.@items[0])+"s^000000.";
		next;
		mes "[Parmy Gianino]";
		mes "Volte quando voc� tiver todos itens necess�rios.";
		close;
	} else if (alchemistq == 4) {
		mes "V� e fale com o Sr. Raspuchin.";
		mes "Ele est� envolvido no processo de sele��o de alquimistas.";
		next;
		mes "[Parmy Gianino]";
		mes "N�o � nada demais";
		mes "Eu acho que ele s� vai entrevist�-lo, e perguntar-lhe algumas coisas simples.";
		close;
	} else {
		mes "Ah, me desculpe, mas estou ocupado agora.";
		next;
		mes "[Parmy Gianino]";
		mes "Por que voc� n�o pergunta outras pessoas se n�o estiver tendo serteza a quem visitar.";
		mes "Boa sorte.";
		close;
	}
}

// ------------------------------------------------------------------
alde_alche,175,107,3	script	Alquimista Fastidioso#alchemistq	4_M_ALCHE_B,{
	mes "[Raspuchin Gregory]";
	if (BaseJob != Job_Merchant) {
		if (BaseJob == Job_Alchemist) {
			mes "Heeheehee";
			mes "Keheheh!";
			mes "Eh, o que voc� quer?!";
			next;
			mes "[Raspuchin Gregory]";
			mes "Voc� n�o est� aqui para roubar meus resultados experimentais ou plagiar meu trabalho, n�o �?";
			mes "Como se atreve a considerar roubo intelectual!";
			next;
			mes "[Raspuchin Gregory]";
			mes "Voc� n�o est�, est�?";
			mes "Bem, como um colega,";
			mes "Deixe-me apenas avis�-lo que tais truques n�o s�o tolerados aqui na Guilda dos Alquim�stas!";
			close;
		} else {
			mes "O que � isso?!";
			mes "Voc� est� curioso com o que estou fazendo?";
			next;
			mes "[Raspuchin Gregory]";
			mes "Heehee";
			mes "Keheheh!";
			mes "Ora, estou ocupado.";
			mes "Pesquisando � claro!";
			next;
			mes "[Raspuchin Gregory]";
			mes "Uma vez que essa po��o estiver completa...";
			mes "Voc� pode us�-lo para tomar controle sobre uma na��o inteira!";
			next;
			mes "[Raspuchin Gregory]";
			mes "Hee hee hee!";
			mes "Algo como isso � perigoso, deve ser mantido em segredo!";
			mes "Compreende?";
			close;
		}
	}
	if (!alchemistq) {
		mes "Heeheehee";
		mes "Keheheh!";
		mes "O que voc� faz quer, garot"+(Sex == SEX_MALE ? "o":"a")+"?";
		next;
		mes "[Raspuchin Gregory]";
		mes "Um mercador deve ir e vender com sua loja em outro lugar.";
		mes "Por que voc� est� vagando em um lugar como este?";
		close;
	} else if (alchemistq >= 1 && alchemistq <= 3) {
		mes "Heeheehee";
		mes "Keheheh!";
		mes "O que voc� quer, garot"+(Sex == SEX_MALE ? "o":"a")+"?";
		next;
		mes "[Raspuchin Gregory]";
		mes "O que...?";
		mes "Aprender Alquimia?!";
		mes "Nem sequer fale tais absurdos!";
		next;
		mes "[Raspuchin Gregory]";
		mes "Mesmo se voc� estudasse por mil anos ou at� mais, seria in�til para voc�!";
		mes "Esque�a isso e apenas se preocupe com sua loja!";
		close;
	} else if ((alchemistq == 4) || (alchemistq == 5)) {
		if (alchemistq == 4) {
			mes "Heeheehee";
			mes "Keheheh!";
			mes "O que voc� faz quer, garot"+(Sex == SEX_MALE ? "o":"a")+"?";
			next;
			mes "[Raspuchin Gregory]";
			mes "O que...?";
			mes "Junte-se � Guilda!?";
			mes "Eu n�o gosto disso...";
			mes "Simplesmente n�o gosto...!";
			next;
			mes "[Raspuchin Gregory]";
			mes "Hoje em dia, qualquer um pensa que pode ser alquimista apenas por saber misturar algumas ervas.";
			mes "� por isso que a entrevista comigo � necess�ria.";
			next;
			mes "[Raspuchin Gregory]";
			mes "Heeheehee";
			mes "Keheheh!";
			mes "Eu pretendo eliminar todos os mudo incompetente, e persegui-los, n�o precisamos de idiotas!";
			next;
			if (JobLevel == 50) {
				mes "[Rasputin Grigori]";
				mes "Espere...";
				mes "Talvez eu tenha Julgado mal a voc�.";
				mes "Posso dizer que voc� � inteligente, vejo isso em seus seus olhos.";
				next;
				mes "[Raspuchin Gregory]";
				mes "Voc� n�o � apenas "+(Sex == SEX_MALE ? "um garoto est�pido":"uma garota est�pida")+".";
				mes "Eu posso dizer que j� passou por alguns tempos dif�ceis como mercador.";
				mes "Keh heh heh.";
				next;
				mes "[Raspuchin Gregory]";
				mes "Tudo bem, s� para n�o insultar a intelig�ncia uns dos outros, vou deixar voc� passar na entrevista.";
				next;
				mes "[Raspuchin Gregory]";
				mes "Ent�o, apresse-se, torne-se um Alquimista, fa�a alguma boa pesquisa!";
				mes "E voc� pode vir a ser de alguma ajuda para mim.";
				next;
				mes "[Raspuchin Gregory]";
				mes "Agora v� falar com Darwin!";
				mes "Ele vai te ensinar como fazer as experi�ncias.";
				mes "Basta dizer-lhe que eu te enviei.";
				alchemistq = 6;
				changequest(2031,2032);
				close;
			} else {
				mes "[Raspuchin Gregory]";
				mes "Surpres"+(Sex == SEX_MALE ? "o":"a")+", est�?";
				mes "Keheheh.";
				mes "Se voc� pensou que se tornar Alquimista era apenas uma quest�o de trocar de roupas.";
				mes "Ent�o voc� tinha se confundifo totalmente.";
				next;
				mes "[Raspuchin Gregory]";
				mes "Agora, tente resolver todos esses problemas.";
				mes "Vamos ver o qu�o inteligente voc� realmente �.";
			}
		} else if (alchemistq == 5) {
			mes "O que...?!";
			mes "Voc� quer tentar novamente?!";
			mes "Eu pensei que disse para sair!";
			next;
			mes "[Raspuchin Gregory]";
			mes "Eu n�o gosto...";
			mes "N�o gosto disso!";
			next;
			mes "[Raspuchin Gregory]";
			mes "Bem...";
			mes "Vou tentar esquecer o seu desempenho lament�vel da �ltima vez.";
			mes "E lhe dar outra chance.";
			next;
			mes "[Raspuchin Gregory]";
			mes "Ent�o, responda tudo corretamente.";
		}
		next;
		switch (rand(1,3)) {
			case 1:
			mes "[Raspuchin Gregory]";
			mes "12 + 23 + 34 + 45 = ?";
			next;
			input .@input;
			if (.@input != 114) {
				.@w_point += 1;
			}
			mes "[Raspuchin Gregory]";
			mes "1000 - 36 - 227 - 348 = ?";
			next;
			input .@input;
			if (.@input != 389) {
				.@w_point += 1;
			}
			mes "[Raspuchin Gregory]";
			mes "14 * 17 * 3 = ?";
			next;
			input .@input;
			if (.@input != 714) {
				.@w_point += 1;
			}
			mes "[Raspuchin Gregory]";
			mes "9765 / 3 / 5 / 7 = ?";
			next;
			input .@input;
			if (.@input != 93) {
				.@w_point += 1;
			}
			mes "[Raspuchin Gregory]";
			mes "(47 * 28) - (1376 / 4) = ?";
			next;
			input .@input;
			if (.@input != 972) {
				.@w_point += 1;
			}
			mes "[Raspuchin Gregory]";
			mes "(2646 / 7) + (13 * 28) = ?";
			next;
			input .@input;
			if (.@input != 742) {
				.@w_point += 1;
			}
			mes "[Rasputin Gregory]";
			mes "Se comprando estes itens com 24% de desconto.";
			mes "Qual o pre�o total de 15 Po��es Verdes, 6 Lupas e 4 Armadilhas?";
			next;
			input .@input;
			if (.@input != 909) {
				.@w_point += 1;
			}
			mes "[Raspuchin Gregory]";
			mes "Qual o toral de peso de 3 Cimitarra, 2 Elmos e 1 Casaco de Pele?";
			next;
			input .@input;
			if (.@input != 450) {
				.@w_point += 1;
			}
			mes "[Raspuchin Gregory]";
			mes "Qual o total de defesa de Solid�u, Capote, M�scara de Opera, �culos 3D, Sobrepelis, Botas e Aquecedor de Orelha?";
			next;
			input .@input;
			if (.@input != 20) {
				.@w_point += 1;
			}
			mes "[Raspuchin Gregory]";
			mes "Se voc� comprar 5 Elmos com um desconto de 24% e vender-los com ganho de 20%.";
			mes "Quanto lucro ganharia?";
			next;
			input .@input;
			if (.@input != 8800) {
				.@w_point += 1;
			}
			break;
			case 2:
			mes "[Raspuchin Gregory]";
			mes "13 + 25 + 37 + 48 = ?";
			next;
			input .@input;
			if (.@input != 123) {
				.@w_point += 1;
			}
			mes "[Raspuchin Gregory]";
			mes "1000 - 58 - 214 - 416 = ?";
			next;
			input .@input;
			if (.@input != 312) {
				.@w_point += 1;
			}
			mes "[Raspuchin Gregory]";
			mes "12 * 24 * 3 = ?";
			next;
			input .@input;
			if (.@input != 864) {
				.@w_point += 1;
			}
			mes "[Raspuchin Gregory]";
			mes "10530 / 3 / 5 / 2 = ?";
			next;
			input .@input;
			if (.@input != 351) {
				.@w_point += 1;
			}
			mes "[Raspuchin Gregory]";
			mes "(35 * 19) - (1792 / 7) = ?";
			next;
			input .@input;
			if (.@input != 409) {
				.@w_point += 1;
			}
			mes "[Raspuchin Gregory]";
			mes "(2368 / 8) + (24 * 17) = ?";
			next;
			input .@input;
			if (.@input != 704) {
				.@w_point += 1;
			}
			mes "[Raspuchin Gregory]";
			mes "(2646 / 7) + (13 * 28) = ?";
			next;
			input .@input;
			if (.@input != 742) {
				.@w_point += 1;
			}
			mes "[Raspuchin Gregory]";
			mes "Qual o total de pre�o de 15 Po��es Verdes, 6 Lupas, e 4 Armadilhas com 24% de desconto?";
			next;
			input .@input;
			if (.@input != 934) {
				.@w_point += 1;
			}
			mes "[Raspuchin Gregory]";
			mes "Qual o peso de 3 Sabres de Impacto, 3 Capas e 2 Botas?";
			next;
			input .@input;
			if (.@input != 550) {
				.@w_point += 1;
			}
			mes "[Raspuchin Gregory]";
			mes "Qual a defesa somada de Escudo, Casaco, M�scara de G�s, La�o Grande, La�o Meigo, Chap�u Chin�s e �culos";
			next;
			input .@input;
			if (.@input != 16) {
				.@w_point += 1;
			}
			mes "[Rasputin Gregory]";
			mes "Quantos zeny voc� tem de lucro se voc� comprar uma Malha com 24% de desconto e vender a mesma com 20% do pre�o normal?";
			next;
			input .@input;
			if (.@input != 8520) {
				.@w_point += 1;
			}
			break;
			case 3:
			mes "[Raspuchin Gregory]";
			mes "12 + 23 + 34 + 45 = ?";
			next;
			input .@input;
			if (.@input != 114) {
				.@w_point += 1;
			}
			mes "[Raspuchin Gregory]";
			mes "1000 - 58 - 214 - 416 = ?";
			next;
			input .@input;
			if (.@input != 312) {
				.@w_point += 1;
			}
			mes "[Raspuchin Gregory]";
			mes "14 * 17 * 3 = ?";
			next;
			input .@input;
			if (.@input != 714) {
				.@w_point += 1;
			}
			mes "[Raspuchin Gregory]";
			mes "10530 / 3 / 5 / 2 = ?";
			next;
			input .@input;
			if (.@input != 351) {
				.@w_point += 1;
			}
			mes "[Raspuchin Gregory]";
			mes "(47 * 28) - (1376 / 4) = ?";
			next;
			input .@input;
			if (.@input != 972) {
				.@w_point += 1;
			}
			mes "[Raspuchin Gregory]";
			mes "(2646 / 7) + (13 * 28) = ?";
			next;
			input .@input;
			if (.@input != 742) {
				.@w_point += 1;
			}
			mes "[Raspuchin Gregory]";
			mes "Quanto custa";
			mes "6 Po��es Vermelhas,";
			mes "7 Po��es Verdes";
			mes "e 8 Asas de Mosca";
			mes "com 24% de desconto?";
			next;
			input .@input;
			if (.@input != 798) {
				.@w_point += 1;
			}
			mes "[Raspuchin Gregory]";
			mes "Qual o total de peso de 3 Sabres, 3 Cap�s e 3 Botas?";
			next;
			input .@input;
			if (.@input != 480) {
				.@w_point += 1;
			}
			mes "[Raspuchin Gregory]";
			mes "Qual o total de defesa de";
			mes "Escudo Espelhado,";
			mes "M�scara Feliz,";
			mes "Gib�o,";
			mes "Manto de Seda,";
			mes "Vestido de Noiva,";
			mes "Sobrepelis";
			mes "e Tapa Olho?";
			next;
			input .@input;
			if (.@input != 12) {
				.@w_point += 1;
			}
			mes "[Raspuchin Gregory]";
			mes "Se voc� comprar 4 Armaduras Acolchoada com 24% de desconto.";
			mes "E e vender cada uma com 20% a mais do pre�o que pagou.";
			mes "Quanto lucraria com a venda?";
			next;
			input .@input;
			if (.@input != 7680) .@w_point += 1;
		}
		if (.@w_point == 0) {
			mes "[Raspucin Gregory]";
			mes "Ooh... Excelente!";
			mes "Voc� respondeu tudo correto!";
			mes "Hehehe, eu n�o tenho escolha sen�o reconhec�-lo...";
			next;
		} else if (.@w_point == 1) {
			mes "[Rasputin Grigori]";
			mes "Voc� respondeu uma errada!";
			mes "Mas cou deixar voc� passar na entrevista!";
			next;
		} else if (.@w_point == 2 && alchemistq == 5) {
			mes "[Rasputin Grigori]";
			mes "Voc� tem um s�rio problema em matem�tica";
			mes "Mas eu vou deixar voc� passar na entrevista...";
			next;
		} else {
			alchemistq = 5;
			mes "[Raspuchin Gregory]";
			mes "Keheheh! Idiota!";
			mes "Apenas escutando suas respostas me sinto enjoado!";
			next;
			mes "[Raspuchin Gregory]";
			mes "Como pode uma pessoa que nem sequer pode responder estas perguntas simples.";
			mes "Pode pretender se tornar um Almim�sta?!";
			next;
			mes "[Raspuchin Gregory]";
			mes "Mesmo se voc� cometer um pequeno erro, tudo dar� errado na alquimia!";
			mes "Agora saia daqui!";
			mes "Voc� me deixa doente!";
			close;
		}
		mes "[Raspuchin Gregory]";
		mes "Ent�o, apresse-se, torne-se um Alquimista.";
		mes "Fa�a alguma boa pesquisa, e voc� pode vir a ser de alguma ajuda para mim.";
		next;
		mes "[Raspuchin Gregory]";
		mes "Agora v� falar Darwin!";
		mes "Ele vai te ensinar como fazer as experi�ncias.";
		mes "Basta dizer-lhe que eu te enviei.";
		alchemistq = 6;
		changequest(2031,2032);
		close;
	} else if (alchemistq == 6) {
		mes "O que voc� est� fazendo?";
		mes "V� e encontrar Darwin agora.";
		next;
		mes "[Raspucin Gregory]";
		mes "Hehe, n�o...";
		mes "N�o pense que este � o fim!";
		close;
	}
	mes "Heheheheheheheheh";
	mes "N�o pense que este � o fim dele!";
	close;
}

// ------------------------------------------------------------------
alde_alche,13,15,7	script	Homem Estudioso#alchemistq	4_M_ALCHE_C,{
	if (checkweight(Knife,1) == 0) {
		mes "Espere um momento!";
		mes "Atualmente, voc� est� carregando muitos itens com voc�.";
		mes "Por favor, volte novamente depois de guardar alguns itens no armaz�m da kafra.";
		close;
	}
	mes "[Darwin]";
	if (BaseJob != Job_Merchant) {
		if (BaseJob == Job_Alchemist) {
			mes "Lembre-se...";
			mes "Em sua busca, fazer o seu sonhos se tornam realidade e n�o perder o que voc� mais aprecia.";
			next;
			mes "[Darwin]";
			mes "Ah...";
			mes "Harmona...";
			mes "Meu amor...";
			close;
		} else {
			mes "Quando voc� tem seus sonhos, voc� tem tudo.";
			mes "Sem eles, voc� tem nada mais a perder.";
			next;
			mes "[Darwin]";
			mes "Estes olhos amaldi�oados...";
			mes "Eles perderam de vista.";
			mes "Meus sonhos h� muito tempo.";
			next;
			mes "[Darwin]";
			mes "Para�so realmente existe...?";
			mes "N�o sem meu amor...";
			mes "N�o sem Harmona...";
			close;
		}
	}
	if (alchemistq == 6) {
		mes "...";
		next;
		mes "[Darwin]";
		mes "...";
		mes "......";
		next;
		mes "[Darwin]";
		mes "...";
		mes "......";
		mes "Quem � esse...?";
		next;
		monster("alde_alche",13,15,"Lobo",WOLF,1);
		killmonsterall("alde_alche");
		mes "[Darwin]";
		mes "Um lobo?";
		mes "Ou um ser humano?";
		mes "Voc� deve estar procurando alguma coisa, n�o �?";
		next;
		mes "[Darwin]";
		mes "Depois de tudo...";
		mes "Todo mundo tem desejos, tenha cuidado.";
		mes "N�o seja como o selvagem lobo atra�do pelas flores.";
		next;
		mes "[Darwin]";
		mes "Em seus esfor�os para ganhar algo mais, voc� pode acabar sacrificando algo precioso para voc�.";
		next;
		mes "[Darwin]";
		mes "Cultivando alegria e felicidade � como cultivar flores.";
		mes "Se algo est� faltando, � a flor desvanecer...";
		next;
		mes "[Darwin]";
		mes "O que te traz";
		mes "Para este tipo de lugar?";
		next;
		switch (select("Quero aprender experimentos","Diga-me mais sobre flores","Nada")) {
			case 1:
			mes "[Darwin]";
			mes "Voc� deseja aprender Alquimia?";
			mes "Tudo o que eu sei, para fazer o meu sonho ser realizado...";
			next;
			mes "[Darwin]";
			mes "Eu vou ensinar voc� o b�sico...";
			mes "Mas tudo o que voc� aprende depois deve ser dirigido atrav�s de suas pr�prias motiva��es.";
			next;
			mes "[Darwin]";
			mes "Vou te ensinar como fazer simples alquim�a, por favor trazer o seguinte materiais:";
			next;
			mes "[Darwin]";
			mes "^551A8B3 Vas�lha de Mistura^000000,";
			mes "^551A8B3 Garrafa Vazia^000000,";
			mes "^551A8B1 Erva Vermelha^000000,";
			mes "^551A8B1 Erva Amarela^000000 e";
			mes "^551A8B1 Erva Branca^000000.";
			alchemistq = 7;
			changequest(2032,2033);
			next;
			mes "[Darwin]";
			mes "Uma vez que voc� tenha tudo preparado, volte.";
			close;
			case 2:
			mes "[Darwin]";
			mes "Flores...?";
			mes "No mais escuro recessos da minha mente h� uma flor, que eu me lembro vagamente...";
			next;
			mes "[Darwin]";
			mes "Para aquela que eu amo, eu coloco tudos meus esfor�os em pesquisando uma coisa.";
			next;
			mes "[Darwin]";
			mes "Eu n�o vou te dizer os detalhes.";
			mes "Mas eu estava basicamente pesquisando o relacionamento entre lobos e flores.";
			next;
			mes "[Darwin]";
			mes "Mas sim...";
			mes "Era uma flor.";
			mes "Com seu brilho, foi dito para deixar voc� ver o para�so.";
			mes "A ^551A8BIFlor das Ilus�es^000000...";
			next;
			mes "[Darwin]";
			mes "Eu fiz mesmo um Hom�nculo.";
			mes "Mas ningu�m acreditou que eu poderia criar uma vida nova de uma flor...";
			next;
			mes "[Darwin]";
			mes "Ent�o...";
			mes "Bem, algumas outras coisas aconteceram, e agora n�o tenho mais nada.";
			mes "O tempo n�o tem mais nenhum significado para mim.";
			next;
			mes "[Darwin]";
			mes "Ahh...";
			mes "Harmona...";
			mes "Onde voc� foi?";
			mes "Eu espero que voc� esteja em um campo entre belas flores...";
			close;
			case 3:
			mes "[Darwin]";
			mes "Considere o que � mais precioso para voc�.";
			mes "N�o pode ser protegido se voc� n�o o reconhece.";
			close;
		}
	} else if (alchemistq == 7) {
		mes "...";
		mes "......";
		next;
		mes "[Darwin]";
		mes "...";
		mes "......";
		mes "O que � isso...?";
		next;
		mes "[Darwin]";
		mes "Ah...";
		mes "Voc� � quem deseja aprender Alquimia.";
		mes "Trouxe tudo que pedi?";
		next;
		if (countitem(Illusion_Flower)) {
			mes "[Darwin]";
			mes "Espere.";
			mes "Esta � a Flor das Ilus�es.";
			mes "Como voc� conseguiu isso?";
			next;
			mes "[Darwin]";
			mes "Onde voc� achou isso?!";
			mes "A flor que lentamente floresce sob o luar.";
			mes "N�o � lindo...!";
			next;
			mes"[Darwin]";
			mes "E..Essa flor...";
			mes "Por favor, deixe-me v�-la.";
			mes "A Flor das Ilus�es!";
			mes "Uwaaaaaaah!!";
			next;
			mes "[Darwin]";
			mes "Voc� seria gentil o suficiente para me deixar ficar com essa flor?";
			mes "Tenho certeza que esta � a Flor do Luar que eu tenho procurado!";
			next;
			if (select("Desculpe, eu n�o posso dar","Eu trouxe para dar a voc�.") == 1) {
				mes "[Darwin]";
				mes "Eu entendo.";
				mes "Voc� n�o pode dar algo t�o precioso para qualquer um.";
				mes "Bem... Tudo bem.";
				next;
				mes "[Darwin]";
				mes "Isso s� trouxe de volta velhas lembran�as.";
				mes "Em qualquer caso, por favor traga o que � necess�rio para fazer a experi�ncia.";
				next;
				mes "[Darwin]";
				mes "Por favor, leve essa flor de volta, ela me traz de volta muitas lembran�as...";
				close;
			}
			mes "[Darwin]";
			mes "Voc� est� falando s�rio?!";
			mes "Obrigado!";
			mes "Uma flor t�o preciosa.";
			mes "Ah, Harmona, meu amor ...";
			next;
			mes "[Darwin]";
			mes "Sim...";
			mes "Eu vou te retribuir por isso.";
			mes "Eu plantarei todo o meu conhecimento da Alquimia diretamente em sua mente...";
			next;
			mes "[Darwin]";
			mes "Mantenha seus olhos bem abertos e olhe diretamente nos meus!!";
			mes "N�o devie o olhar at� o fim!!";
			next;
			mes "Lorem ipsum dolor sit amet.";
			next;
			mes "Lorem ipsum dolor sit amet, consectetuer adipiscing elit.";
			next;
			mes "Lorem ipsum dolor sit amet, consectetuer adipiscing elit.";
			mes "Aenean fermentum ullamcorper.";
			next;
			mes "Lorem ipsum dolor sit amet, consectetuer adipiscing elit.";
			mes "Aenean fermentum ullamcorper.";
			mes "Vestibulum ante ipsum primis in.";
			next;
			mes "Lorem ipsum dolor sit amet, consectetuer adipiscing elit.";
			mes "Aenean fermentum ullamcorper.";
			mes "Vestibulum ante ipsum primis in faucibus orci luctus et ultrices";
			next;
			mes "Lorem ipsum dolor sit amet, consectetuer adipiscing elit.";
			mes "Aenean fermentum ullamcorper.";
			mes "Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae, Morbi";
			next;
			mes "Lorem ipsum dolor sit amet, consectetuer adipiscing elit.";
			mes "Aenean fermentum ullamcorper.";
			mes "Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae.";
			mes "Morbi massa, fermentum vitae...";
			next;
			delitem(Illusion_Flower,1);
			mes "[Darwin]";
			mes "^666666*Suspiro...*^000000";
			mes "Voc� � agora um Alquimista!!";
			mes "Jogue fora agora essas vestes de mercador e essa vida mercantil!!";
			alchemistq = 40;
			changequest(2033,2034);
			close;
		} else if (countitem(Medicine_Bowl) > 2 && countitem(Empty_Bottle) > 2 && countitem(Red_Herb) > 0 && countitem(Yellow_Herb) > 0 && countitem(White_Herb) > 0) {
			mes "[Darwin]";
			mes "Parece que voc� tem tudo pronto, como prometido.";
			mes "Vou ensinar-lhe como fazer uma alquimia simples.";
			next;
			mes "[Darwin]";
			mes "Primeiro, prepare a tigela de rem�dios.";
			mes "Ent�o, coloque as ervas dentro, assim, e esmague-as lentamente.";
			next;
			mes "[Darwin]";
			mes "Despeje pequenas quantidades de �gua limpa e mexa a mistura at� engrossar.";
			mes "Depois, adicione mais ervas.";
			next;
			mes "[Darwin]";
			mes "Se voc� acha que tem o suficiente, derrame a mistura em uma garrafa vazia.";
			delitem(Medicine_Bowl,3);
			delitem(Empty_Bottle,3);
			delitem(Red_Herb,1);
			delitem(Yellow_Herb,1);
			delitem(White_Herb,1);
			next;
			mes "[Darwin]";
			mes "Ai est�,";
			mes "Est� completo.";
			mes "Agora, fa�a algum rem�dio usando o procedimento simples eu expliquei para voc�.";
			.@w_point = 0;
			next;
			switch (select("Preparar a Vas�lisa","Colocar a Vas�lisa na cabe�a","Chutar a Vas�lisa")) {
				case 1:
				break;
				case 2:
				++.@w_point;
				mes "[Darwin]";
				mes "O que...?";
				next;
				break;
				case 3:
				++.@w_point;
				mes "[Darwin]";
				mes "N�o!";
				next;
				break;
			}
			switch (select("P�r areia na Vas�lia","P�r ervas na Vas�lha","P�r uma harpa Vas�lisa")) {
				case 1:
				++.@w_point;
				mes "[Darwin]";
				mes "...Eh!?";
				mes "Isso n�o � alquimia!";
				next;
				break;
				case 2:
				break;
				case 3:
				++.@w_point;
				mes "[Darwin]";
				mes "Uma harpa?";
				mes "E como voc� faria isso?";
				next;
				break;
			}
			switch (select("Esmagar as ervas","Esmagar a Vas�lha","Esmagar o p� de Darwin.")) {
				case 1:
				break;
				case 2:
				++.@w_point;
				mes "[Darwin]";
				mes "O que voc� est� fazendo!?";
				next;
				break;
				case 3:
				++.@w_point;
				mes "[Darwin]";
				mes "Agh...!";
				mes "O que voc� pensa que est� fazendo?!";
				next;
				break;
			}
			switch (select("Pulverizar a �gua","Beber a �gua","Despejar a �gua")) {
				case 1:
				++.@w_point;
				mes "[Darwin]";
				mes "O que voc� est� fazendo!?";
				next;
				break;
				case 2:
				++.@w_point;
				mes "[Darwin]";
				mes "Espere...";
				mes "Voc� est� fazendo uma pausa?";
				next;
				break;
				case 3:
				break;
			}
			switch (select("Continuar esmagando as ervas","Comer as ervas","Dan�ar e cantar")) {
				case 1:
				break;
				case 2:
				++.@w_point;
				mes "[Darwin]";
				mes "Comer as ervas?";
				mes "Eu acho que voc� precisa prestar mais aten��o no que faz...";
				next;
				break;
				case 3:
				++.@w_point;
				mes "[Darwin]";
				mes "Cantando e dan�ando?";
				mes "Alquimistas n�o fazem isso, voc� ficou louco?";
				next;
				break;
			}
			switch (select("Fritar tudo com macarr�o","Despejar em uma Garrafa Vazia","Segurar a Vas�lha e beber")) {
				case 1:
				++.@w_point;
				mes "[Darwin]";
				mes "Somos Alquimistas, n�o chefs de restaurantes.";
				next;
				break;
				case 2:
				break;
				case 3:
				++.@w_point;
				mes "[Darwin]";
				mes "Huh...";
				mes "Muito desleixado...";
				next;
				break;
			}
			if (.@w_point) {
				mes "[Darwin]";
				mes "...";
				mes "......";
				next;
				mes "[Darwin]";
				mes "Voc� estragou a mistura desde que voc� n�o seguiu o procedimento!";
				mes "Ter� que obter mais ingredientes para tentar novamente at� que voc� acertar.";
				close;
			}
			getitem(Red_Potion,1);
			getitem(Yellow_Potion,1);
			getitem(White_Potion,1);
			mes "[Darwin]";
			mes "Bom trabalho.";
			mes "Ele saiu muito bem considerando que � a sua primeira vez.";
			mes "V� em frente e guarde o conhecimento que voc� acabou de adquirir.";
			alchemistq = 8;
			changequest(2033,2035);
			next;
			mes "[Darwin]";
			mes "Agora, v� para a pr�xima sala e fale com Van Helmont para continuar sua forma��o.";
			next;
			mes "[Darwin]";
			mes "Nunca esque�a...";
			mes "Voc� deve sempre proteger o que � mais precioso para voc�.";
			close;
		} else {
			mes "[Darwin]";
			mes "Voc� esqueceu o que voc� precisa trazer?";
			mes "Deixe-me lembr�-lo mais uma vez.";
			mes "Voc� deve voltar com...";
			next;
			mes "[Darwin]";
			mes "^551A8B3 Vas�lha de Mistura^000000,";
			mes "^551A8B3 Garrafa Vazia^000000,";
			mes "^551A8B1 Erva Vermelha^000000,";
			mes "^551A8B1 Erva Amarela^000000 e";
			mes "^551A8B1 Erva Branca^000000.";
			next;
			mes "[Darwin]";
			mes "Volte quando tudi estiver pronto...";
			close;
		}
	} else if (alchemistq == 8) {
		mes "Eu disse para ir falar com Van Helmont.";
		mes "Gostaria de te ensinar mais, mas n�o posso.";
		next;
		mes "[Darwin]";
		mes "Aah...";
		mes "Harmona, meu amor.";
		mes "Eu n�o consigo nem ver a flor mais.";
		mes "Minha alma se seca tamb�m...";
		close;
	} else if (alchemistq == 40) {
		mes "J� te dei todo o meu conhecimento e n�o tenho mais nada para te ensinar.";
		next;
		mes "[Darwin]";
		mes "V� para o segundo andar e converse com o nosso l�der da guilda.";
		mes "Depois de fazer isso, sua vida como Alquimista come�ar�.";
		close;
	} else {
		mes "Quando voce tem seus sonhos, voc� tem tudo.";
		mes "Sem eles, voc� n�o tem mais nada a perder.";
		next;
		mes "[Darwin]";
		mes "Estes olhos amaldi�oados...";
		mes "Eles perderam de vista meus sonhos h� muito tempo.";
		mes "Ha ha ha ha ...";
		next;
		mes "[Darwin]";
		mes "O para�so realmente existe...?";
		mes "N�o sem meu amor...";
		mes "N�o sem Harmona...";
		close;
	}
}

// ------------------------------------------------------------------
alde_alche,79,19,5	script	Especialista#alchemistq	4_M_ALCHE_A,{
	mes "[Van Helmont]";
	if (BaseJob != Job_Merchant) {
		if (BaseJob == Job_Alchemist) {
			mes "O que voc� quer?";
			mes "Estou ocupado!!";
			mes "N�o me incomode e continue seu caminho.";
			next;
			mes "[Van Helmont]";
			mes "Agora, vamos...";
			mes "Voc� nunca vai ter qualquer pesquisa conclu�da se voc� apenas fica perambulando.";
			mes "Saia e aprenda tudo o que puder. ";
			next;
			mes "[Van Helmont]";
			mes "Ler livros cient�ficos e realizar experimentos.";
			mes "Isso � o que alquim�a.";
			mes "Agora, deixe-me voltar ao trabalho! ";
			close;
		} else {
			mes "S� um pouco...";
			mes "Um pouquinho mais...";
			mes "N�oo!";
			mes "S� um pouco mais e isso j� teria sido feito!";
			next;
			mes "[Van Helmont]";
			mes "Por qu�...?!";
			mes "Por que, outro fracasso?!";
			mes "Meus c�lculos estavam corretos!";
			mes "E-espera...!";
			next;
			mes "[Van Helmont]";
			mes "Talvez, se eu capacitasse o fluxo t�rmico usando o gradiente neutronic, ele apenas p�de trabalhar...!";
			close;
		}
	}
	if (alchemistq == 8) {
		mes "Arrrrgh ...!";
		mes "Por que essa f�rmula n�o est� funcionando?";
		mes "O que est� errado?";
		mes "Em teoria, est� tudo correto, mas deve haver um erro na f�rmula em algum lugar ... ";
		next;
		mes "[Van Helmont]";
		mes "Eu derramo isto aqui, e ele deve parar.";
		mes "Espere, esta � a solu��o errada!";
		mes "Como eu poderia fazer um erro t�o idiota?!";
		mes "Quando eles ficaram trocados?!";
		next;
		mes "[Van Helmont]";
		mes "Est� bem, est� bem...";
		mes "Eu s� preciso corrigir essa parte.";
		mes "N�o h� necessidade de come�ar de novo.";
		mes "Preciso consert�-lo...";
		mes "Mas espere ... Espere...";
		next;
		mes "[Van Helmont]";
		mes ".................";
		next;
		mes "[Van Helmont]";
		mes "Hum...";
		mes "Quem � Voc�?";
		next;
		if (select("Quero ser Alquim�sta",".......") == 2) {
			mes "[Van Helmont]";
			mes "Hmm...?";
			mes "O que, voc� s� quer assistir?";
			mes "Tudo bem, mas fa�a sil�ncio e deixe-me terminar. ";
			next;
			mes "[Van Helmont]";
			mes "Fique fora do meu caminho e n�o ande tocando coisas.";
			mes "Pode haver alguns materiais vol�teis, por isso seria perigoso ter quaisquer acidentes.";
			close;
		}
		mes "[Van Helmont]";
		mes "Voc�...?";
		mes "Um Alquimista?";
		mes "Que mercador engra�ado.";
		next;
		mes "[Van Helmont]";
		mes "Bem, isso � bom, mas tenho experi�ncias muito urgentes que exigem minha aten��o.";
		mes "Ent�o n�o fique no caminho.";
		next;
		if (select("Ensine-me algo","...") == 1) {
			mes "[Van Helmont]";
			mes "Argh...!";
			mes "Eu n�o te disse para n�o me incomodar?";
			mes "O que � t�o dif�cil de entender sobre isso?";
			next;
			mes "[Van Helmont]";
			mes "Bem, eu vou te dar uma tarefa.";
			mes "Aprenda algo novo e volte.";
			mes "Vamos ver.";
			mes "O que seria bom...";
			next;
			mes "[Van Helmont]";
			mes "Certo j� sei..";
			mes "V� aprender como faz o Ant�geno e Mistura com Molgenstein.";
			next;
			mes "[Van Helmont]";
			mes "Voc� n�o precisa trazer nada.";
			mes "Basta ir v�-lo no trabalho e mand�-lo dizer-lhe como ele faz essas solu��es.";
			next;
			mes "[Van Helmont]";
			alchemistq = 9;
			changequest(2035,2036);
			mes "Bem, ent�o vejo voc� mais tarde.";
			mes "� melhor voc� ir logo que puder.";
			close;
		}
		mes "[Van Helmont]";
		mes "...";
		next;
		mes "[Van Helmont]";
		mes "...";
		mes "......";
		next;
		mes "[Van Helmont]";
		mes "...";
		mes "......";
		next;
		mes "[Van Helmont]";
		mes "Ent�o, se eu calibrar a taxa de combust�o deste composto.";
		mes "Deve negar qualquer tend�ncias coesas neste fluxo de part�culas...";
		next;
		mes "[Van Helmont]";
		mes "Mas o que eu vou fazer sobre toda essa cristaliza��o espont�nea?!";
		mes "Eu n�o posso muito bem remover esta matriz, preciso que o catalisador atinja o ponto triplo.";
		next;
		mes "[Van Helmont]";
		mes "Damn!";
		mes "O que eu vou fazer?!";
		close;
	} else if (alchemistq == 9) {
		mes "Tudo bem, se eu fizer uma incis�o aqui nos tent�culos.";
		mes "Adicionar uma solu��o de jellopy e muco pegajoso no...";
		mes "Onde minha vas�lha de mistura foi parar?";
		next;
		mes "[Van Helmont]";
		mes "Ser� que eu us�-los todos em um momento como este?!";
		mes "Gostaria de saber se Nicholas tem alguma esquerma.";
		mes "Espere.";
		mes "Espere um minuto...";
		next;
		mes "[Van Helmont]";
		mes "...";
		next;
		mes "[Van Helmont]";
		mes "...";
		mes "......";
		mes "Quem � voc�?";
		next;
		if (select("Quero me tornar Alquimista",".......") == 2) {
			mes "[Van Helmont]";
			mes "Hmm...?";
			mes "Fique fora do meu caminho e n�o ande tocando as coisas.";
			mes "Pode haver alguns materiais vol�teis, por isso seria perigoso ter algum acidente.";
			close;
		}
		mes "[Van Helmont]";
		mes "Ah, � claro.";
		mes "O mercador de antes.";
		mes "Ent�o, o que voc� aprendeu com Molgenstein?";
		mes "Eu n�o apenas enviei voc� l� para se divertir, voc� sabe.";
		next;
		mes "[Van Helmont]";
		mes "Deixe-me fazer algumas perguntas para verificar o que voc� aprendeu.";
		next;
		if (molgenstain == 3) {
			mes "[Van Helmont]";
			mes "Qual item n�o � necess�rio para fazer um Ant�geno?";
			next;
			if (select("Karvodailnirol","Detrimindexta","Alcool") != 1) {
				.@w_point += 1;
			}
			mes "[Van Helmont]";
			mes "Qual item n�o � necess�rio para fazer uma M�stura?";
			next;
			if (select("Karvodailnirol","Detrimindexta","Alcool") != 2) {
				.@w_point += 1;
			}
			if (.@w_point) {
				mes "[Van Helmont]";
				mes "Voc� n�o estava ouvindo Molgenstein?";
				mes "Talvez voc� tenha que v�-lo fazer novamente.";
				next;
				mes "[Van Helmont]";
				mes "Se n�o saber os itens exatos que precisa em um experimento.";
				mes "Voc� pode acabar ferindo a si mesmo e a outras pessoas!";
				close;
			}
			mes "[Van Helmont]";
			mes "Bom, voc� aprendeu bem.";
			mes "Certo, agora voc� sabe algo sobre experimenta��o.";
			mes "Voc� terminou aqui, ent�o agora eu posso continuar com minhas experi�ncias.";
			next;
			mes "[Van Helmont]";
			mes "V� agora encontrar no quarto ao lado deste, e fale com Nicholas.";
			mes "Ele vai continuar seu treinamento.";
			next;
			alchemistq = 20;
			changequest(2036,2037);
			mes "[Van Helmont]";
			mes "O que voc� ainda est� fazendo aqui?";
			mes "V�!";
			mes "N�s dois temos coisas mais importantes para fazer!";
			close;
		} else {
			mes "[Van Helmont]";
			mes "Qual item n�o � necess�rio para fazer um Ant�geno?";
			next;
			select("Pluma","Muco Pegajoso","Sangue de Animal");
			mes "[Van Helmont]";
			mes "Qual item n�o � necess�rio para fazer uma M�stura?";
			next;
			select("Ra��o de Monstro","L�bios Fossilizados","Bandagem Estragada");
			mes "[Van Helmont]";
			mes "Seja honest"+(Sex == SEX_MALE ? "o":"a")+".";
			mes "Voc� n�o sabe, n�o �?!";
			mes "V� falar com Molgenstein e pedir-lo para ensinar?!";
			next;
			mes "[Van Helmont]";
			mes "Nem pense em voltar at� que voc� fale com ele!";
			mes "Agora pare de me incomodar e saia daqui!";
			close;
		}
	} else if (alchemistq == 20) {
		mes "O que...?";
		mes "Eu pensei que eu te disse para falar com Nicholas na sala ao lado?";
		next;
		mes "[Van Helmont]";
		mes "Eu preciso continuar minha pesquisa, e voc� precisa terminar de seu treinamento para Alquimista.";
		mes "Vamos, mexa-se!";
		close;
	} else {
		mes "S� um pouco...";
		mes "Um pouquinho mais...";
		mes "N�ooo!";
		mes "S� um pouco mais e isso j� teria sido feito!";
		next;
		mes "[Van Helmont]";
		mes "Por qu�...?!";
		mes "Por que, outro fracasso?!";
		mes "Meus c�lculos estavam corretos!";
		mes "Espere...";
		next;
		mes "[Van Helmont]";
		mes "Talvez, se eu capacitasse o fluxo t�rmico usando o gradiente neutronic...";
		close;
	}
}

// ------------------------------------------------------------------
alde_alche,145,19,1	script	Pesquisador#alchemistq	1_M_LIBRARYMASTER,{
	if (checkweight(Knife,1) == 0) {
		mes "[Nicholas Flamel]";
		mes "Espere um momento!";
		mes "Atualmente voc� carrega muitos itens com voc�.";
		mes "Volte depois de guardar alguns itens no armaz�m da Kafra.";
		close;
	}
	if (alchemistq > 19 && alchemistq < 22) {
		if (alchemistq == 20) {
			mes "[Nicholas Flamel]";
			mes "Ooh...";
			mes "Voc� � o Mercador que quer se tornar um Alquimista?";
			next;
			mes "[Nicholas Flamel]";
			mes "N�o � apenas qualquer um pode se tornar um Alquimista, voc� sabe.";
			mes "Voc� tem que ter motiva��o e metas claras e um forte senso de foco.";
			next;
			mes "[Nicholas Flamel]";
			mes "Os alquimistas devem memorizar muitas equa��es qu�micas.";
			mes "Leis cient�ficas e muitas outras informa��es.";
			mes "Na verdade, � muito dif�cil.";
			next;
			mes "[Nicholas Flamel]";
			mes "Se voc� n�o pode se concentrar, voc� ficar� confuso mais tarde.";
			mes "Quando voc� olhar para gr�ficos de Alquimia.";
			mes "Meu teste julgar� sua capacidade de fazer exatamente isso.";
			next;
		}
		mes "[Nicholas Flamel]";
		mes "Encontre as palavras embaralhadas no grupo de letras que lhe mostrarei.";
		mes "Eles podem ser feitos usando algumas ou todas as letras.";
		next;
		mes "[Nicholas Flamel]";
		mes "Voc� passa se voc� escolher a palavra que � ^551A8BCorreta^000000 nesse quebra-cabe�a.";
		next;
		switch (rand(1,3)) {
			case 1:
			mes "[Nicholas Flamel]";
			mes "t m y a n y e o b n e g p r i";
			next;
			if (select("Bronze","Inseto","Quebra","Brigan") == 4) {
				.@alch_t += 10;
			}
			mes "[Nicholas Flamel]";
			mes "o n c u t a p i l e r s v m u";
			next;
			if (select("armaz�m","comerciante","simples","loja") == 2) {
				.@alch_t += 10;
			}
			mes "[Nicholas Flamel]";
			mes "t v a r m e g p h e u b o y l";
			next;
			if (select("grupo","cl�","l�der","doces") == 1) {
				.@alch_t += 10;
			}
			mes "[Nicholas Flamel]";
			mes "q z a h n a i n b r d p t n c";
			next;
			if (select("partisan","partizan","pato","paros") == 2) {
				.@alch_t += 10;
			}
			break;
			case 2:
			mes "[Nicholas Flamel]";
			mes "m p d i c f a r o g n k w a s";
			next;
			if (select("packman","sol","ragnarok","maravilhas") == 1) {
				.@alch_t += 10;
			}
			mes "[Nicholas Flamel]";
			mes "g b n o p r e f a r e t a s k";
			next;
			if (select("roxa","fuma�a","ragnarok","raio") == 3) {
				.@alch_t += 10;
			}
			mes "[Nicholas Flamel]";
			mes "u b n i s j r t r e a g a d p";
			next;
			if (select("abertura","kinship","doa��o","fonte") == 1) {
				.@alch_t += 10;
			}
			mes "[Nicholas Flamel]";
			mes "� o e h � r o m c a i n p t t";
			next;
			if (select("forja","po��o","encomenda","comerciante") == 2) {
				.@alch_t += 10;
			}
			break;
			case 3:
			mes "[Nicholas Flamel]";
			mes "s m i e x b w u n e t a g l r";
			next;
			if (select("tigre","lobo","ab�bora","rasgou") == 1) {
				.@alch_t += 10;
			}
			mes "[Nicholas Flamel]";
			mes "n i e g b o p d s o a u w r v";
			next;
			if (select("golpe","provocar","vigor","abracadabra") == 3) {
				.@alch_t += 10;
			}
			mes "[Nicholas Flamel]";
			mes "l r m g r e x t a v i n e d e";
			next;
			if (select("alberta","latifoliate","crimson","verde") == 4) {
				.@alch_t += 10;
			}
			mes "[Nicholas Flamel]";
			mes "� o e h � r o m c a i n p t t";
			next;
			if (select("forja","po��o","encomenda","comerciante") == 2) {
				.@alch_t += 10;
			}
			break;
		}
		mes "[Nicholas Flamel]";
		mes "Ah, terminamos.";
		mes "Agora vamos ver...";
		if (.@alch_t > 30) {
			alchemistq = 22;
			mes "Excelente trabalho!";
			next;
			mes "[Nicholas Flamel]";
			mes "�timo, voc� encontrou todas essas palavras escondidas.";
			mes "Com esse tipo de concentra��o, voc� n�o deve ter nenhum problema para memorizar equa��es.";
			next;
			mes "[Nicholas Flamel]";
			mes "Volte daqu� a pouco, enquanto eu preparo a pr�xima tarefa para o seu treinamento.";
			next;
			mes "[Nicholas Flamel]";
			mes "Oh, e antes de voc� falar comigo novamente, certifique-se de que voc� tem ^551A8Bespa�o suficiente em seu invent�rio^000000.";
			close;
		} else {
			alchemistq = 21;
			mes "^666666*Suspiro!*^000000";
			mes "H-horrivel!";
			next;
			mes "[Nicholas Flamel]";
			mes "A julgar por esses resultados, voc� obviamente tem um problema com a concentra��o.";
			next;
			mes "[Nicholas Flamel]";
			mes "Se voc� n�o pode mesmo resolver estes enigmas f�ceis da palavra.";
			mes "Como pode voc� se manter a par de suas experi�ncias e pesquisa?";
			next;
			mes "[Nicholas Flamel]";
			mes "Por que voc� n�o relaxa e descansa um pouco antes de fazer o teste novamente?";
			close;
		}
	} else if (alchemistq == 22) {
		if (MaxWeight - Weight < 1370) {
			mes "[Nicholas Flamel]";
			mes "Uau...";
			mes "Voc� est� carregando muita coisa!";
			mes "Primeiro, coloque algumas de suas coisas no Armaz�m Kafra.";
			close;
		}
		mes "[Nicholas Flamel]";
		mes "Bem...";
		mes "Para sua pr�xima tarefa, voc� precisar� viajar para ^551A8BJuno^000000.";
		next;
		mes "[Nicholas Flamel]";
		mes "L�, voc� precisar� falar com ^551A8BBain^000000 e ^551A8BBajin^000000.";
		mes "Esses dois est�o fazendo pesquisa de Alquimia com os S�bios em Juno.";
		mes "Voc� aprender� algo ajudando-os com seu projeto.";
		next;
		mes "[Nicholas Flamel]";
		mes "Volte aqui para mim depois que voc� os ajuda.";
		mes "Eles v�o precisar de todos esses itens para continuar seus experimentos.";
		next;
		alchemistq = 23;
		changequest(2037,2038);
		mes "[Nicholas Flamel]";
		mes "[Nicholas Flamel]";
		mes "1 Mistura, 5 Madeira Queimada, 5 Areia Fina, 3 Min�rio de Oridecon e 3 Min�rio de Elunium.";
		getitem(Mixture,1);
		getitem(Burn_Tree,5);
		getitem(Fine_Sand,5);
		getitem(Oridecon_Stone,3);
		getitem(Elunium_Stone,3);
		next;
		mes "[Nicholas Flamel]";
		mes "Bem.";
		mes "Tenha uma viagem segura e volte sem pre�a.";
		close;
	} else if (alchemistq == 23) {
		mes "[Nicholas Flamel]";
		mes "Eu n�o disse para ir a Juno e ajudar Bain e Bajin com sua pesquisa de Alquimia?";
		close;
	} else if (alchemistq == 24) {
		alchemistq = 40;
		changequest(2038,2039);
		mes "[Nicholas Flamel]";
		mes "Ah, voc� est� de volta!";
		mes "Acabei de receber uma mensagem de Bain e Bajin.";
		mes "Eles me disseram que estavam muito felizes com sua ajuda.";
		next;
		mes "[Nicholas Flamel]";
		mes "Se voc� fosse bom o suficiente para ajudar aqueles irm�os.";
		mes "Definitivamente se qualificaria para ser um Alquimista.";
		next;
		mes "[Nicholas Flamel]";
		mes "Bom trabalho!";
		mes "Tudo o que voc� tem que fazer agora � falar com o L�der da Guilda no 2� andar!";
		mes "Parab�ns, voc� vai se tornar um Alquimista em breve!";
		close;
	} else if (alchemistq == 40 && BaseJob == Job_Merchant) {
		mes "[Nicholas Flamel]";
		mes "Tudo o que voc� tem que fazer agora � falar com o L�der da Guilda no 2� andar!";
		mes "Parab�ns, voc� vai se tornar um Alquimista em breve!";
		close;
	} else {
		mes "[Nicholas Flamel]";
		mes "Lorem ipsum dolor sit amet, consectetuer adipiscing elit.";
		mes "Vivamus sem.";
		mes "Sed metus lacus, viverra id, rutrum eget rhoncus sit amet, lectus.";
		next;
		mes "[Nicholas Flamel]";
		mes "Suspendisse sit amet urna in nisl fringilla faucibus.";
		mes "Nulla scelerisque eros...";
		mes "^666666*Resmungo*^000000";
		close;
	}
}

// ------------------------------------------------------------------
alde_alche,101,184,4	script	L�der dos Alquimistas#alchemistq	2_M_DYEINGER,{
	cutin("job_alche_vincent",2);
	mes "[Vincent Carsciallo]";
	if (BaseJob != Job_Merchant) {
		if (BaseJob == Job_Alchemist) {
			mes "Bem vindo!";
			mes "Ent�o, como est� indo sua pesquisa?";
			next;
			mes "[Vincent Carsciallo]";
			mes "�s vezes voc� obt�m resultados inesperados de uma experi�ncia.";
			mes "Embora estes possam ser retrocessos em sua pesquisa.";
			mes "Tais resultados tamb�m podem levar a novas descobertas.";
			next;
			mes "[Vincent Carsciallo]";
			mes "Se voc� descobrir algo novo, venha nos contar.";
			mes "N�o se esque�am de que estamos todos trabalhando juntos para desvendar os mist�rios da ci�ncia!";
		} else {
			mes "Hmm...?";
			mes "O que um aventureiro est� fazendo aqui na Guilda Alquimista?";
			next;
			mes "[Vincent Caracciolo]";
			mes "Receio que n�o possamos oferecer-lhe aqui se n�o for membro da nossa Guilda.";
		}
		close2;
		cutin("",255);
		end;
	}
	if (alchemistq == 0) {
		mes "Hmm...?";
		mes "Um Mercador?";
		mes "Voc� est� interessado em aprender Alquimia?";
		next;
		mes "[Vincent Carsciallo]";
		mes "Esta � a Guilda Alquimista.";
		mes "N�s pesquisamos e experimentamos com muitas subst�ncias diferentes para criar novos materiais sem usar magia.";
		next;
		mes "[Vincent Carsciallo]";
		mes "Algum dia, esperamos desvendar o segredo da vida, assim como os outros mist�rios da ci�ncia.";
		next;
		mes "[Vincent Carsciallo]";
		mes "Depois de estar viajando como um comerciante por um longo tempo, voc� deve ter desenvolvido alguma curiosidade cient�fica.";
		mes "Se voc� gostaria de aprender Alquimia, por que voc� n�o tenta se tornar um Alquimista?";
		close2;
		cutin("",255);
		end;
	} else if (alchemistq == 40) {
		if (JobLevel < 40) {
			alchemistq = 0;
			mes "Hmm...";
			mes "Voc� n�o parece estar qualificado ainda.";
			mes "Lembre-se, voc� deve alcan�ar pelo menos o n�vel 40 de Classe para se tornar um Alquimista.";
			close2;
			cutin("",255);
			end;
		}
		if (SkillPoint) {
			mes "Ah, voc� est� quase pronto para se tornar um alquimista.";
			mes "Mas voc� deve primeiro gastar seus pontos de habilidade n�o utilizados.";
			next;
			mes "[Vincent Carsciallo]";
			mes "Fale comigo novamente depois de ter gasto todos os seus pontos de habilidade extras.";
			close2;
			cutin("",255);
			end;
		}
		if (questprogress(2039)) { changequest(2039,2040); }
		if (questprogress(2034)) { changequest(2034,2040); }
		mes "Ah, bem isso � tudo.";
		mes "Posso ver que voc� aprendeu todos os conceitos b�sicos da Alquimia.";
		next;
		jobchange(Job_Alchemist);
		completequest(2040);
		callfunc("ClearJobQuest2nd",18);
		mes "[Vincent Carsciallo]";
		mes "Parab�ns, voc� � agora um membro da nossa ilustre Guilda.";
		mes "Eu espero que voc� aprenda muito...";
		next;
		if (.@jlevel == 50) {
			getitem(Slim_Potion_Create_Book,1);
			getitem(Alcol_Create_Book,1);
			getitem(FireBottle_Create_Book,1);
			getitem(Acid_Create_Book,1);
			getitem(Plant_Create_Book,1);
			getitem(Mine_Create_Book,1);
			getitem(Normal_Potion_Book,1);
			mes "[Vincent Carsciallo]";
			mes "Deixe-me dar-lhe algo especial.";
			mes "Voc� pode usar isso para come�ar sua vida de pesquisa.";
		} else {
			switch (rand(1,6)) {
				case 1:
				getitem(Alcol_Create_Book,1);
				break;
				case 2:
				getitem(FireBottle_Create_Book,1);
				break;
				case 3:
				getitem(Acid_Create_Book,1);
				break;
				case 4:
				getitem(Plant_Create_Book,1);
				break;
				case 5:
				getitem(Mine_Create_Book,1);
				break;
				case 6:
				getitem(Normal_Potion_Book,1);
			}
			mes "[Vincent Carsciallo]";
			mes "E...";
			mes "Aqui est� uma pequena coisa para ajud�-lo a come�ar sua pesquisa.";
		}
		next;
		mes "[Vincent Carsciallo]";
		mes "Vejo voc� mais tarde, ent�o...";
		mes "Lembre-se de viver com orgulho de ser Alquimista!";
		close2;
		cutin("",255);
		end;
	} else {
		mes "Ah...";
		mes "Eu acredito que voc� j� se inscreveu no treinamento para se tornar um Alquimista.";
		next;
		mes "[Vincent Carsciallo]";
		mes "Por favor, ou�a os outros Alquimistas e siga as instru��es cuidadosamente.";
		mes "Voc� aprender� muito com eles.";
		close2;
		cutin("",255);
		end;
	}
}

