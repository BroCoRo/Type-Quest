// CSCN71030 - Team Based Project Development 
// Group Project Group 16 - Section 3
// Raghu, Tyler, Owen, Brodin
// March 3rd, 2022
// 
// Revision History 
// 1.0       March 3rd      2022

#define _CRT_SECURE_NO_WARNINGS
#include "Typing.h"
#include "IO.h"
#include <stdio.h>
#include "character.h"
#include "object.h"
#include "Player.h"
#include "Colours.h"
#include <string.h>


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
	ptrPlayer Player = createPlayer("N\A", 0,0,0);
	char type[MAXNAME];
	int pts;
	//collect which level of the story to play
	int storyLevelToPlay = 0;
	sscanf_s(argv[FIRST_ARGUMENT], "%d", &storyLevelToPlay);
	bool canContinue = true;

	green();
	printf("WELLCOME TO TYPE QUEST!!\nPress Enter to continue....\n");
	while (getchar() != '\n');
	reset();
	printf("1. Create a New Player??\n");
	printf("2. Load Player from save?\n");
	int Input = CollectNumericSelection(1, 2);
	switch (Input)
	{
	case 1:
		////setup a player for the game
		printf("\n");
		FILE * fp = fopen("PlayerImage.txt", "r");
		if (!fp) {
			printf("couldn't open file!\n");
			return(1);
		}
		char scoreBoard[IMAGESIZEW][IMAGESIZEH];
		for (int i = 0; i < IMAGESIZEW; i++) {
			for (int j = 0; j < IMAGESIZEH; j++) {
				fscanf(fp, "%c", &scoreBoard[i][j]);
			}
		}

		for (int i = 0; i < IMAGESIZEW; i++) {
			for (int j = 0; j < IMAGESIZEH; j++) {
				printf("%c", scoreBoard[i][j]);
			}
		}
		fclose(fp);



		char name[MAXNAME];
		printf("Name your Character\n");
		scanf_s("%s", name, MAXNAME);
		Player = createPlayer(name, 100, 50, 25);
	
		break;
		//Move on choice
	case 2:
		printf("\n");
		FILE * file = fopen("PlayerData.txt", "r");
		Player = loadPlayer(file);
		if (Player == NULL) {

			printf("error loading player\n");
			exit(1);
		}
		printf("Succesfully Loaded Player!!!");
		printPlayer(Player);
		while (getchar() != '\n');
		break;
		//None of the menu options were selected
	default:
		printf("Invalid selction entered, please enter a number listen in the menu\n");
		break;
	}

	
	

	

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
		printf("You had no idea where you were, and there was no sign of human inhabitance for miles.\n");
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
					reset();
					switch (userInput)
					{
					//Board choice
					case 1:
						reset();
						strcpy(type, "damage");
						pts = 25;
						printAffects(Player, type, pts);
						reset();
						ITEM* board = createItem(type, "board", pts, Player);
						cyan();
						printf("You think that the board will be the best option, so you pick it upand lug it over your shoulder.\n");
						while (getchar() != '\n');
						canContinue = false;
						break;
					//Rock choice
					case 2:
						printf("You think that the rock will be the best option as this is a weapon with range, so you pick up the rock and stuff it into your pocket.\n");
						strcpy(type, "damage");
						pts = 20;
						printAffects(Player, type, pts);
						reset();
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

				bool loopAgain = true;	

				while (loopAgain)
				{
					yellow();
					getImage(AngryChef);
					printf("\n");
					printf("----------------------------------------------\n");
					printf("|    > Health: %d                            |\n", getMonsterHealth(AngryChef));
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
					green();
					printf("Player Health = %d\n", getHealth(Player));
					yellow();
					while (getchar() != '\n');
					double typingSpeed = 0.0;
					char* sentenceTyped = GetInput(&typingSpeed);
					double typingScore = CheckSentence(getSentence(AngryChef), //sentence to type
						136, //sentence length
						sentenceTyped, //users sentence entry
						typingSpeed); //users typing speed
					decreaseMonsterHealth((calculateDamage(Player, typingScore)), AngryChef);
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
						strcpy(type, "bFood");
						pts = potatoDamage;
						reset();
						printAffects(Player, type, pts);


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
						printf("After about an hour and a half of consistent spinningand seeing colours, the world starts to level out.\n");
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
						printf("You feel you have to know what this object is, so you wander the forset for a few minutes searching for a big stick.\n");
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
						pts = 50;
						reset();
						printAffects(Player, "defence", pts);
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
						printf("Invalid selction entered, please enter a number listed in the menu\n");
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
				printf("Then a massive cast of crabs emerges from the sand!\n");
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
					printf("|    >Health: %d                             |\n", getMonsterHealth(CrabbyCrabs));
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
					green();
					printf("Player Health = %d\n", getHealth(Player));
					yellow();
					while (getchar() != '\n');
					double typingSpeed = 0.0;
					char* setenceTyped = GetInput(&typingSpeed);
					double typingScore = CheckSentence(getSentence(CrabbyCrabs), //sentence to type
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
				printf("So, discouraged, you turn to go back to wandering amongst the trees.Then out of nowhere, the ground beneath you shifts and starts sliding towards the cliff's edge!\n");
				while (getchar() != '\n');
				printf("You think there is absolutely no way that this is happening and that you have already been through too much!\n");
				while (getchar() != '\n');
				printf("You attempt to lunge forward and grab onto a nearby root, but you miss the root and slide over the cliff's edge.\n");
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
					printf("|    > Health: %d                            |\n", getMonsterHealth(gooeyGlob));
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
					green();
					printf("Player Health = %d\n", getHealth(Player));
					yellow();

					while (getchar() != '\n');
					double typingSpeed = 0.0;
					char* setenceTyped = GetInput(&typingSpeed);
					double typingScore = CheckSentence(getSentence(gooeyGlob), //sentence to type
						176, //sentence length
						setenceTyped, //users sentence entry
						typingSpeed); //users typing speed
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
				reset();
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
			printf("1. Exit and Save Player\n");
			printf("2. Continue to level 2\n");
			int userInput = CollectNumericSelection(1,2);
			switch (userInput)
			{
			
			case 1:
				printf("Closing game...\n");
				FILE * fp = fopen("PlayerData.txt", "w");
				if (!fp) {
					printf("can not open file!\n");
				}
				savePlayer(Player, fp);
				
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
	 if (storyLevelToPlay == LEVEL_TWO)
	 {
		bool ending = false;
		setHealth(Player, 100);
		setDamage(Player, 50);
		setDefence(Player, 25);
	
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
		cyan();
		printf("______________________________________________________________________________________________________\n");
		printf("What will you do now?:\n");
		printf("   1. Climb a tree for a better look around?\n");
		printf("   2. Try and catch some frogs to eat?\n");
		printf("   3. Walk closer to a mysterious light in the distance?\n");
		printf("   4. Make a fire and look for food in the morning?\n");
		
		int Input = CollectNumericSelection(1, 4);
		printf("\n");
		reset();
		//Determine the next steps for the game!
		canContinue = true;
		while (canContinue == true)
		{
			switch (Input)
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
					int userInput = CollectNumericSelection(1, 3);
					printf("\n");
					reset();
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
						reset();
						strcpy(type, "damage");
						pts = 15;
						printAffects(Player, type, pts);
						reset();
						ITEM* Arrow = createItem(type, "Arrow", pts, Player);
						printf("You take the arrow maybe it could be useful in hunting for food.\n");
						while (getchar() != '\n');
						canContinue = false;
						break;
						//None of the menu options were selected
					default:
						printf("Invalid selction entered, please enter a number listen in the menu\n");
						break;
					}
				}


				canContinue = true;
				Input = 4;
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
				    int userInput = CollectNumericSelection(1, 2);
					printf("\n");
					printf("\n");
					reset();
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
						bool loop = true;

						while (loop)
						{
							yellow();
							if (!getImage(Slime))
							{
								printf("%s couldn't be displayed\n", Slime->name);
							}
							printf("\n");
							printf("----------------------------------------------\n");
							printf("|    > Health: %d                            |\n", getMonsterHealth(Slime));
							printf("|                                            |\n");
							printf("|    > Slime Damage Required: 80             |\n");
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
							green();
							printf("Player Health = %d", getHealth(Player));
							yellow();
							while (getchar() != '\n');
							typingSpeed = 0.0;
							setenceTyped = GetInput(&typingSpeed);
							typingScore = CheckSentence(getSentence(Slime), //sentence to type
								83, //sentence length
								setenceTyped, //users sentence entry
								typingSpeed); //users typing speed
							decreaseMonsterHealth(calculateDamage(Player, typingScore), Slime);
							if (getHealth(Player) <= 0)
							{
								loop = false;
							}
							else if (getMonsterHealth(Slime) <= 0)
							{
								loop = false;
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

					
						bool loopMonster = true;

						while (loopMonster)
						{
							yellow();
							if (!getImage(Minotaur))
							{
								printf("%s couldn't be displayed\n", Minotaur->name);
							}
							printf("\n");
							printf("----------------------------------------------\n");
							printf("|    > Health: %d                            |\n", getMonsterHealth(Minotaur));
							printf("|                                            |\n");
							printf("|    > Minotaur Damage Required: 100         |\n");
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
							green();
							printf("Player Health = %d\n", getHealth(Player));
							yellow();
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
								loopMonster = false;
							}
							else if (getMonsterHealth(Minotaur) <= 0)
							{
								loopMonster = false;
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
				Input = 1;
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
					printf("2. Steal it when hes not looking?\n");
					int userInput = CollectNumericSelection(1, 2);
					printf("\n");
					reset();
					switch (userInput)
					{
						//ask wizard
					case 1:
						printf("You step out of the shrubs, your heart beating a mile a minute.\n");
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
						printf("___________________________________________________________________\n");
						printf("Should you...\n");
						while (canContinue == true)
						{
							printf("1. Trust the old man?\n");
							printf("2. Not trust the old man?\n");
							
							int userInput = CollectNumericSelection(1, 2);
							printf("\n");
							reset();
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

								Input = 2;
								canContinue = false;
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

								return(0);
								canContinue = false;
								break;


							default:
								printf("Invalid selection entered, please enter a number listen in the menu\n");
								break;
							}
							canContinue = false;
							break;
						}
				     canContinue = false;
					 break;
					
						//Steal from wizard
					case 2:
						printf("Not wanting to alert the old man you around sneak around to the other side of the bushes.\n");
						while (getchar() != '\n');
						printf("With the pig meat in sight you make a mad dash towards it.\n");
						while (getchar() != '\n');
						printf("But unfortunatly you're too slow the old man has locked his eyes on you.\n");

						int WizardHealth = 120;
						int WizardID = 3;
						char WizardName[MAX_NAME_SIZE] = "Wizard";
						CHARACTER* Wizard = CreateCharacter(WizardHealth, WizardID, WizardName);
						bool loopAgain = true;

						while (loopAgain)
						{
							yellow();
							if (!getImage(Wizard))
							{
								printf("%s couldn't be displayed\n", Wizard->name);
							}
							printf("\n");
							printf("----------------------------------------------\n");
							printf("|    > Health: %d                           |\n", getMonsterHealth(Wizard));
							printf("|                                            |\n");
							printf("|    > Wizard Damage Required: 120           |\n");
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
							green();
							printf("Player Health = %d\n", getHealth(Player));
							yellow();

							while (getchar() != '\n');
							double typingSpeed = 0.0;
							char* setenceTyped = GetInput(&typingSpeed);
							int length = 63;
							double typingScore = CheckSentence(getSentence(Wizard),length,setenceTyped, typingSpeed); //users typing speed
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
						//canContinue = false;

						cyan();
						printf("______________________________________________________________________________________________________\n");
						printf("Should you...\n");
						while (canContinue == true)
						{
							printf("1. Heads toward a clearing in the trees?\n");
							printf("2. Follow some markings on the trees?\n");
							printf("3. Investigate a sunken structure in the water?\n");
							int userInput = CollectNumericSelection(1, 3);
							reset();
							printf("\n");
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
									printf("\n");
									printf("----------------------------------------------\n");
									printf("|    > Health: %d                            |\n", getMonsterHealth(Cyclops));
									printf("|                                            |\n");
									printf("|    > Cyclops Damage Required: 200          |\n");
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
									green();
									printf("Player Health = %d\n", getHealth(Player));
									yellow();
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

								 // boss defeated
								
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
								reset();
								strcpy(type, "gFood");
								pts = 20;
								printAffects(Player, type, pts);
								reset();
								ITEM* Crow = createItem(type, "Crow", pts, Player);
								
								printf("As you're just about to finish your meal you hear the cyclops beginning to get back up.\n");
								while (getchar() != '\n');
								printf("You rush out of the cyclop's cabin in a panic looking for someplace to hide, you spot a dark cave entrance hidden behind some rotting logs.\n");
								while (getchar() != '\n');
								printf("With the cyclops on your tail it seems the cave is the only escape...\n");
								while (getchar() != '\n');
								green();
								printf("_________________________________________________________________\n");
								printf("[CONGRATULATIONS YOU HAVE SURVIVED LEVEL 2 - Lost In The Swamp!!!]\n\n");
								reset();
								ending = true;

								
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
								return 0;
								canContinue = false;
								break;
							default:
								printf("Invalid selction entered, please enter a number listen in the menu\n");
								break;
							}
							canContinue = false;
							break;
						}
						
						
						canContinue = false;
						break;
						//None of the menu options were selected
					default:
						printf("Invalid selction entered, please enter a number listen in the menu\n");
						break;
					}
					canContinue = false;
					break;
				}

				if (Input == 2)
				{
					canContinue = true;
					break;
				}
				else 
				{
					canContinue = false;
					break;
				}
				
				//Choice 4
			case 4:
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
					int userInput = CollectNumericSelection(1, 2);
					printf("\n");
					reset();
					switch (userInput)
					{
						//Walk over to clif choice
					case 1:
						printf("sleeping will pass the time nicely you think to yourself.\n");
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
							int userInput = CollectNumericSelection(1, 3);
							reset();
							switch (userInput)
							{
								// Wooden spear
							case 1:
								// SET UP Wooden spear OBJECT HERE WITH - +30 DAMAGE
								printf("With all these branches lying around you get to work quickly sharping the branch.\n");
								while (getchar() != '\n');
								while (getchar() != '\n');
								reset();
								strcpy(type, "damage");
								pts = 30;
								printAffects(Player, type, pts);
								reset();
								ITEM* Spear = createItem(type, "Spear", pts, Player);
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
								reset();
								strcpy(type, "damage");
								pts = 25;
								printAffects(Player, type, pts);
								reset();
								ITEM* Bow = createItem(type, "Bow", pts, Player);
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

						}

					}
				}
			 canContinue = true;
			 Input = 3;
			 break;
			 
					//None of the options were selecte



				

			default:
				printf("Invalid selction entered, please enter a number listen in the menu\n");
				break;
			}
			if (ending)
			{
				canContinue = true;
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
			
			case 1:
				printf("Saving game...\n");
				canContinue = false;
				FILE* fp = fopen("PlayerData.txt", "w");
				if (!fp) {
					printf("can not open file!\n");
				}
				savePlayer(Player, fp);
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
	 if (storyLevelToPlay == LEVEL_THREE)
	 {
		 bool ending = false;

		 yellow();
		 printf("__________________________________________________________________________________\n");
		 printf("|                                                                                |\n");
		 printf("|                                #....................&&&&&@@@,#$$$@@@@@@@@@@@@@@|\n");
		 printf("|                             @.............&..................@@@@@@@@@@@@@&@@@@|\n");
		 printf("|                        @@,..................@.......,,,,.,,,,,,,,,,,,,,/////@@@|\n");
		 printf("|                    @@.....................,,,.........,@.......,,,,,,,,,@@@@@@@|\n");
		 printf("|               @@@........./.&@##&@,.....@,,,,,....................,........#@@ |\n");
		 printf("|          @(,,,,@........@,@@............/,,,,,,,*..................,,,,,,,,,@@(|\n");
		 printf("|       @*******,...../,,@@@@@&...........*,,,,,,,,@.................,,,,,,@...&&|\n");
		 printf("|      *******@......@,@@@@@@@@...........,,.......,/....................,#.....@|\n");
		 printf("|   ********@.......(*@@@@@@@@@@.....................................,@.......@@@|\n");
		 printf("|*********,,,,...(*@@@@@@@@@@@@.....................................,@...........|\n");
		 printf("| *******@,,,,,,,*@@@@@@@@@@@@@@(......................@.............,...........|\n");
		 printf("|******@,,,,,,,@*@@@@@@@@@@@@@@@,.......................@........................|\n");
		 printf("| ****(,,,,,,,*@@@@@@@@@@@@@@@@@........................*........................|\n");
		 printf("| ***,,,,,,,,,*@@@@@@@@@@@@@@@@@,........................@...................... |\n");
		 printf("| ,,,,*&..@,,,/*@@@@@@@@@@@@@@@@,,,,,....................@.......................|\n");
		 printf("|  ,,(*,,,....@@@@@@@@@@@@@@@@@@,@......@,.....#@........@.......................|\n");
		 printf("|    ,,,,,,,,,,,,,,,,,,,#@@@@@@@#,,,,............./......%%%%......................|\n");
		 printf("|     ,,,,,,,,,,,,,,,,,,,,,,,,,&##****,,,,,........@......***@**.                |\n");
		 printf("|        ,,,,,,,,,,,,,,,,,,,,,***@,,,,,,,,,,/@@@/,,,,,,,...****                  |\n");
		 printf("|             ,,,,,,,,,,,,,,,**     ,,,,,,,,,,,,,,,,,,,,,,,                      |\n");
		 printf("|                                       ,,,,,,,,,,,,,                            |\n");
		 printf("|                                                                                |\n");
		 printf("|                                                                                |\n");
		 printf("|                        Level 3: Trespassing Count's Cave                       |\n");
		 printf("|                                                                                |\n");
		 printf("|                                                                                |\n");
		 printf("----------------------------------------------------------------------------------\n");
		 reset();


		 printf("\nAs you hurried into the cave, you tripped on a rock and fell.\n");
		 while (getchar() != '\n');
		 printf("You get up rapidly and your eyes lock in with the cyclopes.\n");
		 while (getchar() != '\n');
		 printf("The cyclopes stood by the entrance of the cave, completely frozen, not even attempting to enter. \n");
		 while (getchar() != '\n');
		 printf("The dreadful monster suddenly turns around and starts walking away from you... \n");
		 while (getchar() != '\n');
		 printf("You get up and dust yourself off.\n");
		 while (getchar() != '\n');
		 printf("Now you are wondering if it is even worth going through the cave.\n");
		 while (getchar() != '\n');
		 printf("You must make a choice...\n");
		 while (getchar() != '\n');
		 cyan();
		 printf("______________________________________________________________________________________________________\n");
		 printf("You think I should:\n");
		 printf("   1. Turn around and walk back to the swamp?\n");
		 printf("   2. Continue through the cave that scared the cyclops?\n");
		 int userInput = CollectNumericSelection(1, 2);
		 reset();

		 switch (userInput)
		 {
			 //walk back to swamp
		 case 1:
			 printf("You decide its probably not best to go through the cave.\n");
			 while (getchar() != '\n');
			 printf("You turn around and start walking back to the entrance of the cave slowly.\n");
			 while (getchar() != '\n');
			 printf("By the entrance, you pop your head out and scan the area to make sure the cyclopes is no where in sight.\n");
			 while (getchar() != '\n');
			 printf("Everything looks clear and you take a step out of the cave...\n");
			 while (getchar() != '\n');
			 printf("Out of nowhere, the cyclopes jumps from above!\n");
			 while (getchar() != '\n');
			 printf("You look up and... *SPLAT*.\n");
			 while (getchar() != '\n');
			 red();
			 printf("___________________________________________\n");
			 printf("[YOU DIED(The cyclops crushed you as you walked out of the cave)\n");
			 reset();
			 //SAVE GAME
			 return 0;
			 canContinue = false;
			 break;
			 //cave choice
		 case 2:
			 while (getchar() != '\n');
			 printf("You decide to go through the cave because you think having to deal with that cyclops again is a lot more worse than whatever might be in that cave.\n");
			 while (getchar() != '\n');
			 printf("You walk deeper into the cave and you seeing nothing but brightly lit torches.\n");
			 while (getchar() != '\n');
			 printf("Several minutes goes by and you start to get an eerie sensation.\n");
			 while (getchar() != '\n');
			 printf("Suddenly you notice yourself in a crossroads.\n");
			 while (getchar() != '\n');
			 printf("There are 3 tunnels in front you\n");
			 while (getchar() != '\n');
			 printf("The tunnel to the left has a bat hanging upside down.\n");
			 while (getchar() != '\n');
			 printf("The other 2 tunnels are blocked by massive boulders .\n");
			 while (getchar() != '\n');
			 printf("You take one of the torches off the wall as the tunnel looks pitch black\n");
			 while (getchar() != '\n');
			 printf("Without any choice, you head for the left tunnel\n");
			 while (getchar() != '\n');
			 printf("As you start walking into the left tunnel, the bat turns around and starts following you.\n");
			 while (getchar() != '\n');
			 printf("It hops from place to place on the cieling while you are walking.\n");
			 while (getchar() != '\n');
			 printf("Everything you have seen up until now has made you quite the cautious person.\n");
			 while (getchar() != '\n');
			 printf("You decide you need something in case the bat starts attacking you.\n");
			 while (getchar() != '\n');
			 printf("The issue is that the only thing around you are stones.\n");
			 while (getchar() != '\n');
			 cyan();
			 printf("______________________________________________________________________________________________________\n");
			 printf("Should you...\n");

			 //Determine the next steps for the game!
			 canContinue = true;
			 while (canContinue == true)
			 {
				 printf("1. Pickup that fairly large stone?\n");
				 printf("2. Forgot about a weapon and start walking faster\n");
				 int userInput = CollectNumericSelection(1, 2);
				 reset();

				 switch (userInput)
				 {
					 //pickup stone
				 case 1:
					 printf("You think that the stone will be helpful so you walk over to grab it.\n");
					 while (getchar() != '\n');
					 printf("As you bend over to grab it you hear something.\n");
					 while (getchar() != '\n');
					 printf("You turn around and notice the bat is coming towards you!\n");
					 while (getchar() != '\n');
					 printf("You dodge it and fall down letting go of your torch!\n");
					 while (getchar() != '\n');
					 printf("The bat start circling around you as if you were it's prey...\n");
					 while (getchar() != '\n');
					 printf("Suddenly, you are strucken with a great idea!\n");
					 while (getchar() != '\n');
					 printf("You can use the flame on the torch to kill the bat\n");
					 while (getchar() != '\n');
					 printf("But you must get to it before the bat gets to you\n");
					 while (getchar() != '\n');
					 printf("You get up and leap towards the torch then roll over to avoid the charging bat!\n");
					 while (getchar() != '\n');
					 strcpy(type, "damage");
					 pts = 40;
					 printAffects(Player, type, pts);

					 //player uses torch as attack item
					 ITEM* flame = createItem("damage", "flame", 40, Player);
					 reset();
					 free(flame);
					 while (getchar() != '\n');

					 printf("You stand up and face the bat ready for a battle...\n");
					 while (getchar() != '\n');

					 int monsterBatHealth = 110;
					 int monsterBatID = 13;
					 char monsterBatName[MAX_NAME_SIZE] = "Fangs the Bat";
					 CHARACTER* monsterBat = CreateCharacter(monsterBatHealth, monsterBatID, monsterBatName);

					 bool loopAgain11 = true;

					 while (loopAgain11)
					 {
						 purple();
						 getImage(monsterBat);
						 printf("\n");
						 printf("----------------------------------------------\n");
						 printf("|    >Health: %d                             |\n", getMonsterHealth(monsterBat));
						 printf("|                                            |\n");
						 printf("|    >Fangs damage required: 110             |\n");
						 printf("|                                            |\n");
						 printf("|    >Fangs is circling around               |\n");
						 printf("|    >It's fangs are large and sharp         |\n");
						 printf("|                                            |\n");
						 printf("|    >Enter:                                 |\n");
						 printf("|     This bat is large and fast,            |\n");
						 printf("|     unlike anything you've faced before.   |\n");
						 printf("|     Do not let it's sharp fangs            |\n");
						 printf("|     sink into your neck!                   |\n");
						 printf("|                                            |\n");
						 printf("----------------------------------------------\n");
						 green();
						 printf("Player Health = %d\n", getHealth(Player));
						 reset();
						 while (getchar() != '\n');
						 double typingSpeed = 0.0;
						 char* sentenceTyped = GetInput(&typingSpeed);
						 double typingScore = CheckSentence(getSentence(monsterBat), //sentence to type
							 115, //sentence length
							 sentenceTyped, //users sentence entry
							 typingSpeed); //users typing speed
						 decreaseMonsterHealth((calculateDamage(Player, typingScore)), monsterBat);
						 if (getHealth(Player) <= 0)
						 {
							 loopAgain11 = false;
						 }
						 else if (getMonsterHealth(monsterBat) <= 0)
						 {
							 loopAgain11 = false;
						 }
					 }

					 //check to see the results of the battle
					 if (getHealth(Player) <= 0) //the monster killed you
					 {
						 red();
						 printf("_________________________________________\n");
						 printf("[YOU DIED(Fangs the Bat was too strong)]\n");
						 reset();
						 free(monsterBat);
						 return(0);
					 }
					 else //you defeated the monster!
					 {
						 green();
						 printf("______________________________________________\n");
						 printf("[CONGRATULATIONS(you defeated Fangs the Bat)]\n");
						 reset();
					 }
					 reset();
					 disposeCharacter(monsterBat);
					 printf("The bat lets out a loud screech in agony as it falls down gently\n");
					 while (getchar() != '\n');
					 while (getchar() != '\n');
					 printf("You pause for a moment to realize what has just happened\n");
					 while (getchar() != '\n');
					 printf("Knowing you do not have a lot of time left, you trudge forward into the tunnel\n");
					 while (getchar() != '\n');
					 printf("After walking for about 100 meters, you run into a dead end.\n");
					 while (getchar() != '\n');
					 printf("With no where else to go, you turn back around.\n");
					 while (getchar() != '\n');
					 printf("On your way back, you notice the bat is gone.\n");
					 while (getchar() != '\n');
					 printf("This makes you even more frightened.\n");
					 while (getchar() != '\n');
					 printf("However, you have no choice but to continue so you head back to the tunnel intersection\n");
					 while (getchar() != '\n');
					 printf("You reach the intersection again and what?... the boulders are no longer there?\n");
					 while (getchar() != '\n');
					 printf("This scares you even more than you already are\n");
					 while (getchar() != '\n');
					 printf("But you know that you have to get through this cave so now you have a decision to make.\n");
					 while (getchar() != '\n');
					 printf("The left tunnel is a dead end, so you must now decide between the middle tunnel or the right tunnel.\n");
					 while (getchar() != '\n');
					 cyan();
					 printf("______________________________________________________________________________________________________\n");
					 printf("Should you...\n");

					 //Determine the next steps for the game!
					 canContinue = true;
					 while (canContinue == true)
					 {
						 printf("1. Go down the middle tunnel?\n");
						 printf("2. Go down the right tunnel?\n");
						 int userInput = CollectNumericSelection(1, 2);
						 reset();
						 switch (userInput)
						 {
							 switch (userInput)
							 {
								 //middle
							 case 1:
								 printf("You decide to walk down the middle tunnel.\n");
								 while (getchar() != '\n');
								 printf("There is nothing but darkness and the feeling of rubble under your feet.\n");
								 while (getchar() != '\n');
								 printf("Your stomach starts gurgling.\n");
								 while (getchar() != '\n');
								 printf("But there is nothing around you that is edible.\n");
								 while (getchar() != '\n');
								 printf("You start kicking yourself for not eating the bat after you had fried it with your torch.\n");
								 while (getchar() != '\n');
								 printf("Then realization hits and you know that eating that bat may end doing a lot of bad in the world ;).\n");
								 while (getchar() != '\n');
								 printf("As you continue walking, you notice a sliver of light.\n");
								 while (getchar() != '\n');
								 printf("Ecstatic, you start sprinting towards it!.\n");
								 while (getchar() != '\n');
								 printf("Then suddenly, you hear a laugh.\n");
								 while (getchar() != '\n');
								 printf("The laugh sounds like a child's laugh but much more maniacal.\n");
								 while (getchar() != '\n');
								 printf("You stop right in your tracks and start to become anxious.\n");
								 while (getchar() != '\n');
								 printf("You pick up a stone thinking it might come in handy soon.\n");
								 while (getchar() != '\n');
								 strcpy(type, "damage");
								 pts = 20;
								 printAffects(Player, type, pts);
								 ITEM* stone = createItem("damage", "stone", 20, Player);
								 while (getchar() != '\n');
								 reset();
								 free(stone);

								 printf("The laugh continues to get louder and louder as you walk through the tunnel.\n");
								 while (getchar() != '\n');
								 printf("You stop dead in your tracks.\n");
								 while (getchar() != '\n');
								 printf("You see something, or in this case someone.\n");
								 while (getchar() != '\n');
								 printf("It looks like a child.\n");
								 while (getchar() != '\n');
								 printf("What would a child be doing here of all places? you wonder to yourself.\n");
								 while (getchar() != '\n');
								 printf("The child's back is turned to you.\n");
								 while (getchar() != '\n');
								 printf("You approach the child and tap them on the shoulder and ask if they are okay.\n");
								 while (getchar() != '\n');
								 printf("The child turns around!.\n");
								 while (getchar() != '\n');
								 printf("Frightened! you take a step back.\n");
								 while (getchar() != '\n');
								 printf("This is certainly no child, it's another creature!.\n");
								 while (getchar() != '\n');
								 printf("It looks just like a troll.\n");
								 while (getchar() != '\n');
								 printf("Laughing, the troll starts walking towards.\n");
								 while (getchar() != '\n');
								 printf("Get ready to defend yourself, you got another battle coming.\n");
								 while (getchar() != '\n');

								 int trollHealth = 60;
								 int trollID = 14;
								 char trollName[MAX_NAME_SIZE] = "Troll";
								 CHARACTER* troll = CreateCharacter(trollHealth, trollID, trollName);

								 bool loopAgain = true;

								 while (loopAgain)
								 {
									 blue();
									 getImage(troll);
									 printf("\n");
									 printf("---------------------------------------------------------------\n");
									 printf("|    >Health: %d											  |\n", getMonsterHealth(troll));
									 printf("|															  |\n");
									 printf("|    >Troll damage required: 60								  |\n");
									 printf("|															  |\n");
									 printf("|    >The troll loves laughing								  |\n");
									 printf("|    >Can't tell if they're crazy or						  |\n");
									 printf("|    >just want to have fun									  |\n");
									 printf("|															  |\n");
									 printf("|    >Enter:												  |\n");
									 printf("|     Don't let it's size fool you for one second.            |\n");
									 printf("|     Trolls in these parts might be miniature				  |\n");
									 printf("|     but they are fierce!									  |\n");
									 printf("|														      |\n");
									 printf("|															  |\n");
									 printf("---------------------------------------------------------------\n");
									 green();
									 printf("Player Health = %d\n", getHealth(Player));
									 reset();

									 while (getchar() != '\n');
									 double typingSpeed = 0.0;
									 char* sentenceTyped = GetInput(&typingSpeed);
									 double typingScore = CheckSentence(getSentence(troll), //sentence to type
										 108, //sentence length
										 sentenceTyped, //users sentence entry
										 typingSpeed); //users typing speed
									 decreaseMonsterHealth((calculateDamage(Player, typingScore)), troll);
									 if (getHealth(Player) <= 0)
									 {
										 loopAgain = false;
									 }
									 else if (getMonsterHealth(troll) <= 0)
									 {
										 loopAgain = false;
									 }
								 }

								 //check to see the results of the battle
								 if (getHealth(Player) <= 0) //the monster killed you
								 {
									 red();
									 printf("____________________________________________\n");
									 printf("[YOU DIED(The Troll was too much to handle)]\n");
									 reset();
									 disposeCharacter(troll);
									 return(0);
								 }
								 else //you defeated the monster!
								 {
									 green();
									 printf("______________________________________________\n");
									 printf("[CONGRATULATIONS(you defeated the Troll!)]\n");
									 reset();
								 }
								 disposeCharacter(troll);
								 printf("The troll, as his last action, points to a hole \n");
								 while (getchar() != '\n');
								 while (getchar() != '\n');
								 printf("The hole is very small but look just big enough for me to crawl through\n");
								 while (getchar() != '\n');
								 printf("Now you must decide to follow the troll's lead and crawl or continue walking the tunnel \n");
								 while (getchar() != '\n');
								 cyan();
								 printf("______________________________________________________________________________________________________\n");
								 printf("Should you...\n");

								 //Determine the next steps for the game!
								 canContinue = true;
								 while (canContinue == true)
								 {
									 printf("1. Crawl through the hole?\n");
									 printf("2. Continue walking through the tunnel?\n");
									 int userInput = CollectNumericSelection(1, 2);
									 reset();

									 switch (userInput)
									 {
										 //crawl
									 case 1:
										 printf("You decide to crawl through the tiny hole.\n");
										 while (getchar() != '\n');
										 printf("Once you get to the other side, you notice a sack.\n");
										 while (getchar() != '\n');
										 printf("You open the sack and you become absolutely joyous!.\n");
										 while (getchar() != '\n');
										 printf("The sack contains a cooked piece of meat, a helmet, and.... garlic and a stake?.\n");
										 while (getchar() != '\n');
										 printf("Be wildered about the garlic and stake, you still decide to take all the items\n");
										 while (getchar() != '\n');
										 strcpy(type, "gFood");
										 pts = 50;
										 printAffects(Player, type, pts);
										 ITEM* meat = createItem("gFood", "meat", 50, Player);
										 reset();
										 strcpy(type, "defence");
										 pts = 30;
										 printAffects(Player, type, pts);
										 ITEM* helmet = createItem("defence", "helmet", 30, Player);
										 reset();
										 strcpy(type, "damage");
										 pts = 40;
										 printAffects(Player, type, pts);
										 ITEM* garlicStake = createItem("damage", "garlicStake", 40, Player);
										 reset();
										 free(meat);
										 free(helmet);
										 free(garlicStake);

										 printf("You notice the same sliver of light in the previous tunnel as you did in this one.\n");
										 while (getchar() != '\n');
										 printf("You walk towards wondering if this is the way out.\n");
										 while (getchar() != '\n');
										 printf("You get the the end of the tunnel and into this large area.\n");
										 while (getchar() != '\n');
										 printf("You look to the left of you and notice another tunnel, must've been the middle tunnel you were in before.\n");
										 while (getchar() != '\n');
										 printf("You see the end of the cave just on the other side of the area but...\n");
										 while (getchar() != '\n');
										 printf("Something is standing still just by the exit\n");
										 while (getchar() != '\n');
										 printf("It looks awfully lot like a vampire\n");
										 while (getchar() != '\n');
										 printf("The thing suddenly looks up and you and the creature lock eyes\n");
										 while (getchar() != '\n');
										 printf("In a instants moment, it charges towards you with it's sharp, bright fangs!\n");
										 while (getchar() != '\n');
										 printf("But it stops...\n");
										 while (getchar() != '\n');
										 printf("It looks at your right hand and notices you holding garlic and a stake\n");
										 while (getchar() != '\n');
										 printf("Turns out to be a vampire after all\n");
										 while (getchar() != '\n');
										 printf("This is it.\n");
										 while (getchar() != '\n');
										 printf("The vampire is the only thing standing in your way of getting to freedom\n");
										 while (getchar() != '\n');
										 printf("You have no choice but to fight this thing like your life depended on it\n");
										 while (getchar() != '\n');

										 int vampireHealth = 300;
										 int vampireID = 12;
										 char vampireName[MAX_NAME_SIZE] = "Dracula";
										 CHARACTER* vampire = CreateCharacter(vampireHealth, vampireID, vampireName);

										 bool loopAgain1 = true;

										 while (loopAgain1)
										 {
											 red();
											 getImage(vampire);
											 printf("\n");
											 printf("---------------------------------------------------------------\n");
											 printf("|    >Health: %d											  |\n", getMonsterHealth(vampire));
											 printf("|															  |\n");
											 printf("|    >Vampire damage required: 300							  |\n");
											 printf("|															  |\n");
											 printf("|    >They love the taste of blood							  |\n");
											 printf("|    >Especially human blood...								  |\n");
											 printf("|    >Make sure not to lose the garlic and stake			  |\n");
											 printf("|															  |\n");
											 printf("|    >Enter:												  |\n");
											 printf("|     The moon is my sun, and the night is my day.            |\n");
											 printf("|     Blood is my life and you are my prey.				      |\n");
											 printf("|     Don't let this blood sucking creature near you!		  |\n");
											 printf("|	  Will them away with all the power you've got!			  |\n");
											 printf("|															  |\n");
											 printf("---------------------------------------------------------------\n");
											 green();
											 printf("Player Health = %d\n", getHealth(Player));
											 reset();

											 while (getchar() != '\n');
											 double typingSpeed = 0.0;
											 char* sentenceTyped = GetInput(&typingSpeed);
											 double typingScore = CheckSentence(getSentence(vampire), //sentence to type
												 180, //sentence length
												 sentenceTyped, //users sentence entry
												 typingSpeed); //users typing speed
											 decreaseMonsterHealth((calculateDamage(Player, typingScore)), vampire);
											 if (getHealth(Player) <= 0)
											 {
												 loopAgain1 = false;
											 }
											 else if (getMonsterHealth(vampire) <= 0)
											 {
												 loopAgain1 = false;
											 }
										 }

										 //check to see the results of the battle
										 if (getHealth(Player) <= 0) //the monster killed you
										 {
											 red();
											 printf("____________________________________________\n");
											 printf("[YOU DIED(The vampire got your neck)]\n");
											 reset();
											 disposeCharacter(vampire);
											 return(0);
										 }
										 else //you defeated the monster!
										 {
											 while (getchar() != '\n');
											 printf("The vampire charges towards you but you were quick and dodged his attack\n");
											 while (getchar() != '\n');
											 printf("You are now behind him in the perfect spot to pierce this monster\n");
											 while (getchar() != '\n');
											 printf("You lift the stake and penetrate the vampire with it\n");
											 while (getchar() != '\n');
											 printf("The vampire falls and crumbles into dust right in front on your eyes\n");
											 while (getchar() != '\n');
											 while (getchar() != '\n');
											 printf("Tired but relieved.\n");
											 while (getchar() != '\n');
											 printf("You walk with the little energy you have left out of the tunnel and into the light\n");
											 while (getchar() != '\n');
											 printf("You see a castle in the not too far distance but you don't have the energy to make that trip just yet\n");
											 while (getchar() != '\n');
											 printf("So happy to see the sun again, you collapse and lay there resting...\n");
											 while (getchar() != '\n');
											 green();
											 printf("_________________________________________________________________________\n");
											 printf("[CONGRATULATIONS YOU HAVE SURVIVED LEVEL 3 - Trespassing Count's Cave!!!]\n");
											 reset();
											 disposeCharacter(vampire);
										 }
										 //walk
									 case 2:
										 printf("You decide you can't trust the troll and continue walking through the middle tunnel\n");
										 while (getchar() != '\n');
										 printf("You are absolutley tired after that battle and dragging your feet towards the light.\n");
										 while (getchar() != '\n');
										 printf("You reach the end of the tunnel and come into a very large area\n");
										 while (getchar() != '\n');
										 printf("You look to the right of you and notice another tunnel, you think that it must've been the right tunnel.\n");
										 while (getchar() != '\n');
										 printf("You see the end of the cave just on the other side of the area but...\n");
										 while (getchar() != '\n');
										 printf("Something is standing still just by the exit\n");
										 while (getchar() != '\n');
										 printf("It looks awfully lot like a vampire\n");
										 while (getchar() != '\n');
										 printf("The thing suddenly looks up and you and the creature lock eyes\n");
										 while (getchar() != '\n');
										 printf("In a instants moment, it charges towards you with it's sharp, bright fangs!\n");
										 while (getchar() != '\n');
										 red();
										 printf("_______________________________________________\n");
										 printf("[YOU DIED(the vampire sunk it's teeth into you)\n");
										 reset();
										 //SAVE GAME
										 return 0;
										 canContinue = false;
										 break;

										 //None of the menu options were selected
									 default:
										 printf("Invalid selction entered, please enter a number listen in the menu\n");
										 break;
									 }
								 }




								 //right
							 case 2:
								 printf("You decide to go through the right tunnel.\n");
								 while (getchar() != '\n');
								 printf("It is a whole lot of nothingness and echoing drip sounds.\n");
								 while (getchar() != '\n');
								 printf("As you continue walking, you notice a sliver of light.\n");
								 while (getchar() != '\n');
								 printf("Ecstatic, you start sprinting towards it!.\n");
								 while (getchar() != '\n');
								 printf("Then suddenly, you hear a laugh.\n");
								 while (getchar() != '\n');
								 printf("The laugh sounds like a child's laugh but much more maniacal.\n");
								 while (getchar() != '\n');
								 printf("You stop right in your tracks and start to become anxious.\n");
								 while (getchar() != '\n');
								 printf("You pick up a stone thinking it might come in handy soon.\n");
								 while (getchar() != '\n');
								 strcpy(type, "damage");
								 pts = 20;
								 printAffects(Player, type, pts);
								 ITEM* stone1 = createItem("damage", "stone", 20, Player);
								 reset();
								 free(stone1);

								 while (getchar() != '\n');

								 printf("The laugh continues to get louder and louder as you walk through the tunnel.\n");
								 while (getchar() != '\n');
								 printf("You stop dead in your tracks.\n");
								 while (getchar() != '\n');
								 printf("You see something, or in this case someone.\n");
								 while (getchar() != '\n');
								 printf("It looks like a child.\n");
								 while (getchar() != '\n');
								 printf("What would a child be doing here of all places? you wonder to yourself.\n");
								 while (getchar() != '\n');
								 printf("The child's back is turned to you.\n");
								 while (getchar() != '\n');
								 printf("You approach the child and tap them on the shoulder and ask if they are okay.\n");
								 while (getchar() != '\n');
								 printf("The child turns around!.\n");
								 while (getchar() != '\n');
								 printf("Frightened! you take a step back.\n");
								 while (getchar() != '\n');
								 printf("This is certainly no child, it's another creature!.\n");
								 while (getchar() != '\n');
								 printf("It looks just like a troll.\n");
								 while (getchar() != '\n');
								 printf("Laughing, the troll starts walking towards.\n");
								 while (getchar() != '\n');
								 printf("Get ready to defend yourself, you got another battle coming.\n");
								 while (getchar() != '\n');

								 int trollHealth1 = 60;
								 int trollID1 = 14;
								 char trollName1[MAX_NAME_SIZE] = "Troll";
								 CHARACTER* troll1 = CreateCharacter(trollHealth, trollID, trollName);


								 bool loopAgain2 = true;

								 while (loopAgain2)
								 {
									 blue();
									 getImage(troll1);
									 printf("\n");
									 printf("---------------------------------------------------------------\n");
									 printf("|    >Health: %d											  |\n", getMonsterHealth(troll1));
									 printf("|															  |\n");
									 printf("|    >Troll damage required: 60								  |\n");
									 printf("|															  |\n");
									 printf("|    >The troll loves laughing								  |\n");
									 printf("|    >Can't tell if they're crazy or						  |\n");
									 printf("|    >just want to have fun									  |\n");
									 printf("|															  |\n");
									 printf("|    >Enter:												  |\n");
									 printf("|     Don't let it's size fool you for one second.            |\n");
									 printf("|     Trolls in these parts might be miniature				  |\n");
									 printf("|     but they are fierce!									  |\n");
									 printf("|														      |\n");
									 printf("|															  |\n");
									 printf("---------------------------------------------------------------\n");
									 green();
									 printf("Player Health = %d\n", getHealth(Player));
									 reset();
									 while (getchar() != '\n');
									 double typingSpeed = 0.0;
									 char* sentenceTyped = GetInput(&typingSpeed);
									 double typingScore = CheckSentence(getSentence(troll1), //sentence to type
										 108, //sentence length
										 sentenceTyped, //users sentence entry
										 typingSpeed); //users typing speed
									 decreaseMonsterHealth((calculateDamage(Player, typingScore)), troll1);
									 if (getHealth(Player) <= 0)
									 {
										 loopAgain2 = false;
									 }
									 else if (getMonsterHealth(troll1) <= 0)
									 {
										 loopAgain2 = false;
									 }
								 }

								 //check to see the results of the battle
								 if (getHealth(Player) <= 0) //the monster killed you
								 {
									 red();
									 printf("____________________________________________\n");
									 printf("[YOU DIED(The Troll was too much to handle)]\n");
									 reset();
									 disposeCharacter(troll1);
									 return(0);
								 }
								 else //you defeated the monster!
								 {
									 green();
									 printf("______________________________________________\n");
									 printf("[CONGRATULATIONS(you defeated the Troll!)]\n");
									 reset();
									 disposeCharacter(troll1);
								 }
								 printf("You notice a sack attached to the troll.\n");
								 while (getchar() != '\n');
								 printf("You open the sack and you become absolutely joyous!.\n");
								 while (getchar() != '\n');
								 printf("The sack contains a cooked piece of meat, a helmet, and.... garlic and a stake?.\n");
								 while (getchar() != '\n');
								 printf("Be wildered about the garlic and stake, you still decide to take all the items\n");
								 while (getchar() != '\n');
								 strcpy(type, "gFood");
								 pts = 50;
								 printAffects(Player, type, pts);
								 ITEM* meat1 = createItem("gFood", "meat", 50, Player);
								 reset();
								 strcpy(type, "defence");
								 pts = 30;
								 printAffects(Player, type, pts);
								 ITEM* helmet1 = createItem("defence", "helmet", 30, Player);
								 reset();
								 strcpy(type, "gFood");
								 pts = 50;
								 printAffects(Player, type, pts);
								 ITEM* garlicStake1 = createItem("damage", "garlicStake", 40, Player);
								 reset();
								 free(meat1);
								 free(helmet1);
								 free(garlicStake1);

								 printf("You walk towards the light wondering if this is the way out.\n");
								 while (getchar() != '\n');
								 printf("You get the the end of the tunnel and into this large area.\n");
								 while (getchar() != '\n');
								 printf("You look to the left of you and notice another tunnel, must've been the middle tunnel.\n");
								 while (getchar() != '\n');
								 printf("You see the end of the cave just on the other side of the area but...\n");
								 while (getchar() != '\n');
								 printf("Something is standing still just by the exit\n");
								 while (getchar() != '\n');
								 printf("It looks awfully lot like a vampire\n");
								 while (getchar() != '\n');
								 printf("The thing suddenly looks up and you and the creature lock eyes\n");
								 while (getchar() != '\n');
								 printf("In a instants moment, it charges towards you with it's sharp, bright fangs!\n");
								 while (getchar() != '\n');
								 printf("But it stops...\n");
								 while (getchar() != '\n');
								 printf("It looks at your right hand and notices you holding garlic and a stake\n");
								 while (getchar() != '\n');
								 printf("Turns out to be a vampire after all\n");
								 while (getchar() != '\n');
								 printf("This is it.\n");
								 while (getchar() != '\n');
								 printf("The vampire is the only thing standing in your way of getting to freedom\n");
								 while (getchar() != '\n');
								 printf("You have no choice but to fight this thing like your life depended on it\n");
								 while (getchar() != '\n');

								 int vampireHealth1 = 300;
								 int vampireID1 = 12;
								 char vampireName1[MAX_NAME_SIZE] = "Dracula";
								 CHARACTER* vampire1 = CreateCharacter(vampireHealth1, vampireID1, vampireName1);

								 bool loopAgain3 = true;

								 while (loopAgain3)
								 {
									 red();
									 getImage(vampire1);
									 printf("\n");
									 printf("---------------------------------------------------------------\n");
									 printf("|    >Health: %d											  |\n", getMonsterHealth(vampire1));
									 printf("|															  |\n");
									 printf("|    >vampire damage required: 300							  |\n");
									 printf("|															  |\n");
									 printf("|    >They love the taste of blood							  |\n");
									 printf("|    >Especially human blood...								  |\n");
									 printf("|    >Make sure not to lose the garlic and stake			  |\n");
									 printf("|															  |\n");
									 printf("|    >Enter:												  |\n");
									 printf("|     The moon is my sun, and the night is my day.            |\n");
									 printf("|     Blood is my life and you are my prey.				      |\n");
									 printf("|     Don't let this blood sucking creature near you!		  |\n");
									 printf("|	  Will them away with all the power you've got!			  |\n");
									 printf("|															  |\n");
									 printf("---------------------------------------------------------------\n");
									 green();
									 printf("Player Health = %d\n", getHealth(Player));
									 reset();
									 while (getchar() != '\n');
									 double typingSpeed = 0.0;
									 char* sentenceTyped = GetInput(&typingSpeed);
									 double typingScore = CheckSentence(getSentence(vampire1), //sentence to type
										 180, //sentence length
										 sentenceTyped, //users sentence entry
										 typingSpeed); //users typing speed
									 decreaseMonsterHealth((calculateDamage(Player, typingScore)), vampire1);
									 if (getHealth(Player) <= 0)
									 {
										 loopAgain3 = false;
									 }
									 else if (getMonsterHealth(vampire1) <= 0)
									 {
										 loopAgain3 = false;
									 }
								 }

								 //check to see the results of the battle
								 if (getHealth(Player) <= 0) //the monster killed you
								 {
									 red();
									 printf("____________________________________________\n");
									 printf("[YOU DIED(The vampire got your neck)]\n");
									 reset();
									 disposeCharacter(vampire1);
									 return(0);
								 }
								 else //you defeated the monster!
								 {
									 while (getchar() != '\n');
									 printf("The vampire charges towards you but you were quick and dodged his attack\n");
									 while (getchar() != '\n');
									 printf("You are now behind him in the perfect spot to pierce this monster\n");
									 while (getchar() != '\n');
									 printf("You lift the stake and penetrate the vampire with it\n");
									 while (getchar() != '\n');
									 printf("The vampire falls and crumbles into dust right in front on your eyes\n");
									 while (getchar() != '\n');
									 while (getchar() != '\n');
									 printf("Tired but relieved.\n");
									 while (getchar() != '\n');
									 printf("You walk with the little energy you have left out of the tunnel and into the light\n");
									 while (getchar() != '\n');
									 printf("You see a castle in the not too far distance but you don't have the energy to make that trip just yet\n");
									 while (getchar() != '\n');
									 printf("So happy to see the sun again, you collapse and lay there resting...\n");
									 while (getchar() != '\n');
									 green();
									 printf("_________________________________________________________________________\n");
									 printf("[CONGRATULATIONS YOU HAVE SURVIVED LEVEL 3 - Trespassing Count's Cave!!!]\n");
									 reset();
									 disposeCharacter(vampire1);
								 }
								 //None of the menu options were selected
							 default:
								 printf("Invalid selction entered, please enter a number listen in the menu\n");
								 break;
							 }
						 }


						 //walk fast
				 case 2:
					 printf("You think the best thing to do is to start walking fast.\n");
					 while (getchar() != '\n');
					 while (getchar() != '\n');

					 printf("The bat continues following you.\n");
					 while (getchar() != '\n');
					 printf("You run into a dead end and are reluctant to turn around and face the bat.\n");
					 while (getchar() != '\n');
					 printf("But you have no choice, you must turn back and sprint!\n");
					 while (getchar() != '\n');
					 printf("You turn around prepared to run, but as soon as you do, the bat lunges at you with lighnting speed\n");
					 while (getchar() != '\n');
					 red();
					 printf("___________________________________________\n");
					 printf("[YOU DIED(the bat got your neck)\n");
					 reset();
					 //SAVE GAME
					 return 0;
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
					 printf("2. Continue to level 4\n");
					 int userInput = CollectNumericSelection(1, 2);
					 switch (userInput)
					 {
						 //Save and exit
					 case 1:
						 printf("Saving game...\n");
						 canContinue = false;
						 FILE* fp = fopen("PlayerData.txt", "w");
						 if (!fp) {
							 printf("can not open file!\n");
						 }
						 savePlayer(Player, fp);
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
		 }
	 }
		 
	//Play level 4---------------------------------------------------------------------------------------------------------------------------------------------------------------------
	 if (storyLevelToPlay == LEVEL_FOUR)
	 {
		 red();
		 printf("                                                  !_\n");
		 printf("                                                  |*~=-.,\n");
		 printf("                                                  |_,-'`\n");
		 printf("                                                  |\n");
		 printf("                                                  |\n");
		 printf("                                                 /^\\\n");
		 printf("                   !_                           /   \\\n");
		 printf("                   |*`~-.,                     /,    \\\n");
		 printf("                   |.-~^`                     /#\"     \\\n");
		 printf("                   |                        _/##_   _  \\_\n");
		 printf("              _   _|  _   _   _            [ ]_[ ]_[ ]_[ ]\n");
		 printf("             [ ]_[ ]_[ ]_[ ]_[ ]            |_=_-=_ - =_|\n");
		 printf("           !_ |_=_ =-_-_  = =_|           !_ |=_= -    |\n");
		 printf("           |*`--,_- _        |            |*`~-.,= []  |\n");
		 printf("           |.-'|=     []     |   !_       |_.-\"`_-     |\n");
		 printf("           |   |_=- -        |   |*`~-.,  |  |=_-      |\n");
		 printf("          /^\\  |=_= -        |   |_,-~`  /^\\ |_ - =[]  |\n");
		 printf("      _  /   \\_|_=- _   _   _|  _|  _   /   \\|=_-      |\n");
		 printf("     [ ]/,    \\[ ]_[ ]_[ ]_[ ]_[ ]_[ ]_/,    \\[ ]=-    |\n");
		 printf("      |/#\"     \\_=-___=__=__- =-_ -=_ /#\"     \\| _ []  |\n");
		 printf("     _/##_   _  \\_-_ =  _____       _/##_   _  \\_ -    |\\\n");
		 printf("    [ ]_[ ]_[ ]_[ ]=_0~{_ _ _}~0   [ ]_[ ]_[ ]_[ ]=-   | \\\n");
		 printf("    |_=__-_=-_  =_|-=_ |  ,  |     |_=-___-_ =-__|_    |  \\\n");
		 printf("     | _- =-     |-_   | ((* |      |= _=       | -    |___\\\n");
		 printf("     |= -_=      |=  _ |  `  |      |_-=_       |=_    |/+\\|\n");
		 printf("     | =_  -     |_ = _ `-.-`       | =_ = =    |=_-   ||+||\n");
		 printf("     |-_=- _     |=_   =            |=_= -_     |  =   ||+||\n");
		 printf("     |=_- /+\\    | -=               |_=- /+\\    |=_    |^^^|\n");
		 printf("     |=_ |+|+|   |= -  -_,--,_      |_= |+|+|   |  -_  |=  |\n");
		 printf("     |  -|+|+|   |-_=  / |  | \\     |=_ |+|+|   |-=_   |_-/\n");
		 printf("     |=_=|+|+|   | =_= | |  | |     |_- |+|+|   |_ =   |=/\n");
		 printf("     | _ ^^^^^   |= -  | |  <&>     |=_=^^^^^   |_=-   |/\n");
		 printf("     |=_ =       | =_-_| |  | |     |   =_      | -_   |\n");
		 printf("     |_=-_       |=_=  | |  | |     |=_=        |=-    |\n");
		 printf("^^^^^^^^^^`^`^^`^`^`^^^\"\"\"\"\"\"\"\"^`^^``^^`^^`^^`^`^``^`^``^``^^");
		 printf("|                                                                                                                            |\n");
		 printf("|                                                                 |\n");
		 printf("|                                  Level 4: The Castle            |\n");
		 printf("|                                                                 |\n");
		 printf("|                           Hint: Try Not to Die!!!!              |\n");
		 printf("|                                                                 |\n");
		 printf("|_________________________________________________________________|\n");
		 reset();

		 printf("\nYou finally made it!\n");
		 while (getchar() != '\n');
		 printf("You made it to the castle!\n");
		 while (getchar() != '\n');
		 printf("You think to yourself, that this must be the end\n");
		 while (getchar() != '\n');
		 printf("But then you begin to feel your hands to begin to tremble, and a erie feeling washes over you\n");
		 while (getchar() != '\n');
		 printf("You wonder how this world has already put your mind and body through hell\n");
		 while (getchar() != '\n');
		 printf("you begin to feel helpless, but then you realize that self pity isn't going to save you.\n");
		 while (getchar() != '\n');
		 printf("You think about how you made it this far, and that the only productive thing to do is to keep going .\n");
		 while (getchar() != '\n');
		 printf("You open the door, and walk into the castle.\n");
		 while (getchar() != '\n');
		 printf("The door shuts quickly behind you, and the door handle is no where to be seen, you think about how that isn't a good user experience design....\n");
		 while (getchar() != '\n');
		 cyan();
		 printf("______________________________________________________________________________________________________\n");
		 printf("You enter the enterance room of the castle, you hear a voice call out from the red door next to you; where do you go next?\n");
		 printf("   1. Go towards the voice and go through the red door.\n");
		 printf("   2. ignore the voice and go up the stair case.\n");
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
				 printf("You decide that going towards the voice through the red door is the best option\n");
				 while (getchar() != '\n');
				 printf("You open the door and see a little girl crying in the corner\n");
				 while (getchar() != '\n');
				 printf("You begin to walk towards her and she turns arounds and screams!\n");
				 while (getchar() != '\n');
				 printf("She lunges towards you and you must defend your self!\n");
				 while (getchar() != '\n');
				 //Crying child Character
				 int cryChildhealth = 75;
				 int cryChildID = 8;
				 char cryChildName[MAX_NAME_SIZE] = "Crying Child";
				 CHARACTER* cryChild = CreateCharacter(cryChildhealth, cryChildID, cryChildName);
				 bool loopAgain = true;

				 while (loopAgain)
				 {
					 yellow();
					 getImage(cryChild);
					 printf("--------------------------------------------------------------------------------------------------\n");
					 printf("|    > Health: %d                                                                               |\n", getMonsterHealth(cryChild));
					 printf("|                                                                                                |\n");
					 printf("|    > crying child's Damage Required: 75                                                        |\n");
					 printf("|                                                                                                |\n");
					 printf("|    > The crying child wields her                                                               |\n");
					 printf("|    > acid tears, so don't let her cry on your shoulder!                                        |\n");
					 printf("|                                                                                                |\n");
					 printf("|    > Enter:                                                                                    |\n");
					 printf("|       The crying child shoots tears faster than a                                              |\n");
					 printf("|       bullet, it even burned right through the wall.                                           |\n");
					 printf("|       You ended up finding a load of sand in your pockets from the beach,                      |\n");
					 printf("|       so then you throw that sand into her eyes the clumping sand from the acid tears,         |\n");
					 printf("|       stops her in her tracks.                                                                 |\n");
					 printf("--------------------------------------------------------------------------------------------------\n");
					 green();
					 printf("Player Health = %d", getHealth(Player));
					 yellow();

				while (getchar() != '\n');
				double typingSpeed = 0.0;
				char* setenceTyped = GetInput(&typingSpeed);
				double typingScore = CheckSentence(getSentence(cryChild), //sentence to type
					266, //sentence length
					setenceTyped, //users sentence entry
					typingSpeed); //users typing speed
				reset();
				decreaseMonsterHealth(calculateDamage(Player, typingScore), cryChild);
				if (getHealth(Player) <= 0)
				{

						 loopAgain = false;
					 }
					 else if (getMonsterHealth(cryChild) <= 0)
					 {

						 loopAgain = false;
					 }
				 }

				 //check to see the results of the battle
				 if (getHealth(Player) <= 0) //the monster killed you
				 {
					 red();
					 printf("The acid burned right down to your bones........\n");
					 printf("You DIED...\n");
					 reset();
					 return 0;
				 }
				 else //you defeated the monster!
				 {
					 green();
					 printf("Congratulations You defeated the crying child!!\n");
					 reset();
				 }


				 reset();


			canContinue = true;
			userInput = 3;
			while (getchar() != '\n');
			printf("You survived! she must've ran away after getting the sand in her eyes, but it seems she may have dropped something.\n");
			while (getchar() != '\n');
			printf("It looks like a tear shaped chain, should you pick it up ??\n");
			while (getchar() != '\n');
			
			strcpy(type, "damage");
			pts = 50;
			printAffects(Player, type, pts);


			ITEM* TearBuff = createItem(type, "Tear Chain", pts, Player);
			printf("You make your way back to where you came through the red door, I guess I should walk up the stairs as my only option\n");
			//Choice 2
		case 2:
			while (getchar() != '\n');
			printf("You begin to walk up the stairs.\n");
			while (getchar() != '\n');
			printf("Each step creaks with the slightest amount of pressure.\n");
			while (getchar() != '\n');
			printf("\n");
			while (getchar() != '\n');
			printf("creek creeeeek CRACKKKKK\n");
			while (getchar() != '\n');
			printf("The stairs collaspe beneath you\n");
			while (getchar() != '\n');
			printf("You land on your back and your struck with a pain\n");
			while (getchar() != '\n');
			printf("You lose 10 health because of that fall.\n");
			while (getchar() != '\n');
			printAffects(Player, "bFood", 10);
			Player->Health -= 10;
			//check if the player's health is below 0, if so exit the program.
			if (Player->Health < 0) {
				red();
				printf("You DIED!!: I guess you can't even trust stairs anymore....\n");
				reset();
			}
			printf("You are trying to collect yourself after that sudden fall, but then you hear a sound of footsteps\n");
			while (getchar() != '\n');
			printf("They begin to get louder with each passing second, your hands begin to tremble\n");
			while (getchar() != '\n');
			printf("You notice that there is a spot to hide underneath the ruble of the stairs, or you can always just prepare for the worst and prepare to fight what ever comes through the doorway\n");
			while (getchar() != '\n');

			//Determine the next steps for the game!
			cyan();
			canContinue = true;
			while (canContinue == true)
			{
				printf("1. Hide under the destroyed stairs?\n");
				printf("2. Prepare to fight what ever comes through that door?\n");
				
				int userInput = CollectNumericSelection(1, 2);
				switch (userInput)
				{
			
			
				case 1:
					reset();
					printf("You chose to hide, just in time for a large shadowy figure to walk in through a hidden door, this door wasn't there before\n");
					while (getchar() != '\n');
					printf("The shadowy figure walks in but doesn't seem to look directly at you or the stairs, it begins to walk and accidently trips over the rubble\n");
					while (getchar() != '\n');
					printf("You think to your self maybe it can't see very well, because how would it not see the rubble in front of it\n");
					while (getchar() != '\n');
					printf("You see that this may be your chance to make a break for it, but you must figure out how to keep it from hearing you\n");
					while (getchar() != '\n');
					printf("The screams that you heard from the red door before becomes even louder, and it distracted the shadowy figure enough for it to go into the room\n");
					while (getchar() != '\n');
					printf("You sucessfully escaped the room and now your in a totally different room, but it seems like it is the right way to go\n");
					while (getchar() != '\n');
					printf("The door way leads to a stair case, made of stone luckily\n");
					while (getchar() != '\n');
					canContinue = false;
					break;
			
				case 2:
					reset();
					printf("You stand still, as the shadowy figure walks through a hidden door, this door wasn't there before\n");
					while (getchar() != '\n');
					printf("This shadowy figure doesn't look at you but it seems like it may be listening so you hold your breath\n");
					while (getchar() != '\n');
					printf("unfortunately you aren't an Olympic swimmer so you can only hold your breath for a few seconds\n");
					while (getchar() != '\n');
					printf("You begin to try to make a run for it to the door that just opened but this shadowy figure heared you begin to run and pounced on you with insane speeds\n");
					while (getchar() != '\n');

					//CREATE SHADOWY FIGURE MONSTER HERE <-- Damage to defeat 125
					int shadowhealth = 125;
					int shadowID = 10;
					char shadowName[MAX_NAME_SIZE] = "Shadow Man";
					CHARACTER* shadowMan = CreateCharacter(shadowhealth, shadowID, shadowName);
					bool loopAgain = true;



					while (loopAgain)
					{
						yellow();
						getImage(shadowMan);
						printf("\n");
						printf("----------------------------------------------------------------------------------------------------------------------------------------------\n");
						printf("|    > Health: %d                                                                                                                            |\n", getMonsterHealth(shadowMan));
						printf("|                                                                                                                                            |\n");
						printf("|    > Shadow Man Damage Required: 125                                                                                                       |\n");
						printf("|                                                                                                                                            |\n");
						printf("|    > Now that you can see it up close, it seems                                                                                            |\n");
						printf("|    > That its speed comes from its shoes!!                                                                                                 |\n");
						printf("|                                                                                                                                            |\n");
						printf("|    > Enter:                                                                                                                                |\n");
						printf("|     The monster came towards you with breakneck speeds!                                                                                    |\n");
						printf("|      But you remember that it must be blind since it didn't attack till you moved,                                                         |\n");
						printf("|      so you pick up a piece of wood from the stairs and threw it to the corner                                                             |\n");
						printf("|       it sprinted towards the wood thinking it was you.                                                                                    |\n");
						printf("----------------------------------------------------------------------------------------------------------------------------------------------\n");
						green();
						printf("Player Health = %d\n", getHealth(Player));
						yellow();
						//The monster came towards you with breakneck speeds! But you remember that it must be blind since it didn't attack till you moved, so you pick up a piece of wood from the stairs and throw it to the corner  it sprinted towards the wood thinking it was you, then you escaped through the door and closed it behind you!
						while (getchar() != '\n');
						double typingSpeed = 0.0;
						char* setenceTyped = GetInput(&typingSpeed);
						double typingScore = CheckSentence(getSentence(shadowMan), //sentence to type
						 255, //sentence length
							setenceTyped, //users sentence entry
							typingSpeed); //users typing speed
						reset();
						decreaseMonsterHealth(calculateDamage(Player, typingScore), shadowMan);
						if (getHealth(Player) <= 0)
						{

							loopAgain = false;
						}
						else if (getMonsterHealth(shadowMan) <= 0)
						{

							loopAgain = false;
						}
					}

					//check to see the results of the battle
					if (getHealth(Player) <= 0) //the monster killed you
					{
						red();
						printf("The Shadow man Destroyed you........\n");
						printf("You DIED...\n");
						reset();
						return 0;
					}
					else //you defeated the monster!
					{
						printf("then you escaped through the door and closed it behind you!\n");
						green();
						printf("Congratulations You defeated the ShadowMan!!\n");
						printf("He dropped his speedy shoes, and you pick it up!\n");
						strcpy(type, "damage");
						pts = 50;
						printAffects(Player, type, pts);


						ITEM* speedyShoes = createItem(type, "Speedy Shoes", pts, Player);
						reset();
					}

					printf("The door way leads to a stair case, made of stone luckily\n");
					canContinue = false;
					break;
					//None of the menu options were selected
				default:
					printf("Invalid selction entered, please enter a number listen in the menu\n");
					break;
				}
			}
			printf("You begin to make your way down the stairs, it is still too dark to see the bottom\n");
			while (getchar() != '\n');
			printf("But as you make your way down it seems to get more damp and cold\n");
			while (getchar() != '\n');
			printf("you are cautious with every step towards the bottom, then\n");
			while (getchar() != '\n');
			printf("after all those spiaralling stairs you finally see some light\n");
			while (getchar() != '\n');
			printf("You make it down the stairs and it seems like a dungeon room, you peer over and see a chest.\n");
			while (getchar() != '\n');
			printf("Should you open it?\n");
			while (getchar() != '\n');
			printf("Should you...\n");


			//Determine the next steps for the game!
			canContinue = true;
			while (canContinue == true)
			{
				printf("1. Walk away and don't open it\n");
				printf("2. Open it and get the great LOOT\n");
				int userInput = CollectNumericSelection(1, 2);
				switch (userInput)
				{
					//Board choice
				case 1:
					reset();
					printf("You chose to walk further into the dungeon, hoping to find a way out without heading back up the stairs\n");
					while (getchar() != '\n');
					printf("You see that there is an old elevator in the dungeon that seems like it could be useful\n");
					while (getchar() != '\n');
					printf("You think about how that only important people need elevators so that person might be able to help you get out of this place!\n");
					while (getchar() != '\n');
					printf("So you enter the elevator and press going up\n");
					while (getchar() != '\n');
					canContinue = false;
					break;
					//Rock choice
				case 2:
					reset();
					printf("You sprint towards the chest excited for the awesome loot, feeling thankful that this hellish world is finally treating you with good fortune\n");
					while (getchar() != '\n');
					printf("But. as some say nothing is ever free\n");
					while (getchar() != '\n');
					printf("You open the chest or what you thought was a chest, and all you see is teeth and a tounge for some reason\n");
					while (getchar() != '\n');
					printf("You think about how something like that must be a living thing, but just before it lunges towards you trying to snap your head in the box\n");
					while (getchar() != '\n');
					printf("You dodge it, and creating some distance between you both\n");
					while (getchar() != '\n');
					printf("Your only option is to fight, so you prepare yourself for a tough battle.\n");
					while (getchar() != '\n');

					//CREATE Chesty the Great Loot MONSTER HERE <-- Damage to defeat 125
					int Chestyhealth = 200;
					int ChestyID = 9;
					char ChestyName[MAX_NAME_SIZE] = "Chesty";
					CHARACTER* Chesty = CreateCharacter(Chestyhealth, ChestyID, ChestyName);
					bool loopAgain = true;



					while (loopAgain)
					{
						yellow();
						getImage(Chesty);
						printf("\n");
						printf("-------------------------------------------------------------------------------------------------------------\n");
						printf("|    > Health: %d                                                                                          |\n", getMonsterHealth(Chesty));
						printf("|                                                                                                           |\n");
						printf("|    > Chesty the Great Loot Damage Required: 200                                                           |\n");
						printf("|                                                                                                           |\n");
						printf("|    > The monster seems to be made of wood                                                                 |\n");
						printf("|    > The chest opening seems to be its mouth don't put your head into there                               |\n");
						printf("|                                                                                                           |\n");
						printf("|    > Enter:                                                                                               |\n");
						printf("|     You see that it doesn't have any legs, but to move around it is shifting its weight to throw itself,  |\n");
						printf("|      you must figure out how to stop it, from killing you. So you sprint towards it                       |\n");
						printf("|      , not allowing it to get a chance to attack by sliding and kicking the chest over on its side.       |\n");             
						printf("-------------------------------------------------------------------------------------------------------------\n");
					green();
					printf("Player Health = %d\n", getHealth(Player));
					yellow();
					//The monster came towards you with breakneck speeds! But you remember that it must be blind since it didn't attack till you moved, so you pick up a piece of wood from the stairs and throw it to the corner  it sprinted towards the wood thinking it was you, then you escaped through the door and closed it behind you!
					while (getchar() != '\n');
					double typingSpeed = 0.0;
					char* setenceTyped = GetInput(&typingSpeed);
					double typingScore = CheckSentence(getSentence(Chesty), //sentence to type
						275, //sentence length
						setenceTyped, //users sentence entry
						typingSpeed); //users typing speed
					reset();
					decreaseMonsterHealth(calculateDamage(Player, typingScore), Chesty);
					if (getHealth(Player) <= 0)
					{

						loopAgain = false;
					}
					else if (getMonsterHealth(Chesty) <= 0)
					{

						loopAgain = false;
					}
					}

					//check to see the results of the battle
					if (getHealth(Player) <= 0) //the monster killed you
					{
						red();
						printf("The Chesty man Destroyed you........\n");
						printf("You DIED...\n");
						reset();
						return 1;
					}
					else //you defeated the monster!
					{
						green();
						printf("Congratulations You defeated the Chesty man monster!!\n");
			
						reset();
					}

		 //INSERT SOME SORT OF LOOP TO KEEP BACK IF MONSTER NOT DEFEATED!!!!!!!!!!!!!!!!!!!!!!!

					
					printf("You see that the monster dropped a sword, this would help in future battles\n");
					//INSERT CHOICE TO PICK UP THE SWORD IF SO +50 DAMAGE
					strcpy(type, "damage");
					pts = 50;
					printAffects(Player, type, pts);


					ITEM* sword = createItem(type, "Sword", pts, Player);

						 printf("You begin to walk further into the dungeon, hoping to find a way out without heading back up the stairs\n");
						 while (getchar() != '\n');
						 printf("You see that there is an old elevator in the dungeon that seems like it could be useful\n");
						 while (getchar() != '\n');
						 printf("You think about how that only important people need elevators so that person might be able to help you get out of this place!\n");
						 while (getchar() != '\n');
						 printf("So you enter the elevator and press going up\n");
						 while (getchar() != '\n');

						 canContinue = false;
						 break;
						 //None of the menu options were selected
					 default:
						 printf("Invalid selction entered, please enter a number listen in the menu\n");
						 break;
					 }
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
		cyan();
		printf("1. Pry open the door and jump?\n");
		printf("2. Go to the top floor of the castle?\n");
		int userInput = CollectNumericSelection(1, 2);
		switch (userInput)
		{
			//Walk over to clif choice
		case 1:
			reset();
			printf("You decide to pry open the door and jump!\n");
			while (getchar() != '\n');
			while (getchar() != '\n');
			printf("That sounds like a great idea, because then you would be able to use your flight abilities to fly faster than the elevator!!\n");
			while (getchar() != '\n');
			printf("Lets try it!\n");
			while (getchar() != '\n');
			printf("You begin to pry open the door it, opens right up inviting you to jump and fly!\n");
			while (getchar() != '\n');
			printf("So then you braced yourself to jump, all common sense and reality has gone out the window\n");
			while (getchar() != '\n');
			printf("You jump and fall down......\n");
			while (getchar() != '\n');
			printf("To your death obviously..\n");
			while (getchar() != '\n');
			red();
			printf("_________________________________________________________\n");
			printf("[YOU DIED(Thought you could fly, for somereason)]\n");
			reset();
			
			return (1);
			canContinue = false;
			break;
		case 2:
			reset();
			printf("You chose to head towards the top of the castle.\n");
			while (getchar() != '\n');
			while (getchar() != '\n');
			printf("After what felt like 10 mins you reached the top, you were almost driven to insanity from the elevator music alone.\n");
			while (getchar() != '\n');
			printf("The elevator, opens up and it is the top of the castle.\n");
			while (getchar() != '\n');
			printf("It is quite windy and you observe the landscapes, but then you think to yourself why is there a elevator to the top of the castle.\n");
			while (getchar() != '\n');
			printf("Then the air stands still, your hairs begin to stand up in fear, something with such great power is coming..\n");
			while (getchar() != '\n');
			printf("Oh no you  think to yourself I need to hide, or figure out a way out. you turn to the elevator behind you and it seem to have disappeared totally.\n");
			while (getchar() != '\n');
			printf("as the great power gets closer you begin to tremble, and then you see it, its a dragon flying directly towards the top of the castle.\n");
			while (getchar() != '\n');
			printf("You are struck with fear and un able to move, the great power of this foe is immeasurable to all of the previous.\n");
			while (getchar() != '\n');
			printf("The dragon finally reaches the castle and lands infront of you with such power the ground shakes beneath you\n");
			while (getchar() != '\n');
			printf("The dragon looks at you and begins to speak....\n");
			while (getchar() != '\n');
			printf(" '' who are you? why are you on my castle, messing around is the exact thing thats going to get you killed!''\n");
			while (getchar() != '\n');
			printf("what do you say back?\n");
			canContinue = true;
			while (canContinue == true)
			{
				cyan();
				printf("1. ''Im sorry dragon, I have been just wondering around this place trying to find a way out, I have been tortured and beaten throughout this whole journey and I just want to get home safe''\n");
				printf("2. ''Get ready to die dragon, I am the typing king, inherited my typing skills from my father OMAR, so you better watch out or your death will be a horrific one....''\n");
				int userInput = CollectNumericSelection(1, 2);
				switch (userInput)
				{
						case 1:
							reset();
							printf("''Oh I see'' says the dragon, well I think we can figure somthing out..\n");
							while (getchar() != '\n');
							printf("Hmmmmmmmmm.........\n");
							while (getchar() != '\n');
							printf("''Well I am lacking a bit of human friends, I don't have any, I eat them before we can talk, but that birthday hat you have on, is it your birthday?''\n");
							while (getchar() != '\n');
							printf("''Because I love birthday parties and If you party with me then ill take you home because thats what friends do!''\n");
							while (getchar() != '\n');
							printf("what do you say back?\n");
							canContinue = true;
							//END THE GAME THE GOOD ENDING YOU BEFRIEND THE BOSS AND HAVE A HAPPY BIRTHDAY
									
							printf("The story has ended, your player has befriended a dragon, one of the most sacred mythlogical beasts, the world was full of anger, evil beings but they never stopped and talked to you first\n");
							printf("Thats what ended different, others resorted right to volience and resulted you to attack with same force. But don't worry you chose a passive ending, some say this was the right choice\n");
							printf("Or others think it was no point, anyways what choice you made was the right choice!.\n");
							green();
							printf("THE END YOU COMPLETED THE FINAL LEVEL\n");
							reset();
							return 1;
									//delete save and restart the game,

							return 0;
									canContinue = false;
									break;
								
								case 2:
									reset();
									printf("''Oh.... well I like the bravery, too bad thats going to be the thing that kills you....''\n");
									while (getchar() != '\n');
									printf("The dragon is preparing to attack, you must fight and win!\n");
									while (getchar() != '\n');
									printf("Or this dragon is going to burn you to a crisp\n");
									while (getchar() != '\n');
									printf("So you prepare to fight!!\n");
									
									int Draghealth = 400;
									int DragID = 11;
									char DragName[MAX_NAME_SIZE] = "Dragon";
									CHARACTER* Drag = CreateCharacter(Draghealth, DragID, DragName);
									bool loopAgain = true;



									while (loopAgain)
									{
										yellow();
										getImage(Drag);
										printf("\n");
									printf("--------------------------------------------------------------------------------------------------------\n");
									printf("|    > Health: %d                                                                                     |\n", getMonsterHealth(Drag));
									printf("|                                                                                                      |\n");
									printf("|                                                                                                      |\n");
									printf("|    >This dragon is breathing fire,                                                                   |\n");
									printf("|    >Don't let the fire hit you and                                                                   |\n");
									printf("|    >Watch out or this will be your end.                                                              |\n");
									printf("|                                                                                                      |\n");
									printf("|    >Enter:                                                                                           |\n");
									printf("|      Flames, fire, lava, all the things hotter than this,                                            |\n");
									printf("|      You begin to attack, but whenever you get close you can feel the heat.                          |\n");
									printf("|      If you don't attack now you will be the next thing to burn, So jump into action first,          |\n");
									printf("|       attack it's feet then slice at it's chest.                                                     |\n");
									printf("--------------------------------------------------------------------------------------------------------\n");
									green();
									printf("Player Health = %d\n", getHealth(Player));
									yellow();
									
							
									//The monster came towards you with breakneck speeds! But you remember that it must be blind since it didn't attack till you moved, so you pick up a piece of wood from the stairs and throw it to the corner  it sprinted towards the wood thinking it was you, then you escaped through the door and closed it behind you!
									while (getchar() != '\n');
									double typingSpeed = 0.0;
									char* setenceTyped = GetInput(&typingSpeed);
									double typingScore = CheckSentence(getSentence(Drag), //sentence to type
										275, //sentence length
										setenceTyped, //users sentence entry
										typingSpeed); //users typing speed
									reset();
									decreaseMonsterHealth(calculateDamage(Player, typingScore), Drag);
									if (getHealth(Player) <= 0)
									{

										loopAgain = false;
									}
									else if (getMonsterHealth(Drag) <= 0)
									{

										loopAgain = false;
									}
									}

									//check to see the results of the battle
									if (getHealth(Player) <= 0) //the monster killed you
									{
										red();
										printf("The Dragon Burned you to a crisp........\n");
										printf("You DIED...\n");
										reset();
										return 0;
									}
									else //you defeated the monster!
									{
										printf(" steam shoots out of its wounds. With this final blow slice with all the power you can use, this is it, this is the final shot!\n");
										printf("He dropped his speedy shoes, and you pick it up!\n");
										while (getchar() != '\n');
										printf("This must be the end of this hellish world!\n");
										while (getchar() != '\n');
										printf("The dragon lays their slain, but it should feel satisfying or something but you feel nothing according to this so called victory.\n");
										while (getchar() != '\n');
										printf("The dragon, then lifts up its head while you are distracted, it only laid there to act if it was slain, to charge an attack against you");
										while (getchar() != '\n');
										printf("You just realized that this was an attack and tried to make an effort to escape but it was too late......\n");
										while (getchar() != '\n');
										printf("You were shot off with a blast that ended the story, the story of victory or demise, but sometimes the story doesn't end how it ends in a fairy tail");
										while (getchar() != '\n');
										printf("sometimes a tragic story has a tragic ending, this is the end of suffering from the player, and the rest of the world will live on... \n");
										while (getchar() != '\n');
										printf("______________________________________________________________________\n");
										printf("[The End...... Thanks for playing]\n");
									   printf("Creators:\n Brodin Collins-Robb\n Owen Garland\n Raghu Podipireddy \n Tyler Scheifley  ");
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



							return(0);
						}
					}
				}
			
		
	//Invalid Level---------------------------------------------------------------------------------------------------------------------------------------------------------------------
	if(storyLevelToPlay < 1 || storyLevelToPlay > 4)
	{
		fprintf(stderr, "An error occured when attempted to load a story. Ensure that a valid story number is entered (1-4)\n");
		
	}

	return(0);
	
	

}