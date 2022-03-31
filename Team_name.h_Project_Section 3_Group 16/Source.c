// CSCN71030 - Team Based Project Development 
// Group Project Group 16 - Section 3
// Raghu, Tyler, Owen, Brodin
// March 3rd, 2022
// 
// Revision History 
// 1.0       March 3rd      2022

#include "Typing.h"
#include "IO.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "character.h"
#include "object.h"
#include "Player.h"
#include "Colours.h"


#define FIRST_ARGUMENT 1
#define LEVEL_ONE      1
#define LEVEL_TWO      2
#define LEVEL_THREE    3
#define LEVEL_FOUR     4

//colour codes to print lines of text in that colour
//wrap the follow lines past the : in a printf statement to change the colour of the output!
//Black: \033[0; 30m
//Red: \033[0; 31m
//Green: \033[0; 32m
//Yellow: \033[0; 33m
//Blue: \033[0; 34m
//Purple: \033[0; 35m
//Cyan: \033[0; 36m
//White: \033[0; 37m


int main(int argc, char* argv[])
{

	//collect which level of the story to play
	int storyLevelToPlay = 0;
	sscanf_s(argv[FIRST_ARGUMENT], "%d", &storyLevelToPlay);
	bool canContinue = true;

	//setup a player for the game
	ptrPlayer Player = createPlayer("Test Player", 100, 50, 25);



	//Play level 1---------------------------------------------------------------------------------------------------------------------------------------------------------------------
	if (storyLevelToPlay == LEVEL_ONE)
	{
		green();
		printf("________________________________________________________________________________________________________\n");
		printf("|                                                                                                      |\n");
		printf("|                                                                                                      |\n");
		printf("|                                            :^!7?Y?7^                            .!7?Y55Y?            |\n");
		printf("|           .^77^                           :JYYY5PPP5^   .:..                    75YYY55PP?:          |\n");
		printf("|           ~JJYY!7!.                       :JYYYYYYPPP7:!?JYY?:                  :?YYYYY5PPJ.         |\n");
		printf("|           .!?JY55PY~!???!.                 ~YYYYY5P57!?J?JYYYJ.              .~!!JYYYYYPP?           |\n");
		printf("|      .~!7?JYJYYYY5YJJJYYY?.               .Y5YYYY5P5~^?JJJJYJ~             .!?JYYYYYYY5P5!           |\n");
		printf("|      !5YYY5PPP55GPJ??JJYJ7                 ^!Y55555Y?JY5PP5P~              ~JJ?JJJJYY55~.~YJ^        |\n");
		printf("|      ^?YYYYY5PPP##PJ??JY!                    ^7!7YYYYYYY55PPJ^.            :7J????JYYYY^.!JJ:        |\n");
		printf("|      .?YY55Y555PPPP5YY?~.                       !YJJYYYYYY5PPP~            .:!JJ??JYYYY!^^~~:.       |\n");
		printf("|      ^YYY5P5PYYYYY5PPPY:                     :^~7YJ?YYYYY5PPJ^             7YY5Y???JYYYYY5PP55~      |\n");
		printf("|       75Y5PPYYYYYYYY5PP5?.                  ~YYY7JYYYYYYY5PPJ              !YYYYYJJYYYYYYY55PP5!:    |\n");
		printf("|       .~?YYY7JYYYYYY5P5Y!                  :Y55Y7J5P5YYY5PGY.              7YY55P55YJJYYYYYY5PPP7    |\n");
		printf("|  .!7~^  !55Y?JYYYYYY5P5~                   ?Y5YJ7JP#BP5GPPGP7:            ..^?7~JY5YJJYYYYYY5PPP5!   |\n");
		printf("| :?55PP?^JY5Y?YYYYYY5PPP7               .~~: ~5YY7J5G#BBB5555P:           7YYJ?..~JYYYYYYYYY5PP555Y   |\n");
		printf("| ~5555PY^~?YY7?5PY5PGP55Y:           .7?J5PP!:!?Y7JJY5Y55PP55.           75Y5PPY?JYYYJ?YYYY55PPPPJ    |\n");
		printf("| ~?Y55P?^^7JY??YBBBGPGPY?.          :?55555P!::~???JJYYYY5BB?           .J5P55PYJ?JJJJJ555PGB##BG!    |\n");
		printf("|   .75YJY55PPPYYGGGBBG!             ~555555Y?!!??JJ?YYYYYYY^             ~!JJY?7JJYYYYY5PPPBGY~^.     |\n");
		printf("|   .JYYYYY555PP55GY~^.              ^?YYYYY5PPY?????JJYYYY^                  .  :^7YYYYYY5PPJ..       |\n");
		printf("|   .7YYYYYYY5PPPP~.                  ^JYYYYYY5PY?????JYY7.                 .^:^!!!!JYYYYY5PGGGPYJ7    |\n");
		printf("| :!?JJYYYYYYY555GBG55! .            ^55YYYYYY5PPYJJ?JJYY7^?J?7.          .?J5PYYJJJYYYYY5PPG#G55P5!   |\n");
		printf("| 75P5YYJJ?JJYYYJPB###GYYYJ:         .J5YYYYY5PPGB??JGGPGBGP555!         .JP5YJ???JJYYYYY5GB#BPP55YBY7 |\n");
		printf("| :?YJ?J??J?JYYYYJ5B##GPP55!          .:!JYY55PPGB?7JGBBBGP555Y^          ^YYJ?????JYYYYY5#BPY5555P##5 |\n");
		printf("|   .77???J?JYYYYY5BGPPGYJ?.            .JYYYY5PPPJ?JJYYYYY:...            .?JJJ????JYYJ?Y5J?JJYYYY5!  |\n");
		printf("|   ~YYJJ????JYYYY5YJJYYJ~              !YYYYY555Y???JJYYYY?.              ^YYY?????JYY?7JJ???JYYYYY!  |\n");
		printf("|   :7YYJ????JYYYJJ??JYYYY7             .!YYYYYYJ??J?JYYYYYYJ~^:.          :?YYYJJJYYYYY???JJ?JYYYYYJ. |\n");
		printf("|    !YYYJJJYYYJJ????JYYYYY?^            7YYYYYYJJ???JJJYYY5P5P5?           ~YYYYYY5P5YJ?JJ????JYYYYY! |\n");
		printf("|   :YYYYYYYPP5??YJ???JYY555J.          :YYYYYYYPY?????JYYGPP55YJ.         :Y5YYYYYYYY5PPP5J???JYYY5Y? |\n");
		printf("|   :~!JYY5PG5J?JYJ??JJYY555J            :^JYY5PGPJ??JYYYY5GGPGGJ          .~7YYYYYYYYY55PP5YJY5Y5PGP7 |\n");
		printf("|  !Y5Y55GB#GJ??JYYY5YPGBBBP!              YGGBB##J7J5PYJY5P#BP?.             ^JJ7JYYYYYY5PPPY55G#B5!  |\n");
		printf("| !5555P5GBBBP??JYJJJYYYG#Y:               :!P##B5?7JJ??JYYJ5B5.                 ^JYYYYY5PPYJJYYYPBJ   |\n");
		printf("| 75P55P7^J5J!7?JJ???JYYYBG:                 .77^ !?JJJ??JYYPBJ.                 ?5YYYYY5PP5?JJYYGG!   |\n");
		printf("| .^!?J7.  .  :??YY??JYYPP:                       ~?J55JJJYY5Y:                  :~?5Y55555YJJYY5P?    |\n");
		printf("|        :^^. :??Y5Y??JYYY:                       ~?JYY?~~7?J?.                    .7?!??YYY7~~?JJ!    |\n");
		printf("|       !55PJ.:??Y7:  ^!7~                        ^?JY:  :77?7:                        7?JJ            |\n");
		printf("|       ^??7::^??Y~  ~5P5YJ:                      ^??Y^::75P55Y:                       !?JJ            |\n");
		printf("|             .??YJ^::^???!.                      ^??Y7:...~~!^                        !?JJ            |\n");
		printf("|             .??Y7                               ^??Y^                                !?JJ.           |\n");
		printf("|             .7?Y7                               :??Y~                                ~?JY.           |\n");
		printf("|             .7?Y7                               :??Y~                                ~?JY:           |\n");
		printf("|             .7?J?                               :?JP!                                ~??Y:           |\n");
		printf("|              7?J?                               :?YG7                                ~??Y^           |\n");
		printf("|              7?JJ.                              :?5G7                                ~??J~           |\n");
		printf("|              !?JJ.                              :7PB7                                ^??J!           |\n");
		printf("|              !?YJ:                              .?5G?                                ^??Y!           |\n");
		printf("|              !?B5~....                          :??YJ^....                           ^?7J?:..        |\n");
		printf("| ~~~~~~~~~:~!J?7!^^^^::~~~~~~~~~~~~~~~~~~~~~~..^~~~!7!^^::~~~~~~~~~~~~~~~~~~~~~~~~~.:~~~~!7~^::~~~~~~ |\n");
		printf("|                                                                                                      |\n");
		printf("|                                                                                                      |\n");
		printf("|                                  Level 1: Into The RedWood Forest                                    |\n");
		printf("|                                                                                                      |\n");
		printf("|                           Hint: Use the enter key to move the story along!                           |\n");
		printf("|                                                                                                      |\n");
		printf("|______________________________________________________________________________________________________|\n");	
		reset();
		printf("\nYou wake up coughing up water to beaming sunlight passing through large trees.\n");
		while (getchar() != '\n');
		printf("You wonder where am I?\n");
		while (getchar() != '\n');
		printf("What happened?\n");
		while (getchar() != '\n');
		printf("You look around to see that you have washed up onto a beach with no sign of anyone around.\n");
		while (getchar() != '\n');
		printf("You then sit up to notice that you had managed to stay afloat on a single wooden board.\n");
		while (getchar() != '\n');
		printf("Then it hit you; your boat struck a rock while you were out on your first solo sailing trip.\n");
		while (getchar() != '\n');
		printf("You remember being flung off your boat but what happened from there was vague.\n");
		while (getchar() != '\n');
		printf("But all that mattered was that you were alive and made it to land.\n");
		while (getchar() != '\n');
		printf("You had no idea where we were, and there was no sign of human inhabitance for miles.\n");
		while (getchar() != '\n');
		printf("And now it begins you are left to make a choice...\n");
		while (getchar() != '\n');
		cyan();
		printf("______________________________________________________________________________________________________\n");
		printf("You think should I:\n");
		printf("   1. Walk up the beach?\n");
		printf("   2. Walk into the clear path leading into the large redwood forest?\n");
		printf("   3. Walk into the redwood forest but do not follow the path?\n");
		printf("   4. Wait on the beach and hope that someone will come to help?\n");
		int userInput = CollectNumericSelection(1, 4);
		reset();
		//Determine the next steps for the game!
		canContinue = true;
		while (canContinue == true)
		{
			switch (userInput)
			{
			//Choice 1
			case 1:
				printf("You decide that walking up the beach is the best option, so you pick yourself up and prepare to start on your quest.\n");
				while (getchar() != '\n');
				while (getchar() != '\n');
				printf("Just as you are about to leave, you think that it might be helpful to have a weapon with you.\n");
				while (getchar() != '\n');
				cyan();
				printf("______________________________________________________________________________________________________\n");
				printf("Should you...\n");

				//Determine the next steps for the game!
				canContinue = true;
				while (canContinue == true)
				{
					printf("1. Bring the board you washed up to the shore on with you?\n");
					printf("2. Bring a rock from the beach?\n");
					int userInput = CollectNumericSelection(1, 2);
					switch (userInput)
					{
					//Board choice
					case 1:
						printf("You think that the board will be the best option, so you pick it upand lug it over your shoulder.\n");
						
						ITEM* board = createItem("damage", "board", 25, Player);
						while (getchar() != '\n');
						canContinue = false;
						break;
					//Rock choice
					case 2:
						printf("You think that the rock will be the best option as this is a weapon with range, so you pick up the rockand stuff it into your pocket.\n");
						ITEM* rock = createItem("damage", "rock", 20, Player);
						while (getchar() != '\n');
						canContinue = false;
						break;
						//None of the menu options were selected
					default:
						printf("Invalid selction entered, please enter a number listen in the menu\n");
						break;
					}
				}
				reset();
				while (getchar() != '\n');
				printf("You start wandering down the beach, following the gentle curve of the water.\n");
				while (getchar() != '\n');
				printf("After walking for a few minutes, you notice that the water is curving inward.\n");
				while (getchar() != '\n');
				printf("You notice that a river flows into the redwood forest, and you cannot cross the river to continue along the beach.\n");
				while (getchar() != '\n');
				printf("So you are forced to wander into the redwood forest dodging through the trees as there are no paths in sight.\n");
		
				canContinue = true;
				userInput = 3;
				break;
			//Choice 2
			case 2:
				while (getchar() != '\n');
				printf("You step onto the path and see that that path goes on for miles and is lined with lanterns.\n");
				while (getchar() != '\n');
				printf("You think that this is a great sign! This is a sign of civilization; maybe this path will lead to a place where they can help me!\n");
				while (getchar() != '\n');
				printf("Out of joy, you sprint down this path which you are now noticing has some string sense of something wrong.\n");
				while (getchar() != '\n');
				printf("A certain eerie feeling filled the air with the gentle breeze swaying the lanterns back and forth with little squeaks.\n");
				while (getchar() != '\n');
				printf("You feel as though someone is watching you...\n");
				while (getchar() != '\n');
				printf("up ahead, you notice a small shack deep in the trees.\n");
				while (getchar() != '\n');
				printf("You sprint towards the small hut out of excitement that there may be someone who can help there.\n");
				while (getchar() != '\n');
				printf("As you get close, you notice steam billowing from the window and are hit with the stink of incredibly burnt food.\n");
				while (getchar() != '\n');
				printf("Either way, you thought your situation was worse than the situation that food is ending up in.\n");
				while (getchar() != '\n');
				printf("So you run up to the door and pound on it, hoping someone will answer and help you out.\n");
				while (getchar() != '\n');
				printf("After pounding on the door, you hear a voice inside.\n");
				while (getchar() != '\n');
				printf("A voice of a furious man.\n");
				while (getchar() != '\n');
				printf("Through the cursing you hear, you start to think maybe this wasn't such a good idea.\n");
				while (getchar() != '\n');
				printf("Then suddenly, the door whips open, and you see a very angry chef!\n");
				while (getchar() != '\n');
				printf("This chef was clearly heartbroken over burning something.\n");
				while (getchar() != '\n');
				printf("This had to be what you were smelling.\n");
				while (getchar() != '\n');
				printf("Then before you could even say a word, you saw the chef preparing to whip this burnt pie straight out the door and at you!\n");
				while (getchar() != '\n');
				printf("You quickly noticed that this pie was no longer a pie, but it was so burnt it was more like a rock!\n");
				while (getchar() != '\n');
				printf("A scorching rock that is. A rock that would not be pleasant to be struck in the face with.\n");
				while (getchar() != '\n');
				printf("So you knew what you had to do, give this angry chef a taste of his own pie!!\n");
				while (getchar() != '\n');
				printf("With godspeed, you lunge into action.\n");

				int AngryChefHealth = 50;
				int AngryChefID = 1;
				char AngryChefName[MAX_NAME_SIZE] = "Angry Chef";
				CHARACTER* AngryChef = CreateCharacter(AngryChefHealth, AngryChefID, AngryChefName);

				double typingSpeed = 0.0;
				char* setenceTyped = "N/A";
				double typingScore = 0.0;
				bool loopAgain = true;	

				while (loopAgain)
				{
					yellow();
					getImage(AngryChef);
					printf("\n");
					printf("----------------------------------------------\n");
					printf("|    > Health: 100                           |\n");
					printf("|                                            |\n");
					printf("|    > Chef Damage Required: 50              |\n");
					printf("|                                            |\n");
					printf("|    > The angry chef wields his burnt pie   |\n");
					printf("|    > and is ready to attack                |\n");
					printf("|                                            |\n");
					printf("|    > Enter:                                |\n");
					printf("|      As the chef thrusts the pie forwards, |\n");
					printf("|      you lunge forward, grasp the door,    |\n");
					printf("|      and slam it closed so the pie can     |\n");
					printf("|      bounce off the door shield!           |\n");
					printf("----------------------------------------------\n");
					while (getchar() != '\n');
					double typingSpeed = 0.0;
					char* setenceTyped = GetInput(&typingSpeed);
					double typingScore = CheckSentence(getSentence(AngryChef), //sentence to type
						136, //sentence length
						setenceTyped, //users sentence entry
						typingSpeed); //users typing speed
					decreaseMonsterHealth(calculateDamage(Player, typingScore), AngryChef);
					if (getHealth(Player) <= 0)
					{
						loopAgain = false;
					}
					else if (getMonsterHealth(AngryChef) <= 0)
					{
						loopAgain = false;
					}
				}

				//check to see the results of the battle
				if (getHealth(Player) <= 0) //the monster killed you
				{
					red();
					printf("_________________________________________\n");
					printf("[YOU DIED(the angry chef was too strong)]\n");
					reset();
					return(0);
				}
				else //you defeated the monster!
				{
					green();
					printf("______________________________________________\n");
					printf("[CONGRATULATIONS(you defeated the angry chef)]\n");
					reset();
				}

				reset();
				printf("You hear the chef losing it over his now ruined door, and you realize that this chef will not be of any help for your escape, so you sprint away from his shed as quickly as you can.\n");
				while (getchar() != '\n');
				while (getchar() != '\n');
				printf("After running for what felt like an eternity, you pause to catch your breath, realizing that you are now starving.\n");
				while (getchar() != '\n');
				printf("You knew one thing for sure; you were not going to ask the angry chef for any food!\n");
				while (getchar() != '\n');
				printf("However, you do notice a yellowish fruit-looking thing on the ground.\n");
				while (getchar() != '\n');
				printf("You decide to pick it up and notice that it looks a lot like a potato.\n");
				while (getchar() != '\n');
				printf("You also notice it looks rather green and you think...\n");
				while (getchar() != '\n');
				cyan();
				printf("______________________________________________________________________________________________________\n");
				printf("I should...\n");

				//Determine the next steps for the game!
				canContinue = true;
				while (canContinue == true)
				{
					printf("1. Eat this, I'm famished.\n");
					printf("2. Not eat this, I don't know where its been.\n");
					int userInput = CollectNumericSelection(1, 2);
					switch (userInput)
					{
					//Eat choice
					case 1:
						printf("You decide to put an end to your hunger and just eat it.\n");
						while (getchar() != '\n');
						while (getchar() != '\n');
						srand(time(0));

						//randomly generate poisonous potato damage to insert
						int potatoDamage = ((rand() % (100 - 0 + 1)) + 0);
						
						ITEM* poisonousPotato = createItem("bFood", "Poisonous Potato", potatoDamage, Player);
						printf("\033[0;37m");

						printf("After wolfing down this potato, you realize it did not taste too good.\n");
						while (getchar() != '\n');
						printf("Then it hits you that you don't start feeling good either.\n");
						while (getchar() != '\n');
						printf("The whole world starts to spin, and you quickly start feeling awful.\n");
						while (getchar() != '\n');
						printf("You think OHNO this must have been one of the poisonous potatoes I've heard about!!\n");
						while (getchar() != '\n');
						printf("You knew this couldn't be good.\n");
						while (getchar() != '\n');

						//if the poisonous potato killed the player
						if (getHealth(Player) == 0) //health decrease causes health to drop below zero
						{
							red();
							printf("________________________________________________\n");
							printf("[YOU DIED(the poisonous potato wasn't so savoury)]\n");
							reset();
							return(0);
						}

						//the poisonous potato did not kill the player
						printf("After about an hourand a half of consistent spinningand seeing colours, the world starts to level out.\n");
						while (getchar() != '\n');
						printf("You thought great the effects must have passed now.\n");
						while (getchar() != '\n');
						printf("You are also thankful that this potato did not kill you, but you can tell you've definitely been injured somehow.\n");
						while (getchar() != '\n');
						printf("You note that staying away from those potatoes is likely the best idea.\n");
						canContinue = false;
						break;
					//Don't eat choice
					case 2:
						printf("You decide no, that doesn't look too good ill pass on eating that, and I could lose a little weight anyway.\n");
						while (getchar() != '\n');
						while (getchar() != '\n');
						reset();
						printf("You think that it might be poisonous, so you decide to leave it and continue your quest.\n");

						canContinue = false;
						break;
						//None of the menu options were selected
					default:
						printf("Invalid selction entered, please enter a number listen in the menu\n");
						break;
					}
				}

			//Choice 3
			case 3:
				while (getchar() != '\n');
				printf("You continue forward into the redwood forest, where it keeps getting darker and darker.\n");
				while (getchar() != '\n');
				printf("Eventually, you notice something that is glimmering on the ground of the forest.\n");
				while (getchar() != '\n');
				printf("You quickly move toward it, and you almost forget that you must be aware of what is on the forest floor.\n");
				while (getchar() != '\n');
				printf("So you trip over a thick root and land face-first on this glimmering object.\n");
				while (getchar() != '\n');
				printf("Thanks to your fall, you have now noticed this object is strong and made of metal.\n");
				while (getchar() != '\n');
				printf("You think to yourself, what could this be? \n");
				while (getchar() != '\n');
				cyan();
				printf("______________________________________________________________________________________________________\n");
				printf("Should you...\n");

				//Determine the next steps for the game!
				canContinue = true;
				while (canContinue == true)
				{
					printf("1. Search for a stick to dig this thing out of the ground?\n");
					printf("2. Ignore it and keep going?\n");
					int userInput = CollectNumericSelection(1, 2);
					switch (userInput)
					{
					//Search choice
					case 1:
						printf("You feel you have to know what this object is, so you wonder the forset for a few minutes searching for a big stick.\n");
						while (getchar() != '\n');
						while (getchar() != '\n');
						reset();
						printf("After searching for a few minutes, you find a sizeable thick stick that should do the job perfectly!\n");
						while (getchar() != '\n');
						printf("So you wander back to the object and pry it out of the ground with this stick.\n");
						while (getchar() != '\n');
						printf("Eventually, the object gives way, and the stick flies out of your grip, but all that matters is that you had uncovered this object.\n");
						while (getchar() != '\n');
						printf("You pick it up and analyze it to find that it looks like a chest plate.\n");
						while (getchar() != '\n');
						printf("You wonder how this ended up here and who it belonged to.\n");
						while (getchar() != '\n');
						printf("You think to yourself; maybe there is some sort of civilization around here.\n");
						while (getchar() != '\n');
						printf("Anyway, this didn't matter if you couldn't find them, so you put on the chest plate even though it was covered in mud.\n");
						while (getchar() != '\n');
						printf("You think eh its extra protection.\n");
						ITEM* chestplate = createItem("defence", "chestplate", 50, Player);
						canContinue = false;
						break;
					//Move on choice
					case 2:
						printf("You decide that digging it the rest of the way out of the ground would be far too complicated, so you continue leaving this object behind.\n");
						while (getchar() != '\n');
						reset();
						canContinue = false;
						break;
						//None of the menu options were selected
					default:
						printf("Invalid selction entered, please enter a number listen in the menu\n");
						break;
					}
				}

				while (getchar() != '\n');
				printf("You keep walking deeper and deeper into the forest with still no sign of civilization.\n");
				while (getchar() != '\n');
				printf("Eventually, you come across a giant redwood tree that must have fallen down from a recent storm.\n");
				while (getchar() != '\n');
				printf("The tree is dead and is barely resting on the branch of another redwood tree.\n");
				while (getchar() != '\n');
				printf("The gentle breeze causes the trees to sway and causes the fallen tree to rock back and forth on this branch.\n");
				while (getchar() != '\n');
				printf("You can hear the tree's wood groaning under the weight of the fallen redwood.\n");
				while (getchar() != '\n');
				cyan();
				printf("______________________________________________________________________________________________________\n");
				printf("You think, should I...\n");

				//Determine the next steps for the game!
				canContinue = true;
				while (canContinue == true)
				{
					printf("1. Walk underneath the tree?\n");
					printf("2. Go the long way around, just to be safe?\n");
					int userInput = CollectNumericSelection(1, 2);
					switch (userInput)
					{
					//Walk underneath choice
					case 1:
						printf("You decide why walk all the way around this tree; it's staying now, so I'll take my chances.\n");
						while (getchar() != '\n');
						while (getchar() != '\n');
						reset();
						printf("You step forward and duck under this massive tree.\n");
						while (getchar() != '\n');
						printf("Just as you are shuffling underneath the tree, you hear a loud CRACK!\n");
						while (getchar() != '\n');
						printf("You think for a split second, UHOH, the branch, of course, had to break while I'm under this massive tree..just my luck.\n");
						while (getchar() != '\n');
						printf("Then bam, all went dark...\n");
						while (getchar() != '\n');
						red();
						printf("_______________________________________________________________\n");
						printf("[YOU DIED(the fallen dead redwood tree squashed you like a bug)]\n");
						reset();
						return(0);
						canContinue = false;
						break;
					//Go around choice
					case 2:
						printf("You think that my luck has not been excellent lately, so I will not take my chances on this.You spend the extra 15 minutes working your way around this tree.\n");
						while (getchar() != '\n');
						while (getchar() != '\n');
						reset();
						printf("Then suddenly, just as you pass the tree, you hear a loud CRACK, and the giant redwood tree crashes to the ground!\n");
						while (getchar() != '\n');
						printf("You sigh in relief as that would have been you under the falling tree if you didn't make the intelligent choice of going around.\n");
						while (getchar() != '\n');
						printf("As your heart rate calms for the sudden scare of the falling tree, you see an opening in the trees.\n");
						while (getchar() != '\n');
						printf("It's the path!!\n");
						while (getchar() != '\n');
						printf("You quickly run to the path as you are tired of stepping through the maze of plants / roots / vines on the forest floor.\n");							
						userInput = 2;
						canContinue = false;
						break;
						//None of the menu options were selected
					default:
						printf("Invalid selction entered, please enter a number listen in the menu\n");
						break;
					}
				}

				break;
			//Choice 4
			case 4:
				while (getchar() != '\n');
				printf("You think that waiting on the beach for help has to be the best option.\n");
				while (getchar() != '\n');
				printf("So you lay on the beach, scouting the waters and sky for help.\n");
				while (getchar() != '\n');
				printf("Unfortunately, after what feels like an eternity of laying in the sun, not a boat went by or a plane flew by.\n");
				while (getchar() != '\n');
				printf("The good news is that you were now burnt to crisp thanks to that intense sun beaming down on you.\n");
				while (getchar() != '\n');
				printf("Now, feeling discouraged and sore, you think that maybe this was not such a good idea.\n");
				while (getchar() != '\n');
				printf("You feel hopeless and that no one will ever come to find you.\n");
				while (getchar() != '\n');
				printf("Then suddenly, the ground beside you starts to rustle.\n");
				while (getchar() != '\n');
				printf("You jump to your feet in fear of what is happening.\n");
				while (getchar() != '\n');
				printf("The sand all around you starts to rustle.\n");
				while (getchar() != '\n');
				printf("Then a massive cast of craps emerges from the sand!\n");
				while (getchar() != '\n');
				printf("You are surrounded!\n");
				while (getchar() != '\n');
				printf("One thing you notice about these crabs is they don't seem happy to see you.\n");
				while (getchar() != '\n');
				printf("They all turn towards you and open their claws, ready for battle!\n");
				while (getchar() != '\n');
				printf("I guess this means you have to be to now!\n");
				while (getchar() != '\n');
				printf("So you quickly pick up the board you drifted to the shore on and prepare to battle!\n");
				
				int CrabbyCrabshealth = 25;
				int CrabbyCrabsID = 5;
				char CrabbyCrabsName[MAX_NAME_SIZE] = "Crabby Crabs";
				CHARACTER* CrabbyCrabs = CreateCharacter(CrabbyCrabshealth, CrabbyCrabsID, CrabbyCrabsName);

				loopAgain = true;

				while (loopAgain)
				{
					yellow();
					getImage(CrabbyCrabs);
					printf("\n");
					printf("----------------------------------------------\n");
					printf("|    >Health: 100                            |\n");
					printf("|                                            |\n");
					printf("|    >Crabby crabs Health: 25                |\n");
					printf("|                                            |\n");
					printf("|    >The crabby crabs start circling and    |\n");
					printf("|    >are snaping their claws to attack      |\n");
					printf("|                                            |\n");
					printf("|    >Enter:                                 |\n");
					printf("|      The crabby crabs curiously circled,   |\n");
					printf("|      moving closer and closer after each   |\n");
					printf("|      circle. They lunge, snapping their    |\n");
					printf("|      crushing claws!                       |\n");
					printf("----------------------------------------------\n");

					while (getchar() != '\n');
					typingSpeed = 0.0;
					setenceTyped = GetInput(&typingSpeed);
					typingScore = CheckSentence(getSentence(CrabbyCrabs), //sentence to type
						124, //sentence length
						setenceTyped, //users sentence entry
						typingSpeed); //users typing speed
					reset();
					decreaseMonsterHealth(calculateDamage(Player, typingScore), CrabbyCrabs);
					if (getHealth(Player) <= 0)
					{
						loopAgain = false;
					}
					else if (getMonsterHealth(CrabbyCrabs) <= 0)
					{
						loopAgain = false;
					}
				}

				//check to see the results of the battle
				if (getHealth(Player) <= 0) //the monster killed you
				{
					red();
					printf("_________________________________________\n");
					printf("[YOU DIED(the crabby crabs were too strong)]\n");
					return(0);
					reset();
				}
				else //you defeated the monster!
				{
					green();
					printf("______________________________________________\n");
					printf("[CONGRATULATIONS(you defeated the crabby crabs)]\n");
					reset();
				}

				printf("You spin in circles, swinging the board at the crabs around you.\n");
				while (getchar() != '\n');
				while (getchar() != '\n');
				printf("After 15 spins, you seem to have flung all the craps out of your way, and you've decided that you have had enough with this beach!\n");
				while (getchar() != '\n');
				printf("So, you sprint into the redwood forest, where you stop to catch your breath.\n");
				while (getchar() != '\n');
				printf("You look down to notice that a path is just ahead.\n");

				userInput = 2;
				break;
			//None of the options were selected
			default:
				printf("Invalid selction entered, please enter a number listen in the menu\n");
				break;
			}
		}

		printf("After wandering around now aimlessly through the forest, you approach another area where you'll have to make a choice.\n");
		while (getchar() != '\n');
		printf("You look around and think, \n");
		while (getchar() != '\n');
		cyan();
		printf("______________________________________________________________________________________________________\n");
		printf("Should I...\n");

		//Determine the next steps for the game!
		canContinue = true;
		while (canContinue == true)
		{
			printf("1. Walk over to the large cliff I have just spotted?\n");
			printf("2. Continue dodging between the trees?\n");
			int userInput = CollectNumericSelection(1, 2);
			switch (userInput)
			{
			//Walk over to clif choice
			case 1:
				printf("You decide to wander over the cliff to determine what you can see over the edge.\n");
				while (getchar() != '\n');
				while (getchar() != '\n');
				reset();
				printf("As you approach the cliff, you notice that the terrain close to the edge looks a little loose, but you don't think anything of it.\n");
				while (getchar() != '\n');
				printf("You get close to the edge and peer over to see absolutely nothing.\n");
				while (getchar() != '\n');
				printf("Just more of the redwood trees that you have already seen far too many of today.\n");
				while (getchar() != '\n');
				printf("So, discouraged, you turn to go back to wandering amongst the trees.Then out of nowhere, the ground beneath you shiftsand starts sliding towards the cliff's edge!\n");
				while (getchar() != '\n');
				printf("You think there is absolutely no way that this is happening and that you have already been through too much!\n");
				while (getchar() != '\n');
				printf("You attempt to lunge forward and grab onto a nearby root, but you miss the rootand slide over the cliff's edge.\n");
				while (getchar() != '\n');
				red();
				printf("_________________________________________________________\n");
				printf("[YOU DIED(you got a little too comfortable with heights)]\n");
				reset();
				return(0);
				canContinue = false;
				break;
			//Dont go to clif choice
			case 2:
				printf("You think, why risk looking over the cliff and just continue to walk through the trees.\n");
				while (getchar() != '\n');
				while (getchar() != '\n');
				printf("\033[0;37m");
				printf("After hours of walking, you feel as though you are getting nowhere.\n");
				while (getchar() != '\n');
				printf("It is getting cold and dark with the sun setting, so your time is running out.\n");
				while (getchar() != '\n');
				printf("But through the trees, you notice something...\n");
				while (getchar() != '\n');
				printf("It looks like it is glowing.\n");
				while (getchar() != '\n');
				printf("So you think that what do you have to lose. You walk over to this light and\n");
				while (getchar() != '\n');
				printf("as you get closer, you notice a treacherous reak.\n");
				while (getchar() != '\n');
				printf("This stink filled the air.\n");
				while (getchar() != '\n');
				printf("Fighting through the air that is thick as soup, you approach this light source and start to get a bad feeling in your stomach.\n");
				while (getchar() != '\n');
				printf("You get close to the light source to notice that it is coming from a massive creature!\n");
				while (getchar() != '\n');
				printf("The awful STINK also appears to be billowing off of this creature!\n");
				while (getchar() != '\n');
				printf("You quickly go to turn away when the creature turns around and notices you!\n");
				while (getchar() != '\n');
				printf("Your thinking, oh great, now I have to deal with this beast!\n");
				while (getchar() != '\n');
				printf("Then without skipping a beat, the disgusting gooey glob of stink starts crashing forward at you!\n");
				while (getchar() != '\n');
				printf("So you prepare to fight!!\n");

				int GooeyGlobhealth = 100;
				int GooeyGlobID = 6;
				char GooeyGlobName[MAX_NAME_SIZE] = "Gooey Glob";
				CHARACTER* gooeyGlob = CreateCharacter(GooeyGlobhealth, GooeyGlobID, GooeyGlobName);
				bool loopAgain = true;

				while (loopAgain)
				{
					yellow();
					getImage(gooeyGlob);
					printf("\n");
					printf("----------------------------------------------\n");
					printf("|    > Health: 100                           |\n");
					printf("|                                            |\n");
					printf("|    > Gooey Glob Health: 100                |\n");
					printf("|                                            |\n");
					printf("|    >The stinky glob plows forward with     |\n");
					printf("|    >a brutal cloud of stink                |\n");
					printf("|                                            |\n");
					printf("|    >Enter:                                 |\n");
					printf("|      Send your disgusting drowning goopy   |\n");
					printf("|      stink away! Swat the thick slime      |\n");
					printf("|      away to avoid potential suffocation!  |\n");
					printf("|      Push through the cloud, eyes burning, |\n");
					printf("|      nose plugged, you can do this!        |\n");
					printf("----------------------------------------------\n");

					while (getchar() != '\n');
					double typingSpeed = 0.0;
					char* setenceTyped = GetInput(&typingSpeed);
					double typingScore = CheckSentence(getSentence(gooeyGlob), //sentence to type
						176, //sentence length
						setenceTyped, //users sentence entry
						typingSpeed); //users typing speed
					reset();
					decreaseMonsterHealth(calculateDamage(Player, typingScore), gooeyGlob);
					if (getHealth(Player) <= 0)
					{
						loopAgain = false;
					}
					else if (getMonsterHealth(gooeyGlob) <= 0)
					{
						loopAgain = false;
					}
				}

				//check to see the results of the battle
				if (getHealth(Player) <= 0) //the monster killed you
				{
					red();
					printf("_________________________________________\n");
					printf("[YOU DIED(the gooey glob was too strong)]\n");
					reset();
					return(0);
				}
				else //you defeated the monster!
				{
					while (getchar() != '\n');
					printf("You have done it!The gooey glob spills over the forest floor, and the glow from the chemical reaction of the stink dims to nothing.\n");
					while (getchar() != '\n');
					printf("You have done it, and you step forward through slime.\n");
					while (getchar() != '\n');
					printf("As the green stink cloud starts to clear, you begin to see a swamp up ahead.\n");
					while (getchar() != '\n');
					printf("With the excitement for a change of scenery, you run into the swamp where a new journey can begin...\n");
					while (getchar() != '\n');
					green();
					printf("______________________________________________________________________\n");
					printf("[CONGRATULATIONS YOU HAVE SURVIVED LEVEL 1 - Into The RedWood Forest!!!]\n");
					reset();
				}

				canContinue = false;
				break;
				//None of the menu options were selected
			default:
				printf("Invalid selction entered, please enter a number listen in the menu\n");
				break;
			}
		}
		printf("\n");
		cyan();
		//Determine the next steps for the game!
		canContinue = true;
		while (canContinue == true)
		{
			printf("Would you like to save and exit or continue on to level 2?\n");
			printf("1. Exit\n");
			printf("2. Continue to level 2\n");
			int userInput = CollectNumericSelection(1,2);
			switch (userInput)
			{
			//Save and exit
			case 1:
				printf("Closing game...\n");
				canContinue = false;
				break;
			//Continue to next level
  			case 2:
				printf("Loading level 2...\n");
				canContinue = false;
				storyLevelToPlay = LEVEL_TWO;
				break;
				//None of the menu options were selected
			default:
				printf("Invalid selction entered, please enter a number listen in the menu\n");
				break;
			}
		}
		reset();
	}
	
	//Play level 2---------------------------------------------------------------------------------------------------------------------------------------------------------------------
	else if (storyLevelToPlay == LEVEL_TWO)
	{
	
		green();
		printf("________________________________________________________________________________________________________\n");
		printf("|                                                                                                      |\n");
		printf("|                                  ~.                                    .^                            |\n");
		printf("|                                  ##*                                  ,(*     ,(                     |\n");
		printf("|           ,*(                    ,#(#                 .,               ##    (*                      |\n");
		printf("|             %%                    %#(%((  .             ,,     ,       ##    (/                          |\n");
		printf("|        .#((   %%,.                 .%#(%%%%%%%%%%%%((.((     ,,,        (     ##. ,(                          |\n");
		printf("|         #    %%%%#     /.           #%###%&%%%%%#(##. ,,,        /*     ((((#                                  |\n");
		printf("|         #     /(%%%%###/ %%%%,         ,%%###(((####%%%%%%%%#( ,,,      (/     *(#(#                          |\n");
		printf("|         *      #       %%#. ,     /%#(##(%########(((%%%%#/,,       #    #(##                                      |\n");
		printf("|                #         .%%#/    *(%%%%###(#####(#%###(((((.      #* /(((#%%#      #,                       |\n");
		printf("|                #           (   .,.(%%%%#%%#(##(%%#(((%%########.     ###((#%%%%%%      ,%%&/                  |\n");
		printf("|                (           (..*@*%%%%%%%%%%%%##%%%%#%%###(#%%#####(##,   .#####%%(      %%&%%                     |\n");
		printf("|                #           .%%, (%%%%%%((((#(###%%%%%%%%%%%%%%%%******##   #((##%%       #&&&#                    |\n");
		printf("|                ,           . .%#(((###############%%##///(#%%## ##(#%%#%%/###/##%%&&%%%%%%(*/((/               |\n");
		printf("|                             (//(***//*########%%######%%%%***//######(#/#%%#%%%%*    &.                    |\n");
		printf("|                       &&/  /%%((&&#&&((#%%%%###%%##%%%%#%%#***/(#%%###(#%%%%#%%%%%%,                              |\n");
		printf("|                  &&%%&    .#(*#%%%%#%%##*##%%%%#%%%%#%%%%%%##%%/*/##%%%%#####%%%%%%%%%%,                                |\n");
		printf("|                           %%#***#%%#&%%//*%%#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%######%%%%%(                                 |\n");
		printf("|                           %%%%************/%%#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#((#%%#((#                              |\n");
		printf("|                   ..    (%%##(((#(((((######%%%%#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#(##(#%%%% (   %%                          |\n");
		printf("|             ,,,,%%..,,,,*%%%%**##%%%%#(//*****###%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#(##%%%%,,%%,,#*                          |\n");
		printf("|                  /%%,,%% %%%%%%**###########%(###%%%%%%%%%%%%%%%%%%&&%%%%%%%%%%%%%%#(#%%%%%%  *,.*./                          |\n");
		printf("|             .,,,,. / (*,%%%%**###########%%#*%%%%%%%%%%%%%%%%%%%%%%%%&%%%%&&&&%%%%(%%%%%%%%(,,,*,%%,,,,                      |\n");
		printf("|                   %% %%,(*./**(##(((/////%%%%*(*%%##(((###%%%%%%%%%%%%%%%%%%%%#%%%%%%%%%%%%/*,%%%%,...*                     |\n");
		printf("|            ,,,,,,#,#,.*.**/#*########%%%%****(//##((##/((%%#(#%%%%#%%%%%%%%%%%%%%%%%%##(# ,                        |\n");
		printf("|              (((/,  %%#*/%%#**/((########%%%%*////(&((((#%%(/(#(#%%%%##%%%%%%%%%%%%%%%%%%%%###(#                      |\n");
		printf("|            ####%##(( **(##***%%##%%##((//(#**/**#((#/%%((((##%%%%%%%%##((###%%%%%%%%%%%%%%##(#####*                   |\n");
		printf("|           (##%%  ,%%%%%%####%%#***%%#######&//((#/**#((#((#####(#(%%#########(#(/%%%%%%%%%%##(((#####/           |\n");
		printf("|      ,*/(##////,//*%######(###(##(##%&&/////**((/((/(#(#####/////#%%%%%%%%###(###########.                       |\n");
		printf("|        .,/####((((%%%%%%%%####(#((#######&&&&&&#(#%%%%####%%%%%%%%%%%%%%%%%%%%#%%%%%%%%%%%%%%%%%%########(########((,         |\n");
		printf("|     ((####(((####%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%##%%%%%%%&%%%%%%%%%%%%%%%%%%%%%%%%%%%%%&%%%%%%%%%%%%%%%%%%%%%%#%%#%%%%###############/             |\n");
		printf("|     .################################%%%%%%%%%%%%%%%%%%%%%%%%%%%%####((((((###((####//######((#%%%%%%%%%%%%%%####(        |\n");
		printf("|                      /#######(####/########################(##########((##############/              |\n");
		printf("|                                    /##############%%#(*,,*(##((########(                              |\n");
		printf("|                                                                                                      |\n");
		printf("|                                  Level 2: Lost In The Swamp                                          |\n");
		printf("|                                                                                                      |\n");
		printf("|                           Hint: Consider your options carefully!                                     |\n");
		printf("|                                                                                                      |\n");
		printf("|______________________________________________________________________________________________________|\n");
		reset();

		printf("\nYou managed to escape that deathly forest in one piece but your not in the clear yet.\n");
		while (getchar() != '\n');
		printf("The beautiful forest has turned into a sickly swamp, dead trees and murky brown water surronds you.\n");
		while (getchar() != '\n');
		printf("Suddendly you feel a sharp pain in your stomach!\n");
		while (getchar() != '\n');
		printf("You fall to your knees clucthing your stomach in pain.\n");
		while (getchar() != '\n');
		printf("You haven't eaten in what feels like days, you need to eat someting fast.\n");
		while (getchar() != '\n');
		printf("But what is there to eat in this fruitless swamp?\n");
		while (getchar() != '\n');
		printf("You slowly get back on your feet looking around desperatly for something tasty.\n");
		while (getchar() != '\n');
		printf("______________________________________________________________________________________________________\n");
		printf("What will you do now?:\n");
		printf("   1. Climb a tree for a better look around?\n");
		printf("   2. Try and catch some frogs to eat?\n");
		printf("   3. Walk closer to a mysterious light in the distance?\n");
		printf("   4. Make a fire and look for food in the morning?\n");
		int userInput = CollectNumericSelection(1, 4);

		//Determine the next steps for the game!
		canContinue = true;
		while (canContinue == true)
		{
			switch (userInput)
			{
				//Choice 1: climb a tree
			case 1:
				printf("You start climbing up a tall tree, the branchs seem to get weaker and weaker the higher you go.\n");
				while (getchar() != '\n');
				printf("climbing the tree proves to be harder that expected.\n");
				while (getchar() != '\n');
				printf("Out of breath you take a break from climbing and rest on a tree branch.\n");
				while (getchar() != '\n');
				printf("You look up and spot a crow staring at you from above.\n");
				while (getchar() != '\n');
				cyan();
				printf("______________________________________________________________________________________________________\n");
				printf("Should you...\n");

				//Determine the next steps for the game!
				canContinue = true;
				while (canContinue == true)
				{
					printf("1. Climb higher and snacth the crow?\n");
					printf("2. Climb back down the tree?\n");
					printf("3. Throw your shoe at it?\n");
					reset();
					int userInput = CollectNumericSelection(1, 3);
					switch (userInput)
					{
						//Snacth the crow
					case 1:

						printf("A crow what be an execellent source of meat!\n");
						while (getchar() != '\n');
						printf("You climb slowly up the tree not wanting to snap a branch.\n");
						while (getchar() != '\n');
						printf("The crow is inches away you prepare to grab when the crow lets out a ear piercing swack!\n");
						while (getchar() != '\n');
						printf("This startles you so much that you loose your balance and fall into the swampy water below.\n");
						while (getchar() != '\n');
						printf("You emerge from the water, gasping for air.\n");
						while (getchar() != '\n');
						printf("You make it back to shore in a hurry soaked and miserable.\n");
						while (getchar() != '\n');
						printf("You'll need to get dry if you want to survive the night.\n");
						while (getchar() != '\n');
						canContinue = false;
						break;
						//Climb down
					case 2:

						printf("You take the safer option and begin making your way back down.\n");
						while (getchar() != '\n');
						printf("As you lower your foot down to the branch below you hear a loud CRACK!\n");
						while (getchar() != '\n');
						red();
						printf("___________________________________________\n");
						printf("[YOU DIED(you fell out of a tree head first)\n");
						reset();
						//SAVE GAME
						return 0;
						canContinue = false;
						break;

						// Throw shoe
					case 3:
						// SET UP ARROW OBJECT HERE WITH - +15 DAMAGE
						printf("This is a foolish idea you think to yourself, but desperate times call for desperate measures.\n");
						while (getchar() != '\n');
						printf("You carefully remove your shoe and begin lining up your shot...\n");
						while (getchar() != '\n');
						printf("With a mighty toss you throw your shoe up at the crows head.\n");
						while (getchar() != '\n');
						printf("You hear a thud, you're in disbelief that you actually managed to hit it!\n");
						while (getchar() != '\n');
						printf("Watching in excitement you wait for the crow to fall down the tree.\n");
						while (getchar() != '\n');
						printf("But strangley you see the crow flying calmly out of the tree.\n");
						while (getchar() != '\n');
						printf("Confused, you wonder if your shoe didn't hit the crow, what was that thud?\n");
						while (getchar() != '\n');
						printf("while you're trying to piece it together an arrow drops down beside you, oh so thats what I hit you say to yourself\n");
						while (getchar() != '\n');
						ITEM* board = createItem("damage", "arrow", 15, Player);
						printf("You take the arrow maybe it could be useful in hunting for food.\n");
						while (getchar() != '\n');
						//None of the menu options were selected
					default:
						printf("Invalid selction entered, please enter a number listen in the menu\n");
						break;
					}
				}


				canContinue = true;
				userInput = 4;
				break;
				//Choice 2: catch frogs
			case 2:
				while (getchar() != '\n');
				printf("You walk down to the edge of the lilly pad filled water, looking around for any frogs.\n");
				while (getchar() != '\n');
				printf("Out of the corner of your eye you spot a big juicy toad sitting on a lilly pad.\n");
				while (getchar() != '\n');
				printf("just my luck that's it's in the middle of the water you mutter to yourself.\n");
				while (getchar() != '\n');
				printf("You roll up you're pant legs and step into the water, \n");
				while (getchar() != '\n');
				printf("with each step you feel the gooey surface sucking you down into it.\n");
				while (getchar() != '\n');
				printf("You approach the the toad from behind and yank him off the lilly pad!\n");
				while (getchar() != '\n');
				
				cyan();
				printf("______________________________________________________________________________________________________\n");
				printf("What will you do with the toad?...\n");

				//Determine the next steps for the game!
				canContinue = true;
				while (canContinue == true)
				{
					printf("1. Cook it and eat it right away\n");
					printf("2. Use it as bait for a trap\n");
					reset();
					int userInput = CollectNumericSelection(1, 2);
					switch (userInput)
					{
						//Eat immedately
					case 1:
						printf("You decide that you can't wait any longer you need to eat now.\n");
						while (getchar() != '\n');
						printf("While you make your way back to land toad in hand, you feel the goo beneath you begin to pull you down more...\n");
						while (getchar() != '\n');
						printf("Almost as if it's tightenning its grip.\n");
						while (getchar() != '\n');
						printf("In a fit of anger you start thrashing around trying to break free from it's hold.\n");
						while (getchar() != '\n');
						printf("The goo beneath begins to shake and groan, a large object bursts from underneath you.\n");
						while (getchar() != '\n');

						int SlimeHealth = 80;
						int SlimeID = 7;
						char SlimeName[MAX_NAME_SIZE] = "Slime";
						CHARACTER* Slime = CreateCharacter(SlimeHealth, SlimeID, SlimeName);

						double typingSpeed = 0.0;
						char* setenceTyped = "N/A";
						double typingScore = 0.0;
						bool loopAgain = true;

						while (loopAgain)
						{
							yellow();
							if (!getImage(Slime))
							{
								printf("%s couldn't be displayed\n", Slime->name);
							}
							printf("----------------------------------------------\n");
							printf("|    > Health: %d                            |\n",Player->Health);
							printf("|                                            |\n");
							printf("|    > Slime Damage Required: %d             |\n",Slime->health);
							printf("|                                            |\n");
							printf("|    > You look in front of you, shocked to  |\n");
							printf("|    > see a grotesque pile of slime!        |\n");
							printf("|                                            |\n");
							printf("|    > Enter:                                |\n");
							printf("|    > Slimes are made of Gooey goo,         |\n");
							printf("|    > make sure not to let them touch       |\n");
							printf("|    > your favourite shoe.                  |\n");
							printf("|                                            |\n");
							printf("----------------------------------------------\n");
							while (getchar() != '\n');
							double typingSpeed = 0.0;
							char* setenceTyped = GetInput(&typingSpeed);
							double typingScore = CheckSentence(getSentence(Slime), //sentence to type
								83, //sentence length
								setenceTyped, //users sentence entry
								typingSpeed); //users typing speed
							decreaseMonsterHealth(calculateDamage(Player, typingScore), Slime);
							if (getHealth(Player) <= 0)
							{
								loopAgain = false;
							}
							else if (getMonsterHealth(Slime) <= 0)
							{
								loopAgain = false;
							}
						}

						//check to see the results of the battle
						if (getHealth(Player) <= 0) //the monster killed you
						{
							red();
							printf("__________________________________\n");
							printf("[YOU DIED(the Slime consumed you)]\n");
							return(0);
							reset();
						}
						else //you defeated the monster!
						{
							green();
							printf("_________________________________________\n");
							printf("[CONGRATULATIONS(you defeated the slime)]\n");
							reset();
						}
						
					


						printf("You break free from it's slimey hold and dash towards the shore.\n");
						while (getchar() != '\n');
						printf("You look back to see the goo is getting bigger and bigger. \n");
						while (getchar() != '\n');
						printf("To make things even worse you realize your toad is no longer in your hand!\n");
						while (getchar() != '\n');
						printf("You won't make it to shore in time so you deciede to climb a nearby tree to escape.\n");
						while (getchar() != '\n');

						disposeCharacter(Slime);
						canContinue = false;
						break;
						//Don't eat choice
					case 2:
						printf("You think to yourself that one toad isn't going to do the trick, you're gonna need someting bigger to eat.\n");
						while (getchar() != '\n');
						printf("Noticing all the branches and vines around you get an idea to start working on building a trap.\n");
						while (getchar() != '\n');
						printf("some animal gotta be as hungry as i am you say to yourself.\n");
						while (getchar() != '\n');
						printf("With your trap complete you hide behind some willows and wait for an anmial to take the bait.\n");
						while (getchar() != '\n');
						printf("You sit back and wait, drifting off into a peacefully slumber but are awoken by the sounds of snarling and chewing.\n");
						while (getchar() != '\n');
						printf("You jolt your head up in curisoty, wow! my trap actually worked? you think to yourself.\n");
						while (getchar() != '\n');
						printf("piering through the willows you make out what appears to be a man hunched over devouring your toad.\n");
						while (getchar() != '\n');
						printf("H-Hello..? you manage to stammer out in a scared voice, the man immedatly stops and whips his head around...\n");
						while (getchar() != '\n');
						printf("To reveal 2 sharp horns petruding out the side of his head. This wasn't a man at all, it had a head of a bull.\n");
						while (getchar() != '\n');
						printf("Upon realizing this you attemp to get out of there as quick as possible.\n");
						while (getchar() != '\n');
						printf("But it's too late the beast's beatly little eyes have already spotted you. \n");
						while (getchar() != '\n');
						int MinotaurHealth = 100;
						int MinotaurID = 2;
						char MinotaurName[MAX_NAME_SIZE] = "Minotaur";
						CHARACTER* Minotaur = CreateCharacter(MinotaurHealth, MinotaurID, MinotaurName);

						double typingSpeed = 0.0;
						char* setenceTyped = "N/A";
						double typingScore = 0.0;
						bool loopAgain = true;

						while (loopAgain)
						{
							yellow();
							if (!getImage(Minotaur))
							{
								printf("%s couldn't be displayed\n", Minotaur->name);
							}
							printf("----------------------------------------------\n");
							printf("|    > Health: %d                            |\n",Player->Health);
							printf("|                                            |\n");
							printf("|    > Minotaur Damage Required: %d          |\n",Minotaur->health);
							printf("|                                            |\n");
							printf("|    > It's too late the beast's beaty       |\n");
							printf("|    > little red eyes have spotted you.     |\n");
							printf("|                                            |\n");
							printf("|    > Enter:                                |\n");
							printf("|    > Minotaurs are half man, half bull     |\n");
							printf("|    > abominations who hate the colour red. |\n");
							printf("|                                            |\n");
							printf("|                                            |\n");
							printf("----------------------------------------------\n");
							while (getchar() != '\n');
							double typingSpeed = 0.0;
							char* setenceTyped = GetInput(&typingSpeed);
							double typingScore = CheckSentence(getSentence(Minotaur), //sentence to type
								73, //sentence length
								setenceTyped, //users sentence entry
								typingSpeed); //users typing speed
							decreaseMonsterHealth(calculateDamage(Player, typingScore), Minotaur);
							if (getHealth(Player) <= 0)
							{
								loopAgain = false;
							}
							else if (getMonsterHealth(Slime) <= 0)
							{
								loopAgain = false;
							}
						}

						//check to see the results of the battle
						if (getHealth(Player) <= 0) //the monster killed you
						{
							red();
							printf("__________________________________\n");
							printf("[YOU DIED(the Minotaur overpowered you)]\n");
							return(0);
							reset();
						}
						else //you defeated the monster!
						{
							green();
							printf("_________________________________________\n");
							printf("[CONGRATULATIONS(you defeated the Minotaur)]\n");
							reset();
						}
						
						//INSERT SOME SORT OF LOOP TO KEEP BACK IF MONSTER NOT DEFEATED!!!!!!!!!!!!!!!!!!!!!!!
						printf("You overpowered the minotaur and stopped it from eating you, it might have the body of a man but not the brain.\n");
						while (getchar() != '\n');
						printf("Horrified of the creature you just encountered you decide to climb a tree to avoid any more minotaurs roaming around.\n");
						while (getchar() != '\n');
						disposeCharacter(Minotaur);
						canContinue = false;
						break;
						//None of the menu options were selected
					default:
						printf("Invalid selction entered, please enter a number listen in the menu\n");
						break;
					}
				}
				canContinue = true;
				userInput = 1;
				break;
				//Choice 3
			case 3:
				while (getchar() != '\n');
				printf("You start persuing this newly discovered light in the distance.\n");
				while (getchar() != '\n');
				printf("It appears to be moving almost as if someone is swinging it back and forth.\n");
				while (getchar() != '\n');
				printf("You carefully make your way through the thick marsh until you're close enough to see.\n");
				while (getchar() != '\n');
				printf("You can see a figure holding a torch. You squint your eyes hoping to get a better look at this person.\n");
				while (getchar() != '\n');
				printf("The figure is an old deshevled man wearing a faded blue cloak. \n");
				while (getchar() != '\n');
				printf("He looks like hes performing some kind of ritual. \n");
				while (getchar() != '\n');
				printf("This guy must be nuts i better stay away from him you think to yourself.\n");
				while (getchar() != '\n');
				printf("As you are turning back you spot a slaughtered pig near the old man.\n");
				while (getchar() != '\n');
				printf("It must be some sort of scarafice for his ritual but that pig could keep feed you for a long time.\n");
				while (getchar() != '\n');
				printf("You decide that the swamp won't offer anything better to eat you'll have to get that pig.\n");
				while (getchar() != '\n');
				cyan();
				printf("______________________________________________________________________________________________________\n");
				printf("How will you get the pig?...\n");

				//Determine the next steps for the game!
				canContinue = true;
				while (canContinue == true)
				{
					printf("1. Ask the old man for it?\n");
					printf("2. Steal it when hes not looking\n");
					reset();
					int userInput = CollectNumericSelection(1, 2);
					switch (userInput)
					{
						//ask wizard
					case 1:
						printf("You step out of the shrubs, your heart beating a mile a minute.\n");
						while (getchar() != '\n');
						while (getchar() != '\n');
						printf("You approch the old man who is chanting even louder now.\n");
						while (getchar() != '\n');
						printf("Just as your about to open your mouth the old man stops and turns towards you.\n");
						while (getchar() != '\n');
						printf("His blood shot eyes stare at you as if hes looking into your soul. You both stand \n");
						while (getchar() != '\n');
						printf("there in silence for what feels like. finally you work up the courage to ask him about the pig.\n");
						while (getchar() != '\n');
						printf("he strokes his beard and replies in a raspy voice: THIS MEAT IS CURSED, IT IS NOT MEANT FOR EATING YOU FOOL!.\n");
						while (getchar() != '\n');
						cyan();
						printf("______________________________________________________________________________________________________\n");
						printf("Should you...\n");
						while (canContinue == true)
						{
							printf("1. Trust the old man?\n");
							printf("2. Not trust the old man?\n");
							reset();
							int userInput = CollectNumericSelection(1, 2);
							switch (userInput)
							{
								//trust wizard
							case 1:

								printf("You decide you should stay away from the meat.\n");
								while (getchar() != '\n');
								printf("After all it's probably best not to enrage a derranged old man.\n");
								while (getchar() != '\n');
								printf("You nod slowly and start backing away, before you can leave the old man\n");
								while (getchar() != '\n');
								printf("calls out to you, If you're in search of food, avoid looking in the clearings of the swamp\n");
								while (getchar() != '\n');
								printf("You take the old man's advice and head back into the marsh, still starving but atleast unharmed.\n");
								while (getchar() != '\n');

								//canContinue = false;
								break;
								//dont trust wizard
							case 2:

								printf("You think to yourself you can't trust the word of some senile old man, whos out here in the middle of some swamp.\n");
								while (getchar() != '\n');
								printf("Without a second thought you push past the old man and grab the pig meat from off the ground.\n");
								while (getchar() != '\n');
								printf("You can hear the old man shouting angrely behind you, you don't care this is the first time\n");
								while (getchar() != '\n');
								printf("in a long time you had actual food in your hand. unable to resist you take big bite of the raw pig meat.\n");
								while (getchar() != '\n');

								red();
								printf("_______________________________\n");
								printf("[YOU DIED(you ate cursed meat!)]\n");
								reset();
								//SAVE GAME
								exit(1);
								canContinue = false;
								break;


							default:
								printf("Invalid selction entered, please enter a number listen in the menu\n");
								break;
							}
						}
					
						//Steal from wizard
					case 2:
						printf("Not wanting to alert the old man you around sneak around to the other side of the bushes.\n");
						while (getchar() != '\n');
						printf("With the pig meat in sight you make a mad dash towards it.\n");
						while (getchar() != '\n');
						printf("But unfortunatly you're too slow the old man has locked his eyes on you.\n");
						while (getchar() != '\n');
						//LOAD WIZARD MONSTER IN HERE damage required to defeat 100
						int WizardHealth = 120;
						int WizardID = 3;
						char WizardName[MAX_NAME_SIZE] = "Wizard";
						CHARACTER* Wizard = CreateCharacter(WizardHealth, WizardID, WizardName);

						double typingSpeed = 0.0;
						char* setenceTyped = "N/A";
						double typingScore = 0.0;
						bool loopAgain = true;

						while (loopAgain)
						{
							yellow();
							if (!getImage(Wizard))
							{
								printf("%s couldn't be displayed\n", Wizard->name);
							}
							printf("----------------------------------------------\n");
							printf("|    > Health: %d                            |\n",Player->Health);
							printf("|                                            |\n");
							printf("|    > Wizard Damage Required: %d            |\n",Wizard->health);
							printf("|                                            |\n");
							printf("|    > The old man raises his hands in       |\n");
							printf("|    > the air summoning a thick purple fog  |\n");
							printf("|                                            |\n");
							printf("|    > Enter:                                |\n");
							printf("|    > The mystical world is filled with     |\n");
							printf("|    > wizards monsters and magic.           |\n");
							printf("|                                            |\n");
							printf("|                                            |\n");
							printf("----------------------------------------------\n");
							while (getchar() != '\n');
							double typingSpeed = 0.0;
							char* setenceTyped = GetInput(&typingSpeed);
							double typingScore = CheckSentence(getSentence(Wizard), //sentence to type
								63, //sentence length
								setenceTyped, //users sentence entry
								typingSpeed); //users typing speed
							decreaseMonsterHealth(calculateDamage(Player, typingScore), Wizard);
							if (getHealth(Player) <= 0)
							{
								loopAgain = false;
							}
							else if (getMonsterHealth(Wizard) <= 0)
							{
								loopAgain = false;
							}
						}

						//check to see the results of the battle
						if (getHealth(Player) <= 0) //the monster killed you
						{
							red();
							printf("____________________________________________________\n");
							printf("[YOU DIED(you were no match for the wizard's magic)]\n");
							return(0);
							reset();
						}
						else //you defeated the monster!
						{
							green();
							printf("_________________________________________\n");
							printf("[CONGRATULATIONS(you defeated the Wizard)]\n");
							reset();
						}

						printf("You defeated the wizard and the purple fog begins to settle. You look around for the pig meat.\n");
						while (getchar() != '\n');
						printf("but it's nowhere in sight, it must of been lost in the battle.\n");
						while (getchar() != '\n');
						printf("Angered at the loss of a meal you head back into the marshy swamp.\n");
						while (getchar() != '\n');
						disposeCharacter(Wizard);

						yellow();
						printf("______________________________________________________________________________________________________\n");
						printf("Should you...\n");
						while (canContinue == true)
						{
							printf("1. Heads toward a clearing in the trees?\n");
							printf("2. Follow some markings on the trees?\n");
							printf("3. Investigate a sunken structure in the water?\n");
							reset();
							int userInput = CollectNumericSelection(1, 3);
							switch (userInput)
							{
								// Go to clearing
							case 1:
								printf("You finally reach an open area without any thick marsh or murky waters.\n");
								while (getchar() != '\n');
								while (getchar() != '\n');
								printf("You sit down on a mushroom covered stump and take a breath.\n");
								while (getchar() != '\n');
								printf("You think about all the bizzare things that just happened and how you narrowly survived them.\n");
								while (getchar() != '\n');
								printf("Then the sky turns turns a dark grey and rain clouds start to form.\n");
								while (getchar() != '\n');
								printf("The light rain feels refreshing but it quickly turns to a complete down pour.\n");
								while (getchar() != '\n');
								printf("The booming of thunder can be heard in the distance, exhausted, you decide to simply wait it out in the clearing.\n");
								while (getchar() != '\n');
								red();
								printf("________________________________________\n");
								printf("[YOU DIED(you got struck by lightninng!)]\n");
								reset();
								//SAVE GAME
								return 0;
								canContinue = false;
								break;
								// Follow markings
							case 2:
								printf("You noticed a strange symbol of a eye engraved on a tree beside you.\n");
								while (getchar() != '\n');
								while (getchar() != '\n');
								printf("It seems to be some kind of warning to scare trespassers away.\n");
								while (getchar() != '\n');
								printf("You decided whatever it is it could possibly lead to food, \n");
								while (getchar() != '\n');
								printf("At this point you don't have very many options left. \n");
								while (getchar() != '\n');
								printf("You make your way past the symbol and catch a glisme of a small building nested in the trees.\n");
								while (getchar() != '\n');
								printf("Upon closer inspection you notice it's an old wooden cabin with a rusted out tin roof thats overtaken by vines.\n");
								while (getchar() != '\n');
								printf("You approach the cabin with caution but exicted at the possiblity of a meal being inside.\n");
								while (getchar() != '\n');
								printf("You go to open the door only to see it has a the door that had to be at least 8 feet tall.\n");
								while (getchar() != '\n');
								printf("Thats strange, who would need such as tall door? you think to yourself.\n");
								while (getchar() != '\n');
								printf("At then moment, the 8 foot wooden door creaks open revealing a hulking figure standing in the door way.\n");
								while (getchar() != '\n');
								int CyclopsHealth = 200;
								int CyclopsID = 4;
								char CyclopsName[MAX_NAME_SIZE] = "Cyclops";
								CHARACTER* Cyclops = CreateCharacter(CyclopsHealth, CyclopsID, CyclopsName);

								double typingSpeed = 0.0;
								char* setenceTyped = "N/A";
								double typingScore = 0.0;
								bool loopAgain = true;

								while (loopAgain)
								{
									yellow();
									if (!getImage(Cyclops))
									{
										printf("%s couldn't be displayed\n", Cyclops->name);
									}
									printf("----------------------------------------------\n");
									printf("|    > Health: %d                            |\n",Player->Health);
									printf("|                                            |\n");
									printf("|    > Cyclops Damage Required: %d           |\n",Cyclops->health);
									printf("|                                            |\n");
									printf("|    > The one eyed monsterous figure        |\n");
									printf("|    > emerges from the shadows.             |\n");
									printf("|                                            |\n");
									printf("|    > Enter:                                |\n");
									printf("|    > watch out for that cyclops' metal arm!|\n");
									printf("|    > Careful he doesn't poke out your eye. |\n");
									printf("|                                            |\n");
									printf("|                                            |\n");
									printf("----------------------------------------------\n");
									while (getchar() != '\n');
									double typingSpeed = 0.0;
									char* setenceTyped = GetInput(&typingSpeed);
									double typingScore = CheckSentence(getSentence(Cyclops), //sentence to type
										78, //sentence length
										setenceTyped, //users sentence entry
										typingSpeed); //users typing speed
									decreaseMonsterHealth(calculateDamage(Player, typingScore), Cyclops);
									if (getHealth(Player) <= 0)
									{
										loopAgain = false;
									}
									else if (getMonsterHealth(Wizard) <= 0)
									{
										loopAgain = false;
									}
								}

								//check to see the results of the battle
								if (getHealth(Player) <= 0) //the monster killed you
								{
									red();
									printf("____________________________________________________\n");
									printf("[YOU DIED(The cyclops' was too strong)]\n");
									return(0);
									reset();
								}
								else //you defeated the monster!
								{
									green();
									printf("_________________________________________\n");
									printf("[CONGRATULATIONS(you defeated the Cyclops)]\n");
									reset();
								}

								if (Cyclops->health == 0) // boss defeated
								{
									while (getchar() != '\n');
									printf("You managed to land a critical strike to the cyclops' eye!\n");
									while (getchar() != '\n');
									printf("The cyclops stumbles back and collaspes to the ground in pain.\n");
									while (getchar() != '\n');
									// SET UP Cooked crow OBJECT HERE WITH - +15 Health
									printf("You notice freshly cooked crow sitting on the cyclops table ready to be eaten.\n");
									while (getchar() != '\n');
									printf("You waste no time in gobbling it down! It may not be the best meal but at least it's food.\n");
									while (getchar() != '\n');
									ITEM* Crow = createItem("gFood", "Cooked crow", 15, Player);
									printf("As you're just about to finish your meal you hear the cyclops beginning to get back up.\n");
									while (getchar() != '\n');
									printf("You rush out of the cyclop's cabin in a panic looking for someplace to hide, you spot a dark cave entrance hidden behind some rotting logs.\n");
									while (getchar() != '\n');
									printf("With the cyclops on your tail it seems the cave is the only escape...\n");
									while (getchar() != '\n');
									green();
									printf("_________________________________________________________________\n");
									printf("[CONGRATULATIONS YOU HAVE SURVIVED LEVEL 2 - Lost In The Swamp!!!]\n");
									reset();

								}
								disposeCharacter(Cyclops);
								canContinue = false;
								break;
								//None of the menu options were selected

							case 3:
								printf("Your curiosty got the better of you, you jumped right into the swamp!n");
								while (getchar() != '\n');
								printf("Once you started swimming and getting closer to the mysterious structure you...n");
								while (getchar() != '\n');
								printf("notice its simply a piece of drift wood.n");
								while (getchar() != '\n');
								printf("Feeling kind of disappointed that you got in the water for nothing you turn back around to head to shore.\n");
								while (getchar() != '\n');
								printf("Out of the blue you feel the gooey surface beneath you pulling you down!n");
								while (getchar() != '\n');
								red();
								printf("__________________________________________\n");
								printf("[YOU DIED(you were sucked into the swamp!)]\n");
								reset();
								//SAVE GAME
								return 0;
								canContinue = false;
								break;
							default:
								printf("Invalid selction entered, please enter a number listen in the menu\n");
								break;
							}
						}
						
						
						canContinue = false;
						break;
						//None of the menu options were selected
					default:
						printf("Invalid selction entered, please enter a number listen in the menu\n");
						break;
					}
				}


				//canContinue = true;
				//userInput = 5;
				break;
				//Choice 4
			case 4:
				while (getchar() != '\n');
				printf("The swamp is getting dark, the sun is lowering and the crickets are starting to cherp.\n");
				while (getchar() != '\n');
				printf("You believe that the best option to survive is to stay warm by making a fire.\n");
				while (getchar() != '\n');
				printf("The hunt for food can wait till the morning.\n");
				while (getchar() != '\n');
				cyan();
				printf("______________________________________________________________________________________________________\n");
				printf("Its still a while until the sun will completely set, what should you do to pass the time?\n");

				while (canContinue == true)
				{
					printf("1. Sleep by the fire?\n");
					printf("2. Craft something?\n");
					reset();
					int userInput = CollectNumericSelection(1, 2);
					switch (userInput)
					{
						//Walk over to clif choice
					case 1:
						printf("sleeping will pass the time nicely you think to yourself.\n");
						while (getchar() != '\n');
						while (getchar() != '\n');
						printf("You lean back yawning preparing to use a mossy rock as your pillow.\n");
						while (getchar() != '\n');
						printf("Its never a good idea to sleep with an empty stomach.\n");
						while (getchar() != '\n');
						printf("But in your case theres nothing else you can do.\n");
						while (getchar() != '\n');
						printf("You awake not to much longer after you fell asleep, you are disoriented and confused.\n");
						while (getchar() != '\n');
						printf("You glance over to your fire and notice it fizzled out leaving you in darkness.\n");
						while (getchar() != '\n');
						printf("Far off in the distance you make out a small flicking light.\n");
						while (getchar() != '\n');
						printf("Beliving it could be someone who could help you escape this swamp you run quickly towards the light.\n");
						while (getchar() != '\n');

						canContinue = false;
						break;
						//Dont go to clif choice
					case 2:
						printf("You have some time in the light still better make the most of it.\n");
						while (getchar() != '\n');
						while (getchar() != '\n');
						printf("You decide that if you're going to hunt for animals you may as well do with a proper tool.\n");
						while (getchar() != '\n');
						cyan();
						printf("______________________________________________________________________________________________________\n");
						printf("What tool shall you make?\n");

						while (canContinue == true)
						{
							printf("1. Wooden spear?\n");
							printf("2. Bow?\n");
							printf("3. Torch?\n");
							reset();
							int userInput = CollectNumericSelection(1, 3);
							switch (userInput)
							{
								// Wooden spear
							case 1:
								// SET UP Wooden spear OBJECT HERE WITH - +30 DAMAGE
								printf("With all these branches lying around you get to work quickly sharping the branch.\n");
								while (getchar() != '\n');
								while (getchar() != '\n');
								ITEM* Spear = createItem("damage", "Spear", 30, Player);
								printf("You successfully crafted a spear! Now you have an edge over those pesky animals..\n");
								while (getchar() != '\n');
								printf("Far off in the distance you notice a small flicking light.\n");
								while (getchar() != '\n');
								printf("Beliving it could be someone who could lead you to food.\n");
								while (getchar() != '\n');
								printf("with your newly crafted spear you run quickly towards the light. \n");

								canContinue = false;
								break;
								// BOW
							case 2:
								// SET UP Bow OBJECT HERE WITH - +25 DAMAGE
								printf("You decide a bow could come in handy.\n");
								while (getchar() != '\n');
								while (getchar() != '\n');
								printf("You grab a vine clutching on to a willow tree.\n");
								while (getchar() != '\n');
								printf("and tie it to a small branch you broke off a tree.\n");
								while (getchar() != '\n');
								ITEM* Bow = createItem("damage", "Bow", 25, Player);
								printf("It may not be somewhat flimsy but it sure beats using your hands\n");
								while (getchar() != '\n');
								printf("Far off in the distance you notice a small flicking light.\n");
								while (getchar() != '\n');
								printf("Beliving it could be someone who could lead you to food\n");
								while (getchar() != '\n');
								printf("With your newly crafted bow you run quickly towards the light. \n");
								while (getchar() != '\n');
								canContinue = false;
								break;
							case 3:

								printf("You come up with a brillant idea of creating a torch,\n");
								while (getchar() != '\n');
								while (getchar() != '\n');
								printf("That way you could navigate your way out of this flithy swamp!\n");
								while (getchar() != '\n');
								printf("You start taking off old moss and wraping it around a tree branch to create your torch.\n");
								while (getchar() != '\n');
								printf("Now the only thing left to do is light it, as you go to light your\n");
								while (getchar() != '\n');
								printf("torch you stumble over a rock whichs sents you flying right into the fire.\n");
								while (getchar() != '\n');
								red();
								printf("_____________________________________\n");
								printf("[YOU DIED(next time watch your step!)]\n");
								reset();
								//SAVE GAME
								return 0;
								canContinue = false;
								break;


							default:
								printf("Invalid selction entered, please enter a number listen in the menu\n");
								break;
							}

						}//None of the options were selected
					default:
						printf("Invalid selction entered, please enter a number listen in the menu\n");
						break;
					}
					canContinue = false;
					userInput = 3;
					break;



				}

			default:
				printf("Invalid selction entered, please enter a number listen in the menu\n");
				break;
			}

		}
		
		//Determine the next steps for the game!
		canContinue = true;
		while (canContinue == true)
		{
			printf("Would you like to save and exit or continue on to level 2?\n");
			printf("1. Save and exit\n");
			printf("2. Continue to level 3\n");
			int userInput = CollectNumericSelection(1, 2);
			switch (userInput)
			{
			//Save and exit
			case 1:
				printf("Saving game...\n");
				canContinue = false;
				//CALL SAVE FUNCTION HERE
				break;
				//Continue to next level
			case 2:
				printf("Loading level 3...\n");
				canContinue = false;
				storyLevelToPlay = LEVEL_THREE;
				break;
			//None of the menu options were selected
			default:
				printf("Invalid selction entered, please enter a number listen in the menu\n");
				break;
			}
		}
	}
	//Play level 3---------------------------------------------------------------------------------------------------------------------------------------------------------------------
	else if (storyLevelToPlay == LEVEL_THREE)
	{
		//Determine the next steps for the game!
		canContinue = true;
		while (canContinue == true)
		{
			printf("Would you like to save and exit or continue on to level 2?\n");
			printf("1. Save and exit\n");
			printf("2. Continue to level 4\n");
			int userInput = CollectNumericSelection(1, 2);
			switch (userInput)
			{
			//Save and exit
			case 1:
				printf("Saving game...\n");
				canContinue = false;
				//CALL SAVE FUNCTION HERE
				break;
				//Continue to next level
			case 2:
				printf("Loading level 4...\n");
				canContinue = false;
				storyLevelToPlay = LEVEL_FOUR;
				break;
			//None of the menu options were selected
			default:
				printf("Invalid selction entered, please enter a number listen in the menu\n");
				break;
			}
		}
	}
	//Play level 4---------------------------------------------------------------------------------------------------------------------------------------------------------------------
	else if (storyLevelToPlay == LEVEL_FOUR)
	{

	}
	//Invalid Level---------------------------------------------------------------------------------------------------------------------------------------------------------------------
	else
	{
		fprintf(stderr, "An error occured when attempted to load a story. Ensure that a valid story number is entered (1-4)\n");
		
	}
	return(0);

		


}