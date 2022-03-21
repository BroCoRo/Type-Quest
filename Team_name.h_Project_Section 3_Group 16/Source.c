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

#define FIRST_ARGUMENT 1
#define LEVEL_ONE      1
#define LEVEL_TWO      2
#define LEVEL_THREE    3
#define LEVEL_FOUR     4


int main(int argc, char* argv[])
{
	//collect which level of the story to play
	int storyLevelToPlay = 0;
	sscanf_s(argv[FIRST_ARGUMENT], "%d", &storyLevelToPlay);
	bool canContinue = true;

	//Play level 1---------------------------------------------------------------------------------------------------------------------------------------------------------------------
	if (storyLevelToPlay == LEVEL_ONE)
	{
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
		printf("______________________________________________________________________________________________________\n");
		printf("You think should I:\n");
		printf("   1. Walk up the beach?\n");
		printf("   2. Walk into the clear path leading into the large redwood forest?\n");
		printf("   3. Walk into the redwood forest but do not follow the path?\n");
		printf("   4. Wait on the beach and hope that someone will come to help?\n");
		int userInput = CollectNumericSelection(1, 4);

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
						//SETUP BOARD OBJECT HERE +25 DAMAGE
						printf("You think that the board will be the best option, so you pick it upand lug it over your shoulder.\n");
						while (getchar() != '\n');
						canContinue = false;
						break;
					//Rock choice
					case 2:
						//SETUP ROCK DAMAGE HERE +20 DAMAGE
						printf("You think that the rock will be the best option as this is a weapon with range, so you pick up the rockand stuff it into your pocket.\n");
						while (getchar() != '\n');
						canContinue = false;
						break;
						//None of the menu options were selected
					default:
						printf("Invalid selction entered, please enter a number listen in the menu\n");
						break;
					}
				}

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

				//CREATE ANGRY CHEF MONSTER HERE <-- Damage to defeat 50

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
				double typingScore = CheckSentence("As the chef thrusts the pie forwards, you lunge forward, grasp the door, and slam it closed so the pie can bounce off the door shield!\0", //sentence to type
													139, //sentence length
													setenceTyped, //users sentence entry
													typingSpeed); //users typing speed


				//INSERT SOME SORT OF LOOP TO KEEP BACK IF MONSTER NOT DEFEATED!!!!!!!!!!!!!!!!!!!!!!!

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
						//CREATE poisonous potato OBJECT heath(OBJECT MODULE RANDOMLY GENERATES THE HEATH IMPACT OF EATING THIS OBJECT(- (0 - 100))
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
						if (0 == 0) //health decrease causes health to drop below zero
						{
							printf("________________________________________________\n");
							printf("[YOU DIED(the poisonous potato wasn't so savoury)]\n");
							//SAVE GAME
							exit(1);
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
						//CREATE OBJECT chestplate defense + 50
						canContinue = false;
						break;
					//Move on choice
					case 2:
						printf("You decide that digging it the rest of the way out of the ground would be far too complicated, so you continue leaving this object behind.\n");
						while (getchar() != '\n');
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
						printf("You step forward and duck under this massive tree.\n");
						while (getchar() != '\n');
						printf("Just as you are shuffling underneath the tree, you hear a loud CRACK!\n");
						while (getchar() != '\n');
						printf("You think for a split second, UHOH, the branch, of course, had to break while I'm under this massive tree..just my luck.\n");
						while (getchar() != '\n');
						printf("Then bam, all went dark...\n");
						while (getchar() != '\n');
						printf("_______________________________________________________________\n");
						printf("[YOU DIED(the fallen dead redwood tree squashed you like a bug)]\n");
						//SAVE GAME
						exit(1);
						canContinue = false;
						break;
					//Go around choice
					case 2:
						printf("You think that my luck has not been excellent lately, so I will not take my chances on this.You spend the extra 15 minutes working your way around this tree.\n");
						while (getchar() != '\n');
						while (getchar() != '\n');
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
				
				//LOAD CRABBY CRABS MONSTERS IN HERE damage required to defeat 25

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
				typingScore = CheckSentence("The crabby crabs curiously circled, moving closer and closer after each circle. They lunge, snapping their crushing claws!\0", //sentence to type
					127, //sentence length
					setenceTyped, //users sentence entry
					typingSpeed); //users typing speed

				//INSERT SOME SORT OF LOOP TO KEEP BACK IF MONSTER NOT DEFEATED!!!!!!!!!!!!!!!!!!!!!!!

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
				printf("_________________________________________________________\n");
				printf("[YOU DIED(you got a little too comfortable with heights)]\n");
				//SAVE GAME
				exit(1);
				canContinue = false;
				break;
			//Dont go to clif choice
			case 2:
				printf("You think, why risk looking over the cliff and just continue to walk through the trees.\n");
				while (getchar() != '\n');
				while (getchar() != '\n');
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
				//Load in level 1 BOSS GOOEY GLOB damage required to defeat 100%

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
				double typingScore = CheckSentence("Send your disgusting drowning goopy stink away! Swat the thick slime away to avoid potential suffocation! Push through the cloud, eyes burning, nose plugged, you can do this!\0", //sentence to type
					179, //sentence length
					setenceTyped, //users sentence entry
					typingSpeed); //users typing speed

				//INSERT SOME SORT OF LOOP TO KEEP BACK IF MONSTER NOT DEFEATED!!!!!!!!!!!!!!!!!!!!!!!

				if (0 == 0) // boss defeated
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

					printf("______________________________________________________________________\n");
					printf("[CONGRATULATIONS YOU HAVE SURVIVED LEVEL 1 - Into The RedWood Forest!!!]\n");
				}

				canContinue = false;
				break;
				//None of the menu options were selected
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
			printf("2. Continue to level 2\n");
			int userInput = CollectNumericSelection(1,2);
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
	}
	//Play level 2---------------------------------------------------------------------------------------------------------------------------------------------------------------------
	else if (storyLevelToPlay == LEVEL_TWO)
	{
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