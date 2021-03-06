/*--------------------------------------------------------------------*\
|                ____                     _                            |
|               /    |                   | |_                          |
|              /     |_ __ ____  __ _  __| |_  __ _                    |
|             /  /|  | '__/  __|/ _` |/ _  | |/ _` |                   |
|            /  __   | | |  |__  (_| | (_| | | (_| |                   |
|           /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                   |
|          /__/   |__|                                                 |
|                                                                      |
+----------------------------------------------------------------------+
| - Arquivo de configura��o de Grupo.                                  |
\*--------------------------------------------------------------------*/

monster_config: {

	// A taxa de HP dos MVPs.    
	mvp_hp_rate: 100

	// A taxa de HP de monstros que n�o s�o MVPs.    
	monster_hp_rate: 100

	// A velocidade de ataque m�xima de um monstro.
	monster_max_aspd: 199

	// Configura��es da Intelig�ncia Artificial (AI/IA) dos monstros.    
	// 0x001: Quando habilitado monstros ir�o atualizar sua c�lula-alvo
	//        algumas vezes (normalmente eles nunca atualizam sua
	//        c�lula-alvo antes de alcan��-la enquanto a seguem)
	// 0x002: Faz os monstros usarem sua habilidade "ataque rude"
	//        (normalmente teleportando-se para longe) se eles s�o
	//        atacados e n�o conseguem revidar independente de como
	//        forem atacados (eg: Tocaia), caso contr�rio, seu
	//        "ataque rude" somente � ativado se n�o conseguem alcan�ar
	//        o alvo com ataque f�sico (eg: sniping)
	// 0x004: Caso n�o definido, monstros podem mudar seu alvo apenas
	//        quando s�o atacados fisicamente (dist�ncia
	//        jogador/monstro < 3), sen�o monstros podem mudar seu alvo
	//        e perseguir ataques de alcance.
	//        Esta flag tamb�m inutiliza o alvo 'provocado'.
	// 0x008: Caso definido, quando um monstro deixa seu alvo escapar,
	//        estes param de andar imediatamente. Se n�o definido, eles
	//        continuam at� a �ltima c�lula do alvo.
	//        Quando definida monstros tamb�m espalham-se no momento em
	//        que perdem seus alvos. Use este modo para tornar o
	//        mob-train mais dif�cil escondendo e puxando os monstros
	//        em um local singular (ie: aperfei�oamento na habilidade
	//        Tocaia)
	// 0x010: Caso definido, as habilidades dos monstros definidas
	//        para amigos ser�o engatilhadas.
	// 0x020: Quando definida, a intelig�ncia artificial do monstro
	//        � executada para todos os monstros no mapa que
	//        possuem jogadores os atacando, ao contr�rio dos monstros
	//        que est�o apenas pr�ximos dos jogadores.
	// 0x040: Quando definida, quando o alvo do monstro muda de mapa,
	//        o monstro ir� atacar qualquer npc-warps (portais) no
	//        campo de vis�o (utilize com mob_warp, abaixo)
	// 0x100: Se definida, os monstros ir�o utilizar habilidades
	//        rand�micas na lista de habilidades ao inv�s de checar as
	//        habilidades em ordem (n�o defina, e se um monstro possuir
	//        habilidades demais, a que estiver localizada na parte
	//        final da lista ser� raramente selecionada)
	// 0x200: Caso definida, o delay de reuso de uma habilidade n�o ser�
	//        aplicada a todas as entradas de uma mesma habilidade, caso
	//        contr�rio, somente para a entrada particular
	//        (eg: O monstro possui Cura em seis linhas na mob_skill_db,
	//        somente a entrada que atualmente � usada receber� o delay,
	//        se a outra entrada da Cura for utilizada n�o haver� delay).
	//        Tornar� monstros mais dif�ceis de se matar, especialmente
	//        MVPs.
	// 0x400: Defina para que as habilidades dos monstros tenham um
	//        alcance de 9 c�lulas.
	//        Opostamente, as habilidades ir�o obedecer sua
	//        pr�-defini��o de alcance.
	// Exemplo: 0x140 -> Persegue jogadores incluindo portais + utiliza
	//        habilidades de maneira rand�mica.
	monster_ai: 0

	// Quantas vezes um monstro deve repensar sua persegui��o?
	// 0: A cada 100ms (MIN_MOBTHINKTIME)
	// 1: A cada c�lulas movidas
	// 2: A cada 2 c�lulas movidas
	// 3: A cada 3 c�lulas movidas (oficial)
	// x: A cada x c�lulas movidas
	// Independentemente dessa configura��o, um monstro sempre
	// repensar� sua persegui��o se atingir seu alvo.
	// Aumente esse valor se quiser que os monstros continuem se
	//movendo depois de perderem o alvo.
	monster_chase_refresh: 3

	// Monstros s�o habilitados a serem teleportados (some se preciso)?
	// 0: Desabilitado.
	// 1: Habilitar o teleporte quando estiver em NPC-warps
	// 2: Habilitar o teleporte quando estiver em portais da habilidade
	//Portal
	// 4: Desabilitar o teleporte quando o mapa alvo possuir a 
	//flag 'nobranch'.
	mob_warp: 0

	// Caso estas sejam definidas acima de 0, elas definem o tempo 
	//em ms que os monstros
	// ter�o sua 'IA' ativa at� todos os jogadores saiam de perto dele.
	mob_active_time: 0
	boss_active_time: 0

	// Ajuste do alcance da vis�o de Monstros e Bichos de Estima��o
	view_range_rate: 100

	// Alcance da persegui��o � base para a menor persegui��o que o
	// monstros far�o antes de desistir enquanto o alvo est� fora de
	//seu campo de vis�o.
	chase_range_rate: 100

	// Permitir que monstros sejam agressivos e que ataquem primeiro?
	monster_active_enable: true

	// A mob_db deve inutilizar os nomes dos monstros especificados 
	//nos arquivos de spawn?
	// 0: N�o
	// 1: sempre utilizar a coluna Name na mob_db
	//(nome do monstro em ingl�s)
	// 2: sempre utilizar a coluna JName na mob_db
	//(nome original no kRO)
	override_mob_names: 0

	// Taxa de delay do dano de monstros    
	// Definindo para no/0 � como se possu�ssem Vigor sempre.
	monster_damage_delay_rate: 100

	// A��es de looting de monstros.
	// 0 = O monstro ir� consumir o item.
	// 1 = O monstro n�o ir� consumir o item.
	monster_loot_type: 0

	// Chance de um monstro conjurar uma habilidade    
	// Taxas de experi�ncias altas sugerem o uso de habilidades para
	//100% com poucos ou sem ataques normais.
	// Defina para 0 e desabilite habilidades em monstros.
	mob_skill_rate: 100

	// Ajuste no delay de habilidades de monstros    
	// Depois de conjurar uma habilidade, existe sempre um delay para
	//haver a possibilidade de reconjur�-la.
	// Repare que habilidaeds com delay zerado n�o s�o afetadas por
	//este tipo de configura��o.
	mob_skill_delay: 100

	// Taxa de monstros em um mapa, 200 significa o dobro de monstros.    
	mob_count_rate: 100

	// Taxa de respawn de monstros em um mapa. 50 significa que os
	//monstros tem o tempo de respawn reduzido pela metade    
	// Nota: Isto n�o afeta o respawn imediato a maioria dos monstros
	//normais.
	mob_spawn_delay: 100
	plant_spawn_delay: 100
	boss_spawn_delay: 100

	// Os monstros n�o ser�o invocados no campo de vis�o de jogadores?
	// 0 � desativado, caso contr�rio o n�mero de tentativas antes de
	//invocar o monstro mesmo no campo do vis�o de um jogador,
	//a n�o ser que o m�ximo seja definido (100), cujo caso o monstro
	//n�o ser� invocado, e a tentativa ser� refeita em 5 segundos.
	// NOTA: Isto n�o afeta monstros que sempre tem seu spawn na mesma
	//c�lula (como Ovo de Andre) exceto se voc� definir isto para o
	//m�ximo.
	no_spawn_on_player: 0

	// As coordenadas do spawn nos arquivos de spawn de monstros devem
	//ser ignoradas?    
	// Definindo para yes, todos os monstros ter�o um ponto de respawn
	//randomizado por todo o mapa independente do configurado no
	//arquivo de spawn.
	force_random_spawn: false

	// Escravos invocados herdar�o a passividade/agressividade de seus
	//mestres?
	// 0: N�o, manter o modo original.
	// 1: Escravos s�o sempre agressivos.
	// 2: Escravos s�o sempre passivos.
	// 3: O mesmo estado do mestre.
	slaves_inherit_mode: 2

	// Escravos invocados ter�o a mesma velocidade de movimento de seus
	//mestres?
	// NOTA: O valor 3 segue o padr�o dos servidores oficiais.
	// 0: Nunca.
	// 1: Se o mestre puder andar
	// 2: Se o mestre n�o puder andar (mesmo monstros sem movimenta��o
	//tem a velocidade especificada na mob_db)
	// 3: Sempre
	slaves_inherit_speed: 3

	// O ataque de monstros invocados (alquimistas, ou @summon) t�m a
	//chance de engatilhar cartas com autospell de seus mestres?    
	summons_trigger_autospells: true

	// Quando um monstro � atacado por outro, este ir� atacar o dono do
	//monstro inv�s do monstro que atacou-o?
	// NOTA: Monstros invocados s�o ambos aqueles que s�o invocados
	//atrav�s de @summon e invocados por Alquimistas
	retaliate_to_master: true

	// O monstro deve mudar temporariamente um alvo quando uma
	//habilidade engatilha na contagem de habilidades do monstro    
	// eg: Um monstro ataca o jogador B, e o jogador A conjura a
	//habilidade C. Se definido para yes e o monstro possuir a
	//habilidade engatilhada pela habilidade C, ent�o A ser� o alvo
	//da habilidade, caso contr�rio B ser� alvo da rea��o da habilidade.
	mob_changetarget_byskill: false

	// Se a classe de um monstro for modificada ele ter� seu HP
	//totalmente recuperado?    
	monster_class_change_full_recover: true

	// Exibir informa��es pr�ximo ao nome do monstro?
	//(n�o funciona em guardi�es da GdE)
	// 0: Desabilitado
	// 1: Exibir o HP do monstro (formato Hp/MaxHp)
	// 2: Exibir o HP do monstro (formato em % da vida total)
	// 4: Exibir o n�vel do monstro
	show_mob_info: 4

	// Monstros concedem zeny ao serem mortos?
	zeny_from_mobs: false

	// Monstros podem evoluir de n�vel (monstros ir�o evoluir de n�vel
	//toda vez que matar um jogador e ficar�o mais fortes)
	// A taxa de experi�ncia � calculada por
	//  ((nv. do monstro-nv. original do monstro)*
	//          (exp*(mobs_level_up_exp_rate/100)));
	// NOTA: N�o � aplicado aos guardi�es da GdE.
	mobs_level_up: false
	mobs_level_up_exp_rate: 1

	// Op��es Din�micas para Monstros
	// Utilizar monstros din�micos? (recomendado para servidores de
	//pequeno-m�dio porte)
	dynamic_mobs: true

	// Remover monstros mesmo se estiverem feridos
	mob_remove_damaged: true

	// Delay antes de remover monstros de mapas vazios
	//(padr�o de 5 min = 300 segs)
	mob_remove_delay: 300000

	// Defina em quem o npc_event do monstro ser� executado quando um
	//monstro for morto.
	// Tipo 1: No jogador que matou o monstro (se matou um n�o-jogador,
	//recorre ao tipo 0)
	// Tipo 0: No jogador que causou o maior dano no monstro.
	// NOTA: Isto afeta quem conquista o Castelo quando o Emperium �
	//quebrado.
	mob_npc_event_type: 1

	// Tempo em milissegundos para ativar a prote��o contra Kill Steal
	// Defina para 0 e ent�o desabilitar� esta configura��o.
	// Se isto estiver ativado e um jogador estiver usando @noks, o
	//dano de outros jogadores (KS) que n�o estejam no grupo do mesmo
	//ser�o reduzidos a 0.
	ksprotection: 0

	// Monstros invocados por MVPs, sendo subordinados a ele, devem
	//manter seu alvo quando s�o chamados para perto de seu mestre?
	mob_slave_keep_target: true

	// Utilizar ou n�o sistema de t�mulos de MvP
	// Veja http://irowiki.org/wiki/MVP#Gravestone 
	mvp_tomb_enabled: true

	// Tempo em milissegundos para o t�mulo aparecer.
	// Padr�o: 1000 (1 segundo)
	mvp_tomb_spawn_delay: 10000

	// Mostrar barra de hp dos monstros?
	// Nota: S� funciona em clientes 2012-04-04aRagexeRE em diante.
	show_monster_hp_bar: false

	// Influ�ncia pelo tamanho do monstro em taxas de experi�ncia,
	//queda de item e stats.     
	// Se o monstro for grande, dar� duas vezes a experi�ncia, aumenta
	//as taxas de queda por duas vezes e dobra todo os status
	//(hp, str, agi etc).
	// Mas se o monstro � pequeno, ser� tudo dividido por dois
	// (taxa de experi�ncia, drops e status). 
	// Padr�o: no 
	mob_size_influence: false

	// Um monstro pode ser preso por uma Barreira de Gelo utilizada
	//diretamente nele?
	// Em servidores oficiais monstros apenas podem sair de uma
	//Barreira de Gelo quando o seu alvo estiver ao oeste ou sul deles.
	// Caso eles estejam � norte ou leste eles v�o continuamente
	//tentar persegui-lo enquanto n�o conseguirem.
	// Isso causa um loop no qual eles tentar�o utilizar habilidades
	//ociosas e tentar fazer uma persegui��o contra o jogador.
	// Por outro lado, Chefes (BOSS, MVP) se comportar�o como um
	// monstro preso, n�o tentar�o se mover mas utilizar�o habilidades
	//ociosas quando forem atacados.
	// 0: Monstros se comportar�o normalmente.
	// 1: Monstros se comportar�o como monstros presos
	// 2-255: N�mero de loops para que o monstro se liberte da Barreira
	//de Gelo.
	// NOTE: Em muitos servidores, os monstros normais podem
	//libertar-se ap�s 15-35 segundos dependendo de sua velocidade.
	// Em outros servidores, eles ser�o presos dentro da Barreira de
	//Gelo at� que a mesma expire.
	// Por�m, em muitos servidores oficiais (iRO) tem a Barreira de
	//Gelo bloqueada em todos os mapas que possuirem monstros chefes.
	// Padr�o (recomendado): mob - 75, boss - 0
	// Padr�o (oficial): mob - 220, boss - 1
	mob_icewall_walk_block: 220
	boss_icewall_walk_block: 1

	//Qual n�vel de 'AC_VULTURE' e 'GS_SNAKEEYE' em monstros?
	//Oficialmente, os monstros n�o possuem essas habilidades.
	// Ent�o suas habilidades variadas t�m apenas uma gama de 9.
	// Se voc� colocar um n�mero maior do que 0, seu alcance ser�
	//aumentado por esse n�mero.
	monster_eye_range_bonus: 0
}
