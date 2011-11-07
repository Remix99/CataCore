// Place Gossip_CheckCombat to scriptname for the NPC to check if player is in combat on gossip hello

#include "ScriptPCH.h"

class Gossip_CheckCombat : public CreatureScript
{
	public:
	Gossip_CheckCombat()
	: CreatureScript("Gossip_CheckCombat")
	{
	}

	bool OnGossipHello(Player* pPlayer, Creature* pCreature)
	{
		if (pPlayer->isInCombat())
		{
			pPlayer->GetSession()->SendAreaTriggerMessage("|cffff0000You are in combat|r");
			return true;
		}
		else
		{
			return false;
		}
	}
};

void AddSC_Gossip_CheckCombat()
{
	new Gossip_CheckCombat();
}