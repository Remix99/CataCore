#include "ScriptPCH.h"

class System_OnKill : public PlayerScript
{
	public:
		System_OnKill() : PlayerScript("System_OnKill") {}

	void OnPVPKill(Player * Killer, Player * Victim)
	{
		uint64 KillerGUID = Killer->GetGUID();
		uint64 VictimGUID = Victim->GetGUID();

		struct KillStreak_Info
		{
			uint32 killstreak;
			uint64 lastkill;
		};

		static std::map<uint32, KillStreak_Info> KillStreakData;

		if( KillerGUID == VictimGUID || KillStreakData[KillerGUID].lastkill == VictimGUID )
			return;

		KillStreakData[KillerGUID].killstreak++;
		KillStreakData[KillerGUID].lastkill = VictimGUID;
		KillStreakData[VictimGUID].killstreak = 0;
		KillStreakData[VictimGUID].lastkill = 0;

		switch( KillStreakData[KillerGUID].killstreak )
		{
			char message[250];

			case 5:
				snprintf(message, 250, "|cFFFF0000[PvP System]:|r |cFF3399FF%s is on a killstreak of %u!|r", Killer->GetName(), KillStreakData[KillerGUID].killstreak);
				sWorld->SendServerMessage(SERVER_MSG_STRING, message);
				break;

			case 10:
				snprintf(message, 250, "|cFFFF0000[PvP System]:|r |cFF3399FF%s is on a killstreak of %u!|r", Killer->GetName(), KillStreakData[KillerGUID].killstreak);
				sWorld->SendServerMessage(SERVER_MSG_STRING, message);
				break;

			case 20:
				snprintf(message, 250, "|cFFFF0000[PvP System]:|r |cFF3399FF%s is on a killstreak of %u!|r", Killer->GetName(), KillStreakData[KillerGUID].killstreak);
				sWorld->SendServerMessage(SERVER_MSG_STRING, message);
				break;

			case 30:
				snprintf(message, 250, "|cFFFF0000[PvP System]:|r |cFF3399FF%s is on a killstreak of %u!|r", Killer->GetName(), KillStreakData[KillerGUID].killstreak);
				sWorld->SendServerMessage(SERVER_MSG_STRING, message);
				break;

			case 40:
				snprintf(message, 250, "|cFFFF0000[PvP System]:|r |cFF3399FF%s is on a killstreak of %u!|r", Killer->GetName(), KillStreakData[KillerGUID].killstreak);
				sWorld->SendServerMessage(SERVER_MSG_STRING, message);
				break;

			case 50:
				snprintf(message, 250, "|cFFFF0000[PvP System]:|r |cFF3399FF%s is on a killstreak of %u!|r", Killer->GetName(), KillStreakData[KillerGUID].killstreak);
				sWorld->SendServerMessage(SERVER_MSG_STRING, message);
				break;

			case 60:
				snprintf(message, 250, "|cFFFF0000[PvP System]:|r |cFF3399FF%s is on a killstreak of %u!|r", Killer->GetName(), KillStreakData[KillerGUID].killstreak);
				sWorld->SendServerMessage(SERVER_MSG_STRING, message);
				break;

			case 70:
				snprintf(message, 250, "|cFFFF0000[PvP System]:|r |cFF3399FF%s is on a killstreak of %u!|r", Killer->GetName(), KillStreakData[KillerGUID].killstreak);
				sWorld->SendServerMessage(SERVER_MSG_STRING, message);
				break;

			case 80:
				snprintf(message, 250, "|cFFFF0000[PvP System]:|r |cFF3399FF%s is on a killstreak of %u!|r", Killer->GetName(), KillStreakData[KillerGUID].killstreak);
				sWorld->SendServerMessage(SERVER_MSG_STRING, message);
				break;

			case 90:
				snprintf(message, 250, "|cFFFF0000[PvP System]:|r |cFF3399FF%s is on a killstreak of %u!|r", Killer->GetName(), KillStreakData[KillerGUID].killstreak);
				sWorld->SendServerMessage(SERVER_MSG_STRING, message);
				break;

			case 100:
				snprintf(message, 250, "|cFFFF0000[PvP System]:|r |cFF3399FF%s is on a killstreak of %u!|r", Killer->GetName(), KillStreakData[KillerGUID].killstreak);
				sWorld->SendServerMessage(SERVER_MSG_STRING, message);
				break;

			case 125:
				snprintf(message, 250, "|cFFFF0000[PvP System]:|r |cFF3399FF%s is on a killstreak of %u!|r", Killer->GetName(), KillStreakData[KillerGUID].killstreak);
				sWorld->SendServerMessage(SERVER_MSG_STRING, message);
				break;

			case 150:
				snprintf(message, 250, "|cFFFF0000[PvP System]:|r |cFF3399FF%s is on a killstreak of %u!|r", Killer->GetName(), KillStreakData[KillerGUID].killstreak);
				sWorld->SendServerMessage(SERVER_MSG_STRING, message);
				break;

			case 200:
				snprintf(message, 250, "|cFFFF0000[PvP System]:|r |cFF3399FF%s is on a killstreak of %u!|r", Killer->GetName(), KillStreakData[KillerGUID].killstreak);
				sWorld->SendServerMessage(SERVER_MSG_STRING, message);
				break;

			case 250:
				snprintf(message, 250, "|cFFFF0000[PvP System]:|r |cFF3399FF%s is on a killstreak of %u!|r", Killer->GetName(), KillStreakData[KillerGUID].killstreak);
				sWorld->SendServerMessage(SERVER_MSG_STRING, message);
				break;

			case 300:
				snprintf(message, 250, "|cFFFF0000[PvP System]:|r |cFF3399FF%s is on a killstreak of %u!|r", Killer->GetName(), KillStreakData[KillerGUID].killstreak);
				sWorld->SendServerMessage(SERVER_MSG_STRING, message);
				break;

			case 350:
				snprintf(message, 250, "|cFFFF0000[PvP System]:|r |cFF3399FF%s is on a killstreak of %u!|r", Killer->GetName(), KillStreakData[KillerGUID].killstreak);
				sWorld->SendServerMessage(SERVER_MSG_STRING, message);
				break;

			case 400:
				snprintf(message, 250, "|cFFFF0000[PvP System]:|r |cFF3399FF%s is on a killstreak of %u!|r", Killer->GetName(), KillStreakData[KillerGUID].killstreak);
				sWorld->SendServerMessage(SERVER_MSG_STRING, message);
				break;

			case 450:
				snprintf(message, 250, "|cFFFF0000[PvP System]:|r |cFF3399FF%s is on a killstreak of %u!|r", Killer->GetName(), KillStreakData[KillerGUID].killstreak);
				sWorld->SendServerMessage(SERVER_MSG_STRING, message);
				break;

			case 500:
				snprintf(message, 250, "|cFFFF0000[PvP System]:|r |cFF3399FF%s is on a killstreak of %u!|r", Killer->GetName(), KillStreakData[KillerGUID].killstreak);
				sWorld->SendServerMessage(SERVER_MSG_STRING, message);
				break;

			case 1000:
				snprintf(message, 250, "|cFFFF0000[PvP System]:|r |cFF3399FF%s is on a killstreak of %u!|r", Killer->GetName(), KillStreakData[KillerGUID].killstreak);
				sWorld->SendServerMessage(SERVER_MSG_STRING, message);
				break;
		}
	} 
};

void AddSC_System_OnKill()
{
	new System_OnKill;
}