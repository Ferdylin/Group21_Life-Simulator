# LiveLaughLove_Life-Simulator
## 1. Team members
### Author(s): 
1. Wu Hanbo 3035834876
2. Chen Huiwen 3035790642
3. Xu Qingluo 3035908108
4. Tang Chengxin 3035845162
5. Lin Junyan 3035750018

## 2. Game introduction
Some lives are uneventful, some are bumpy, yet for most people, life is a path with no turning back and every choice is crucial to life.
This game simulates life from the age of 13 to 36, giving players a chance to restart their lives. Different choices will lead to changes in personal parameters, resulting in a variety of endings, allowing players to experience different life.

For university students nowadays, they are overconsumed with the anger of having to stay up late for revision, cracking that assignment, and landing a prestigious internship! Of course this shouldn't be the only thing that you care about, there should be much more to life than that right? Like getting a divorce or breaking up with your other half (Just joking:)). But anyways, we truly want you to experience your life in your 20s as well as your 30s to discover what alternative paths you could probably take to make your life less miserable:). 

Please enjoy this game, you can simply download this zipfile and cd to the directory, then type in 'make play' to start off the game, can't wait to see what you will accomplish in this game!!

## 3. Game rules
#### The age range from the beginning to the end: 13-36
1. Character stats will be made up of three variables:  
    health/wealth/satisfaction, Each variable will have a value between 0 and 3 (They cannot go beyond 3 or go below 0).

2. At the beginning of the game, the player will choose whether to load a fresh game (by entering '1') or a saved game (by entering '2').

3. If the user decides to load a new game, they must provide the name of an empty.txt file or a.txt file that does not exist in the current directory (eg: save.txt). This is the file that will be loaded if the user decides to load a saved game in a subsequent run.

4. If the user wishes to load a previously saved game, they must provide the name of a.txt file in which the game progress was previously stored.
The new game begins with a character at the age of 13 with upgradable attributes.

5. After each age is completed, the user enters '1' at the conclusion of each year to grow up and progress to the next age. The user may also quit and save the game by pressing '2'.

6. Each year, random events will be generated: events in the four "main" years will be determined by character attributes and will consist solely of choice-based events.

7. Random events will be chosen at random from a library of presets, and will comprise of statement- and choice-based events.
The user will be presented with a selection of replies to choice-based events from which to choose.

8. To choose it, the user enters a number matching to the answer of their choosing.

9. Each option may have an effect on one or more variables of the character's stats.

10. The user may view the.txt file that was used to save the game as a summary at the conclusion of the game.

## Features included in the code of our life simulator game

1. The player can make choices according to their own wishes, each choice will produce different results, and each choice will have an impact on the game's ending.

2. When the user makes each event choice, an event comment and description will be outputted, as well as outputting the impact of the event choice on the game main character, and outputting the properties of the main character after the event, which provides feedback on the player's operation, making the gameplay and playability greatly increased.

3. We use fixed events in few major age groups, and **random events** in most age groups. We will **use a random function** to generate an event from the possible event groups to present to the player, making the game more playable because the player will be exposed to different events every time he plays the game and thus can find excitement in the random events.

4. We used **data structures** to store random events, which made our operation more efficient; and used **data structures** to store the current status of members' characteristics, such as health, intelligence, etc. The appropriate use of **dynamic memory** is also a highlight of our coding.

5. We will output a game summary to the player at the end of the game, which will make the player feel more achievement and make the game more addictive, this function we implement through **file I/O**. **File Input/Output** will also make it easier to load and store the state of the game.

6. In addition, we use **different files to write different functions**, which is convenient for us to collaborate when writing code, and to locate specific functions when changing code. And we also provide input/output samples in the folder to facilitate players to understand the game details when they are not playing the game.

7. Moreover, we use **proper indentation and naming** to make our code more readable, to make it easier for ourselves or others to read, and to understand and locate the code quickly if we need to change it. We also use **in-code documentation**.

## Problem Statement:

### Assumptions with inputs:
1. All the inputs should be valid.

2. The role name must be of numbers or letters.

3. The .txt file should exist and be valid.

### Other things to watch out for:
1. The provided sample test is just a play case, you may get different results based on different random events generated.

2. There will be a file called tempfile.txt created during compilation and execution. Please ignore the file and add any changes to it.

3. Some events will repeat if you save the game during the major years due to the random selection.

## Have a great time!!!
