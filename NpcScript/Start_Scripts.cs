/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|   Ragnarok - Config.                           |
|                                                                   |
+-------------------------------------------------------------------+
| - Importação dos arquivos de configuração que iniciam Npcs        |
\*-----------------------------------------------------------------*/

npc_global_list: (

	"NpcScript/Outros/Funcoes.c",

	// Npcs temporários de apoio
	"NpcScript/Suporte/Barquerio_hungel.c",

	// Batalha Campal
	@include "NpcScript/Npc_Config/Campal.conf"

	// Classes
	@include "NpcScript/Npc_Config/Classes.conf"

	// Lojas / trocas em geral
	@include "NpcScript/Npc_Config/Comerciantes.conf"

	// Habitantes e npcs comuns
	@include "NpcScript/Npc_Config/Comuns.conf"

	// Mapa Flag
	@include "NpcScript/Npc_Config/Definicao_de_mapa.conf"

	// Guerra do Império
	@include "NpcScript/Npc_Config/WoE.conf"

	// Guias
	@include "NpcScript/Npc_Config/Guias.conf"

	// Instânncias
	@include "NpcScript/Npc_Config/Instancias.conf"

	// Quests
	@include "NpcScript/Npc_Config/Missoes.conf"

	// Monstros
	@include "NpcScript/Npc_Config/Monstros.conf"

	// Variados
	@include "NpcScript/Npc_Config/Outros.conf"

	// Portais
	@include "NpcScript/Npc_Config/Portais.conf"

	// Barqueiros e transportes em geral
	@include "NpcScript/Npc_Config/Transportes.conf"
)