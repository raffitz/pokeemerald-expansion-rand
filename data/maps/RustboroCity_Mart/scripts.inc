RustboroCity_Mart_MapScripts:: @ 8214F05
	.byte 0

RustboroCity_Mart_EventScript_Clerk:: @ 8214F06
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart 0
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

RustboroCity_Mart_EventScript_LocalClerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart RustboroCity_Mart_LocalMart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
RustboroCity_Mart_LocalMart:
	.2byte ITEM_QUICK_BALL
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_X_SPEED
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFENSE
	.2byte ITEM_NONE
	release
	end

RustboroCity_Mart_EventScript_PokefanF:: @ 8214F74
	msgbox RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish, MSGBOX_NPC
	end

RustboroCity_Mart_EventScript_Boy:: @ 8214F7D
	msgbox RustboroCity_Mart_Text_ShouldBuySuperPotionsInstead, MSGBOX_NPC
	end

RustboroCity_Mart_EventScript_BugCatcher:: @ 8214F86
	msgbox RustboroCity_Mart_Text_GettingEscapeRopeJustInCase, MSGBOX_NPC
	end

RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish: @ 8214F8F
	.string "I'm buying some PARLYZ HEALS and\n"
	.string "ANTIDOTES.\p"
	.string "Just in case I run into SHROOMISH\n"
	.string "in PETALBURG WOODS.$"

RustboroCity_Mart_Text_ShouldBuySuperPotionsInstead: @ 8214FF1
	.string "My POKéMON evolved.\n"
	.string "It has a lot of HP now.\p"
	.string "I should buy SUPER POTIONS for it\n"
	.string "instead of ordinary POTIONS.$"

RustboroCity_Mart_Text_GettingEscapeRopeJustInCase: @ 821505C
	.string "I'm getting an ESCAPE ROPE just in\n"
	.string "case I get lost in a cave.\p"
	.string "I just need to use it to get back to\n"
	.string "the entrance.$"

