// This file contains functions related to the minor years

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <iomanip>
#include "Show.h"
#include "Stats_control.h"
#include "majoryear.h"
#include "minoryear.h"

using namespace std;

// outputs the results of events at ages 14-17
// inputs: chosen index, player's stats as a pass-by reference
void resultsevents14_to_17( int index, Show &s, ofstream & fout ) {
	int choice;
	cout << "Please enter the choice number when prompted!" << endl;
  cout << "--------------------------------------------------" << endl;
	switch ( index ) {
		case 0:
			cout << "1. Join them and play the hell out of it. Friendship and glory!" << endl;
			cout << "2. Play the game but try not to indulge in it. School and your life and other gaming are equally important." << endl;
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "You spend too much time on gaming that your grades are negatively affected. But you achieve high in the game anyway." << endl;
				cout << "<health -1 wealth -1 health -1 satisfaction +2>" << endl;
				ChangeStats( s, -1, -1, +2);
				

				// save game
				fout << endl << "Choice: Join them and play the hell out of it. Friendship and glory!" << endl;
				fout << "You spend too much time on gaming that your grades are negatively affected. But you achieve high in the game anyway." << endl;
				
			}
			else if ( choice == 2 ) {
				cout << "You maintain good grades, and have fun in gaming." << endl;
				cout << "<health +1 satisfaction +1>" << endl;
				ChangeStats( s, +1, 0, +1 );

				//save game
				fout << endl << "Play the game but try not to indulge in it. School and your life and other gaming are equally important." << endl;
				fout << "You maintain good grades, and have fun in gaming." << endl;
			}

		case 1:
			cout << "1. Burry your feelings and act as if nothing happens." << endl;
			cout << "2. Be brave to express your affection." << endl;
			cout << "3. Tease your crush to get attention." << endl;
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "Your crush never knows your affection. You feel depressed for not open about your feelings." << endl;
				cout << "<satisfaction -1>" << endl;
				ChangeStats(s, 0, 0, -1);

				// save game
				fout << endl << "Choice: Burry your feelings and act as if nothing happens." << endl;
				fout << "Your crush never knows your affection. You feel depressed for not open about your feelings." << endl;
			}
			else if ( choice == 2 ) {
				cout << "'Wow… I like you too!' You become a cute couple. First love is so sweet!" << endl;
				cout << "<satisfaction +2>" << endl;
				ChangeStats( s, 0, 0, +2 );

				//save game
				fout << endl << "Choice: Be brave to express your affection." << endl;
				fout << "'Wow… I like you too!' You become a cute couple. First love is so sweet!" << endl;
			}
			else if ( choice == 3 ) {
				cout << "Your crush hates you and everyone think you are mean. You feel awful." << endl;
				cout << "<satisfaction -2>" << endl;
				ChangeStats( s, 0, 0, -2 );

				//save game
				fout << endl << "Choice: Tease your crush to get attention." << endl;
				fout << "Your crush hates you and everyone think you are mean. You feel awful" << endl;
			}

		case 2:  
			cout << "1. I’ll go to the audition!" << endl;
			cout << "2. Maybe… I’ll try next time?" << endl;
			
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "They are really impressed by your performance! The play turns out to be a huge success. You made great friends and this become a memory of a lifetime." << endl;
				cout << "<satisfaction +2>" << endl;
				ChangeStats(s, 0, 0, +1);

				// save game
				fout << endl << "Choice:  I’ll go to the audition!" << endl;
				fout << "They are really impressed by your performance! The play turns out to be a huge success. You made great friends and this become a memory of a lifetime." << endl;
			}
			else if ( choice == 2 ) {
				cout << "Bad choice! If you want something, just go for it!" << endl;
				cout << "<satisfaction -1>" << endl;
				ChangeStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: Maybe… I’ll try next time?" << endl;
				fout << "Bad choice! If you want something, just go for it!" << endl;
		}
			
		
		case 3:	    
			cout << "1. Zoo." << endl;
			cout << "2. Disneyland." << endl;
			cout << "3. Ocean Park." << endl;
			cout << "4. Universal Studios." << endl;		   
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "Yeah great time at the zoo!" << endl;
				cout << "<satisfaction +1>" << endl;
				ChangeStats (s, 0, 0, +1);

				// save game
				fout << endl << "Choice: zoo." << endl;
				fout << "Yeah great time at the zoo!" << endl;
			}
			else if ( choice == 2 ) {
				cout << "Yeah great time at Disneyland!" << endl;
				cout << "<satisfaction +1>" << endl;
				ChangeStats (s, 0, 0, +1);
				

				//save game
				fout << endl << "Choice: Disneyland." << endl;
				fout << "Yeah great time at Disneyland!" << endl;
			}
			else if ( choice == 3 ) {
				cout << "Yeah great time at Ocean Park!" << endl;
				cout << "<satisfaction +1>" << endl;
				ChangeStats (s, 0, 0, +1);
				

				//save game
				fout << endl << "Choice: Ocean Park." << endl;
				fout << "Yeah great time at Ocean Park!" << endl;
			}
			else if ( choice == 4 ){
				cout << "Yeah great time at Universal Studios!" << endl;
				cout << "<satisfaction +1>"  << endl;
				ChangeStats (s, 0, 0, +1);
				
				//save game
				fout << endl << "Choice: Universal Studios." << endl;
				fout << endl << "Yeah great time at Universal Studios!" << endl;
			}	
			

		
		case 4:
			cout << "1. Use both feet to apply the brake and throttle." << endl;
			cout << "2. Use one foot to apply the brake and throttle." << endl;
			
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "!!!Car Crash Warning!!! Failed your test." << endl;
				cout << "<health-1 satisfaction -1>" << endl;
				ChangeStats(s, -1, 0, -1);

				// save game
				fout << endl << "Choice: Use both feet to apply the brake and throttle.." << endl;
				fout << "!!!Car Crash Warning!!! Failed your test." << endl;
			}
			else if ( choice == 2 ) {
				cout << "Congratulations on your driver’s licence!" << endl;
				cout << "<satisfaction+1>" << endl;
				ChangeStats( s, 0, 0, +1 );

				//save game
				fout << endl << "Choice: Use one foot to apply the brake and throttle." << endl;
				fout << "Congratulations on your driver’s licence" << endl;
			}
			


		case 5:
			cout << "Please enter '1' to continue with the game: " << endl;
			cin >> choice;
			if (choice == 1){
				cout << "You are so lucky to have each oter~" << endl;
				cout << "<satisfaction +2>" << endl;
				ChangeStats(s, 0, 0, +2);
				
				//save game
				fout << endl << "No choice made." << endl;
				fout << "You are so lucky to have each oter~" << endl;
			}	
				    


		case 6:
			cout << "Please enter '1' to continue with the game: " << endl;
			cin >> choice;
			if (choice == 1){
				cout << "You are given an AWFUL haircut. Bad luck :( " << endl;
				cout << "<wealth -1 satisfaction -1>" << endl;
				ChangeStats(s, 0, -1, -1);
				
				//save game
				fout << endl << "No choice made." << endl;
				fout << "You are given an AWFUL haircut. Bad luck :(" << endl;
			}
			
		}			    
	 }


// outputs the results of events at ages 20-23
// inputs: chosen index, player's stats as a pass-by reference
void resultsevents20_to_23( int index, Show &s, ofstream & fout ) {
	int choice;
	cout << "Please enter the choice number when prompted!" << endl;
  cout << "--------------------------------------------------" << endl;
	switch ( index ) {
		case 0:
			cout << "1. Hey it's college, step aside GPA! I only care about my love life." << endl;
			cout << "2. Surely I can balance my study and love life." << endl;
			cout << "3. Getting into Stanford is all I want." << endl;
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "Congratulations on a very romantic college experience! Unfortunately, now you have a really fucked-up GPA." << endl;
				cout << "<health +1 wealth -1 satisfaction +1>" << endl;
				ChangeStats(s, +1, -1, +1);

				// save game
				fout << endl << "Choice: Hey it's college, step aside GPA! I only care about my love life." << endl;
				fout << "Congratulations on a very romantic college experience! Unfortunately, now you have a really fucked-up GPA." << endl;
			}
			else if ( choice == 2 ) {
				cout << "Oh no, you have overestimated yourself." << endl;
				cout << "<wealth -1 satisfaction +1>" << endl;
				ChangeStats( s, 0, -1, +1 );

				//save game
				fout << endl << "Choice:  Surely I can balance my study and love life." << endl;
				fout << "Oh no, you have overestimated yourself." << endl;
			}
			else if ( choice == 3 ) {
				cout << "GPA++! Everything seems great except the sad fact that you remain single throughout college.." << endl;
				cout << "<satisfaction -1>" << endl;
				ChangeStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: Getting into Stanford is all I want." << endl;
				fout << "GPA++! Everything seems great except the sad fact that you remain single throughout college." << endl;
			}


		case 1:
			cout << "1. OMG this is a once-in-a-lifetime opportunity! I need to save every penny to get a ticket!" << endl;
			cout << "2. Sounds like I can only give it up ." << endl;
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "This indeed turns out to be an experience of a lifetime." << endl;
				cout << "<satisfaction +2 wealth -2>" << endl;
				ChangeStats(s, 0, -2, +2);

				// save game
				fout << endl << "Choice: OMG this is a once-in-a-lifetime opportunity! I need to save every penny to get a ticket!." << endl;
				fout << "This indeed turns out to be an experience of a lifetime." << endl;
			}
			else if ( choice == 2 ) {
				cout << ":)" << endl;
				cout << "<satisfaction -1>" << endl;
				ChangeStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: Sounds like I can only give it up ." << endl;
				fout << ":)" << endl;
			}
			
		case 2:	
			cout << "1. Piano" << endl;
			cout << "2. Violin" << endl;
			cout << "3. Guitar" << endl;
			cout << "4. Drum" << endl;
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "Piano turns out to be your lifelong interest." << endl;
				cout << "<satisfaction +1 wealth -1>" << endl;
				ChangeStats(s, 0, -1, +1);

				// save game
				fout << endl << "Choice: Piano." << endl;
				fout << "Piano turns out to be your lifelong interest." << endl;
			}
			else if ( choice == 2 ) {
				cout << "<Violin turns out to be your lifelong interest.>" << endl;
				cout << "<satisfaction +1 wealth -1>" << endl;
				ChangeStats(s, 0, -1, +1);

				//save game
				fout << endl << "Choice: Violin" << endl;
				fout << "Violin turns out to be your lifelong interest." << endl;
			}
			else if ( choice == 3 ) {
				cout << "Guitar turns out to be your lifelong interest.." << endl;
				cout << "<satisfaction +1 wealth -1>" << endl;
				ChangeStats(s, 0, -1, +1);

				//save game
				fout << endl << "Choice: Guitar." << endl;
				fout << "Guitar turns out to be your lifelong interest." << endl;
			}
			else if ( choice == 4 ){
				cout << "Drum turns out to be your lifelong interest.." << endl;
				cout << "<satisfaction +1 wealth -1>" << endl;
				ChangeStats(s, 0, -1, +1);

				//save game
				fout << endl << "Choice: Drum." << endl;
				fout << "Drum turns out to be your lifelong interest." << endl;
			}
		case 3: 
			cout << "1. Get a job." << endl;
			cout << "2. Continue study." << endl;
			
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "Congratulations on joining the workforce." << endl;
        			cout << "<wealth +1 satisfaction -1>" << endl;
        			ChangeStats(s, 0, +1, -1);

        			// save game
        			fout << endl << "Choice: Get a job." << endl;
        			fout << "Congratulations on joining the workforce." << endl;
				
			} else if ( choice == 2 ) {
				cout << "You fail to get into a school you like. Guess you have to join the workforce anyway." << endl;
        			cout << "<wealth +1 satisfaction -2>" << endl;
        			ChangeStats(s, 0, +1, -2);

        			//save game
        			fout << endl << "Choice: Continue study." << endl;
        			fout << "You fail to get into a school you like. Guess you have to join the workforce anyway." << endl;
			}
		case 4: 
			cout << "1. Big Tech." << endl;
			cout << "2. Financial industry, equity research." << endl;
			cout << "3. Financial industry, IBD." << endl;
			
			cout << "Enter choice: ";
			cin >> choice;

			if (choice == 1) {
        			cout << "Work-life-balance sucks. But the good news is…the pay is rather decent?" << endl;
        			cout << "<health -1 wealth +1>" << endl;
        			ChangeStats(s, -1, +1, 0);

        			// save game
        			fout << endl << "Choice: Big Tech." << endl;
        			fout << "Work-life-balance sucks. But the good news is…the pay is rather decent?" << endl;
    			} 
			else if (choice == 2) {
        			cout << "I’m sooooo tired! But good news is… you get to learn a lot about the industry?" << endl;
        			cout << "<health -1 wealth +1>" << endl;
        			ChangeStats(s, -1, +1, 0);

        			//save game
        			fout << endl << "Choice: Financial industry, equity research." << endl;
        			fout << "I’m sooooo tired! But good news is… you get to learn a lot about the industry?" << endl;
    			} 
			else if (choice == 3) {
        			cout << "You land a shiny job. But bad news is… you have to work around the clock." << endl;
        			cout << "<health -1 wealth +1>" << endl;
        			ChangeStats(s, -1, +1, 0);

        			//save game
        			fout << endl << "Choice: Financial industry, IBD." << endl;
        			fout << "You land a shiny job. But bad news is… you have to work around the clock." << endl;
    			}
		case 5: 
			cout << "1. Get my own apartment." << endl;
			cout << "2. Share an apartment." << endl;
			cout << "3. Stay in a hotel." << endl;
			
			cout << "Enter choice: ";
			cin >> choice;

			if (choice == 1) {
        			cout << "You enjoy privacy in your apartment." << endl;
        			cout << "<wealth -2 satisfaction +1>" << endl;
        			ChangeStats(s, 0, -2, +1);

        			// save game
        			fout << endl << "Choice: Big Tech." << endl;
        			fout << "Work-life-balance sucks. But the good news is…the pay is rather decent?" << endl;
    			} 
			else if (choice == 2) {
        			cout << "The rent is quite affordable." << endl;
        			cout << "<wealth -1 satisfaction-1>" << endl;
        			ChangeStats(s, 0, -1, +1);

        			//save game
        			fout << endl << "Choice: Share an apartment." << endl;
        			fout << "The rent is quite affordable." << endl;
    			} 
			else if (choice == 3) {
        			cout << "Most comfortable!" << endl;
        			cout << "<wealth -3 satisfaction +2>" << endl;
        			ChangeStats(s, 0, -3, +2);

        			//save game
        			fout << endl << "Choice: Stay in a hotel." << endl;
        			fout << "Most comfortable!" << endl;
    			}
		case 6: 
			cout << "1. Designer clothes and shoes." << endl;
			cout << "2. Sports car." << endl;
			cout << "3. Villa." << endl;
			cout << "4. World Trip." << endl;
			cout << "5. Donate." << endl;
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "Wow a complete personal image changeover!" << endl;
				cout << "<satisfaction +1>";
				ChangeStats (s, 0, 0, +1);

				// save game
				fout << endl << "Choice: Designer clothes and shoes." << endl;
				fout << "Wow a complete personal image changeover!" << endl;
			}
			else if ( choice == 2 ) {
				cout << "Racing sets me on fire!" << endl;
				cout << "<health -1 satisfaction +1>";
				ChangeStats (s, -1, 0, +1);
				

				//save game
				fout << endl << "Choice: Sports car." << endl;
				fout << "Racing sets me on fire!" << endl;
			}
			else if ( choice == 3 ) {
				cout << "Wonderful villa!!!" << endl;
				cout << "<satisfaction +1>";
				ChangeStats (s, 0, 0, +1);
				

				//save game
				fout << endl << "Choice: Villa." << endl;
				fout << "Wonderful villa!!!" << endl;
			}
			else if ( choice == 4 ){
				cout << "This trip leaves you countless precious memories." << endl;
				cout << "<satisfaction +2>";
				ChangeStats (s, 0, 0, +2);
				
				//save game
				fout << endl << "Choice: World trip." << endl;
				fout << endl << "This trip leaves you countless precious memories." << endl;
				
			}	
			else if ( choice == 5 ){
				cout << "You are a person with a big, big heart." << endl;
				cout << "<satisfaction +2>";
				ChangeStats (s, 0, 0, +2);
				
				//save game
				fout << endl << "Choice: Donate" << endl;
				fout << endl << "You are a person with a big, big heart." << endl;
				
			}	
				
				
			
	}
}

		
    
	          



// outputs the results of events at ages 26-29
// inputs: chosen index, player's stats as a pass-by reference
void resultsevents26_to_29( int index, Show &s, ofstream & fout ) {
	int choice;
	cout << "Please enter the choice number when prompted!" << endl;
  cout << "--------------------------------------------------" << endl;
	switch ( index ) {
		case 0:
			cout << "1. Tell them “Sorry YOU felt that way”, and continue with your current lifestyle." << endl;
			cout << "2. Spare more time to spend with them, you have decided to go grab something nice to eat together during the weekend." << endl;
			cout << "3. You negotiated with your partner; you told her it is necessary for you to prioritise your professional life before the relationship. And promised them a bright future." << endl;
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "Oops, she decided to break up with you and go back to their ex. You’re all alone again, sad and depressed." << endl;
				cout << "<Satisfaction –2>" << endl;
				ChangeStats( s, 0, 0, -2 );
				
				// save game
				fout << endl << "Choice: Tell them “Sorry YOU felt that way”, and continue with your current lifestyle." << endl;
				fout << "Oops, she decided to break up with you and go back to their ex. You’re all alone again, sad and depressed. " << endl;
			}
			else if ( choice == 2 ) {
				cout << "Your partner was very happy that you prioritised your relationship first, you guys went to Ritz Carlton and had a wonderful meal. But you weren’t so happy anymore when you saw the bill…" << endl;
				cout << "<Satisfaction +1, Wealth –1>" << endl;
				ChangeStats( s, -1, 0, +1 );

				//save game
				fout << endl << "Choice: Spare more time to spend with them, you have decided to go grab something nice to eat together during the weekend." << endl;
				fout << "Your partner was very happy that you prioritised your relationship first, you guys went to Ritz Carlton and had a wonderful meal. But you weren’t so happy anymore when you saw the bill… " << endl;
			}
			else if ( choice == 3 ) {
				cout << "Surprisingly your partner was very accommodating, they understood how important this is to you and had decided to support you along the way. Meanwhile, your presentation last week was a blast, you got promoted to a VP position within the firm, congratulations!" << endl;
				cout << "<Wealth +2>" << endl;
				ChangeStats( s, +2, 0, 0 );

				//save game
				fout << endl << "Choice: You negotiated with your partner; you told her it is necessary for you to prioritise your professional life before the relationship. And promised them a bright future." << endl;
				fout << "Surprisingly your partner was very accommodating, they understood how important this is to you and had decided to support you along the way. Meanwhile, your presentation last week was a blast, you got promoted to a VP position within the firm, congratulations!" << endl;
			}


		case 1:
			cout << "1.You found out that you’re passionate about education and you enjoy helping students out, you’ve decided to start a new venture as an entrepreneur!" << endl;
			cout << "2. You believe this is just a phase and have decided to stick with the current job still." << endl;
			cout << "3. Apply for other jobs that fit your skill sets and which you found interesting." << endl;
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "Yes, starting a business is hard, but you have succeeded! You have earned 3Mn revenue in the first year and your business is on the rise." << endl;
				cout << "<Wealth +3, Satisfaction +1>" << endl;
				ChangeStats( s, +3, 0, +1 );

				// save game
				fout << endl << "Choice: You found out that you’re passionate about education and you enjoy helping students out, you’ve decided to start a new venture as an entrepreneur!" << endl;
				fout << "Yes, starting a business is hard, but you have succeeded! You have earned 3Mn revenue in the first year and your business is on the rise." << endl;
			}
			else if ( choice == 2 ) {
				cout << "You got promoted to a more senior position, but you realised that you have grown to hate your job even more…" << endl;
				cout << "<Wealth +1, Satisfaction -1>" << endl;
				ChangeStats( s, +1, 0, -1 );

				//save game
				fout << endl << "Choice: You believe this is just a phase and have decided to stick with the current job still." << endl;
				fout << "You got promoted to a more senior position, but you realised that you have grown to hate your job even more…" << endl;
			}
			else if ( choice == 3 ) {
				cout << "Sorry but nothing really happened, you should’ve known that job hunting isn’t easy…and you’ve decided to stay with your current company." << endl;
				cout << "<->" << endl;
				ChangeStats( s, 0, 0, 0 );

				//save game
				fout << endl << "Choice: Apply for other jobs that fit your skill sets and which you found interesting." << endl;
				fout << "Sorry but nothing really happened, you should’ve known that job hunting isn’t easy…and you’ve decided to stay with your current company." << endl;
			}

		case 2:
			cout << "1. Tiktok Dance" << endl;
			cout << "2. Social Experiment Channel" << endl;
			cout << "3. Random funny reels" << endl;
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "You found out that you really love dancing, and this is something that you’re truly passionate about and enjoy the most. You felt really happy." << endl;
				cout << "<Satisfaction +2>" << endl;
				ChangeStats( s, 0, 0, +2 );

				// save game
				fout << endl << "Choice: Tiktok Dance." << endl;
				fout << "You found out that you really love dancing, and this is something that you’re truly passionate about and enjoy the most. You felt really happy. " << endl;
			}
			else if ( choice == 2 ) {
				cout << "YES, you made it. It was a huge hit and people really like your channel, you got over 2million likes in total, and also tons of money flowing into your bank account, what an influencer!" << endl;
				cout << "<Wealth +2>" << endl;
				ChangeStats( s, +2, 0, 0 );

				//save game
				fout << endl << "Choice: Social Experiment Channel" << endl;
				fout << "YES, you made it. It was a huge hit and people really like your channel, you got over 2million likes in total, and also tons of money flowing into your bank account, what an influencer!" << endl;
			}
			else if ( choice == 3 ) {
				cout << "7You started doing stupid stuff like running around and asking stupid questions at strangers, the market is saturated so you’re not getting as many likes as you expected, but at least you’re getting healthier with more exercise." << endl;
				cout << "<Health +1>" << endl;
				ChangeStats( s, 0, +1, 0 );

				//save game
				fout << endl << "Choice: Random funny reels" << endl;
				fout << "You started doing stupid stuff like running around and asking stupid questions at strangers, the market is saturated so you’re not getting as many likes as you expected, but at least you’re getting healthier with more exercise." << endl;
			}
		
		case 3:
			cout << "1. Pay for her bill and ask her to take pictures with you" << endl;
			cout << "2. Pretend you didn’t see her and walk away" << endl;
			cout << "3. Freaked out and screamed out “Beyonce is here!" << endl;
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "You got invited to Beyonce’s secret album reveal session, she also gave you a front seat VIP ticket to her concert (which worth 70K hkd) and you’ve decided to sell it out." << endl;
				cout << "<Satisfaction +2, Wealth +1>" << endl;
				ChangeStats( s, +1, 0, +2 );

				// save game
				fout << endl << "Choice: Pay for her bill and ask her to take pictures with you." << endl;
				fout << "You got invited to Beyonce’s secret album reveal session, she also gave you a front seat VIP ticket to her concert (which worth 70K hkd) and you’ve decided to sell it out." << endl;
			}
			else if ( choice == 2 ) {
				cout << "You got punched in the face by an aggressive Beyonce fan for ignoring their queen, you nose is severely injured and required an immediate surgery." << endl;
				cout << "<Health -2>" << endl;
				ChangeStats( s, 0, -2, 0 );

				//save game
				fout << endl << "Choice: Pretend you didn’t see her and walk away" << endl;
				fout << "You got punched in the face by an aggressive Beyonce fan for ignoring their queen, you nose is severely injured and required an immediate surgery." << endl;
			}
			else if ( choice == 3 ) {
				cout << "You then got paparazzis following you around, you even got posted on Instagram. You felt very anxious about this." << endl;
				cout << "<Satisfaction -1>" << endl;
				ChangeStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: Freaked out and screamed out “Beyonce is here!" << endl;
				fout << "You then got paparazzis following you around, you even got posted on Instagram. You felt very anxious about this." << endl;
			}
		
		case 4:
			cout << "1. You think crypto is BS and had decided not to invest your money eventually" << endl;
			cout << "2. You are a big fan of blockchain technology, and you believe that crypto trading is the future, you had decided to invest 50% of your idle cash in the platform" << endl;
			cout << "3. You don’t know much about crypto but had decided to diversify your investment portfolio anyway, so you had invested 20% of your idle cash. You also took some spare time of yours to learn about Web3 and crypto." << endl;
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "The crypto market crashed in only one day after FTX’s (the largest crypto trading platform) bankruptcy, thank god that you didn’t invest! By the way your other investments are making huge returns!" << endl;
				cout << "<Wealth +3>" << endl;
				ChangeStats( s, +3, 0, 0 );

				// save game
				fout << endl << "Choice: You think crypto is BS and had decided not to invest your money eventually." << endl;
				fout << "The crypto market crashed in only one day after FTX’s (the largest crypto trading platform) bankruptcy, thank god that you didn’t invest! By the way your other investments are making huge returns!" << endl;
			}
			else if ( choice == 2 ) {
				cout << "Oops, the crypto market crashed, and you’ve lost almost all your money, but you’re not the only one so don’t be too disappointed!" << endl;
				cout << "<Wealth –4>" << endl;
				ChangeStats( s, -4, 0, 0 );

				//save game
				fout << endl << "Choice: You are a big fan of blockchain technology, and you believe that crypto trading is the future, you had decided to invest 50% of your idle cash in the platform" << endl;
				fout << "Oops, the crypto market crashed, and you’ve lost almost all your money, but you’re not the only one so don’t be too disappointed!" << endl;
			}
			else if ( choice == 3 ) {
				cout << "Oops, the crypto market crashed but at least you did not invest all your idle cash into the platform. Smart business guy!" << endl;
				cout << "<Wealth - 2, Satisfaction +2>" << endl;
				ChangeStats( s, -2, 0, +2 );

				//save game
				fout << endl << "Choice: You don’t know much about crypto but had decided to diversify your investment portfolio anyway, so you had invested 20% of your idle cash. You also took some spare time of yours to learn about Web3 and crypto." << endl;
				fout << "Oops, the crypto market crashed but at least you did not invest all your idle cash into the platform. Smart business guy!" << endl;
			}

		case 5:
			cout << "1. Skiing in Hokkaido" << endl;
			cout << "2. Drive to a party with friends" << endl;
			cout << "3. Going to Cheung Chau Island" << endl;
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "You went skiing in Hokkaido and fell and broke a bone due to improper handling." << endl;
				cout << "<Health -1>" << endl;
				ChangeStats( s, 0, -1, 0 );


				// save game
				fout << endl << "Choice: Skiing in Hokkaido." << endl;
				fout << "You went skiing in Hokkaido and fell and broke a bone due to improper handling." << endl;
			}
			else if ( choice == 2 ) {
				cout << "You had a little drink and were caught and fined by the traffic police on your way home." << endl;
				cout << "<Wealth-1>" << endl;
				ChangeStats( s, -1, 0, 0 );

				//save game
				fout << endl << "Choice: Drive to a party with friends" << endl;
				fout << "You had a little drink and were caught and fined by the traffic police on your way home." << endl;
			}
			else if ( choice == 3 ) {
				cout << "You have an argument with a local resident and are left with an unpleasant experience." << endl;
				cout << "<Satisfaction-1>" << endl;
				ChangeStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: Going to Cheung Chau Island" << endl;
				fout << "You have an argument with a local resident and are left with an unpleasant experience." << endl;
			}

		case 6:
			cout << "1. Go visit your ex and offered to pay for their medical expenses" << endl;
			cout << "2. Go visit your ex with your current partner" << endl;
			cout << "3. Not visit your ex, nor contact them anymore" << endl;
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "Turns out your ex was secretly a billionaire. They were very touched that you offered them with such kind gestures and had decided to buy you an apartment at Repulse Bay. But your partner, however, was angry that you still had feelings for her and wanted a divorce." << endl;
				cout << "<Wealth +2, Satisfaction -2>" << endl;
				ChangeStats( s, +2, 0, -1 );


				// save game
				fout << endl << "Choice: Go visit your ex and offered to pay for their medical expenses." << endl;
				fout << "Turns out your ex was secretly a billionaire. They were very touched that you offered them with such kind gestures and had decided to buy you an apartment at Repulse Bay. But your partner, however, was angry that you still had feelings for her and wanted a divorce." << endl;
			}
			else if ( choice == 2 ) {
				cout << "Your ex indeed still has feelings for you and was not very pleased with you bringing your partner to visit them. They started crying which made you feel quite bad." << endl;
				cout << "<Satisfaction -1>" << endl;
				ChangeStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: Go visit your ex with your current partner" << endl;
				fout << "Your ex indeed still has feelings for you and was not very pleased with you bringing your partner to visit them. They started crying which made you feel quite bad." << endl;
			}
			else if ( choice == 3 ) {
				cout << "Your partner was very pleased with your loyalty and your commitment for their relationship, they have decided to buy a big house for you in Hong Kong Island but however, you have no idea where the money comes from…" << endl;
				cout << "<Wealth +2>" << endl;
				ChangeStats( s, +2, 0, 0 );

				//save game
				fout << endl << "Choice: Not visit your ex, nor contact them anymore" << endl;
				fout << "Your partner was very pleased with your loyalty and your commitment for their relationship, they have decided to buy a big house for you in Hong Kong Island but however, you have no idea where the money comes from…" << endl;
			}
    }
}



// outputs the results of events at ages 32-35
// inputs: chosen index, player's stats as a pass-by reference

void resultsevents32_to_35( int index, Show &s, ofstream & fout ) {
	int choice;
	cout << "Please enter the choice number when prompted!" << endl;
  cout << "--------------------------------------------------" << endl;
	switch ( index ) {
		case 0:
			cout << "1. Go on a trip" << endl;
			cout << "2. Attend swimming classes" << endl;
			cout << "3. Play video games with old friends" << endl;
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "You travel to a country you have longed to visit, experience the local scenery and feel psychologically satisfied despite the cost." << endl;
				cout << "<Satisfaction +1, Wealth -1, Health +1>" << endl;
				ChangeStats( s, -1, +1, +1 );

				// save game
				fout << endl << "Choice: Go on a trip" << endl;
				fout << "You travel to a country you have longed to visit, experience the local scenery and feel psychologically satisfied despite the cost." << endl;
			}
			else if ( choice == 2 ) {
				cout << "You paid for swimming lessons, went swimming every evening after work and met good people." << endl;
				cout << "<Satisfaction +1, Wealth -1, Health +1>" << endl;
				ChangeStats( s, -1, +1, +1 );

				//save game
				fout << endl << "Choice: Attend swimming classes" << endl;
				fout << "You paid for swimming lessons, went swimming every evening after work and met good people." << endl;
			}
			else if ( choice == 3 ) {
				cout << "You get together with old friends to play video games and it seems like you've got your fun back, but you feel uncomfortable with your wrists and eyes while playing." << endl;
				cout << "<Satisfaction +1, Health -1>" << endl;
				ChangeStats( s, 0, -1, +1 );

				//save game
				fout << endl << "Choice: Play video games with old friends" << endl;
				fout << "You get together with old friends to play video games and it seems like you've got your fun back, but you feel uncomfortable with your wrists and eyes while playing." << endl;
			}

		case 1:
			cout << "1. Happy school" << endl;
			cout << "2. International schools that are expensive but are said to have good teachers" << endl;
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "He/She attends the cheap Happy school and often shares with you the interesting things that happen in school." << endl;
				cout << "<Satisfaction +2, Wealth +1>" << endl;
				ChangeStats( s, +1, 0, +2 );

				// save game
				fout << endl << "Choice: Happy school" << endl;
				fout << "He/She attends the cheap Happy school and often shares with you the interesting things that happen in school." << endl;
			}
			else if ( choice == 2 ) {
				cout << "He/She occasionally complained that school work was a little difficult and that he had less time for play when he got home." << endl;
				cout << "<Satisfaction +1, Wealth -1>" << endl;
				ChangeStats( s, -1, 0, +1 );

				//save game
				fout << endl << "Choice: International schools that are expensive but are said to have good teachers" << endl;
				fout << "He/She occasionally complained that school work was a little difficult and that he had less time for play when he got home." << endl;
			}

		case 2:
			cout << "1. Go to the doctor for a prescription" << endl;
			cout << "2. Start exercising" << endl;
			cout << "3. Ignore" << endl;
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "You spend a lot of money on drugs with few side effects, and you think that following medical advice should be helpful to your health." << endl;
				cout << "<Wealth -1, Health +1>" << endl;
				ChangeStats( s, -1, +1, 0 );

				// save game
				fout << endl << "Choice: Go to the doctor for a prescription." << endl;
				fout << "You spend a lot of money on drugs with few side effects, and you think that following medical advice should be helpful to your health." << endl;
			}
			else if ( choice == 2 ) {
				cout << "You attribute your health problems to a lack of exercise and decide to work out every day to increase your physical fitness." << endl;
				cout << "<Health +2, Satisfaction +1>" << endl;
				ChangeStats( s, 0, +2, +1 );

				//save game
				fout << endl << "Choice: Start exercising" << endl;
				fout << "You attribute your health problems to a lack of exercise and decide to work out every day to increase your physical fitness." << endl;
			}
			else if ( choice == 3 ) {
				cout << "You forgot about this inspection and are still eating and drinking as usual every day." << endl;
				cout << "<Health -2, Satisfaction +1>" << endl;
				ChangeStats( s, 0, -2, +1 );

				//save game
				fout << endl << "Choice: Ignore" << endl;
				fout << "You forgot about this inspection and are still eating and drinking as usual every day." << endl;
			}
		
		case 3:
			cout << "1. Take out a loan to buy a 200 sq m house." << endl;
			cout << "2. Buy a house of 80 sq m with full payment." << endl;
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "You decide to take out a loan to buy a bigger house to see if it appreciates in value later and to collect rent when you are old, but you are under a lot of pressure to pay the mortgage. " << endl;
				cout << "<Health -1, Satisfaction -1>" << endl;
				ChangeStats( s, 0, -1, -1 );

				// save game
				fout << endl << "Choice: Take out a loan to buy a 200 sq m house." << endl;
				fout << "You decide to take out a loan to buy a bigger house to see if it appreciates in value later and to collect rent when you are old, but you are under a lot of pressure to pay the mortgage. " << endl;
			}
			else if ( choice == 2 ) {
				cout << "You are quite content with the small house you bought with full payment, but it is too small, and the house is very cramped when you move in." << endl;
				cout << "<Wealth-1, satisfaction +1>" << endl;
				ChangeStats( s, -1, 0, +1 );

				//save game
				fout << endl << "Choice: Buy a house of 80 sq m with full payment." << endl;
				fout << "You are quite content with the small house you bought with full payment, but it is too small, and the house is very cramped when you move in." << endl;
			}
		
		case 4:
			cout << "1. Buy the opposite" << endl;
			cout << "2. You still want to back your favorite Lionel Messi." << endl;
			cout << "3. You think that you are unlucky and don't place a bet." << endl;
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "You bet 10,000 on Saudi Arabia v Argentina 2:1." << endl;
				cout << "<Wealth+1, Satisfaction +1>" << endl;
				ChangeStats( s, +1, 0, +1 );

				// save game
				fout << endl << "Choice: Buy the opposite" << endl;
				fout << "You bet 10,000 on Saudi Arabia v Argentina 2:1." << endl;
			}
			else if ( choice == 2 ) {
				cout << "You bet 10,000 on Saudi Arabia v Argentina 0:2." << endl;
				cout << "<Wealth -2, satisfaction +2>" << endl;
				ChangeStats( s, -2, 0, +2 );

				//save game
				fout << endl << "Choice: You still want to back your favorite Lionel Messi." << endl;
				fout << "You bet 10,000 on Saudi Arabia v Argentina 0:2." << endl;
			}
			else if ( choice == 3 ) {
				cout << "You look at the players on the TV and think back to your youth." << endl;
				cout << "<Satisfaction +2>" << endl;
				ChangeStats( s, 0, 0, +2 );

				//save game
				fout << endl << "Choice: You think that you are unlucky and don't place a bet." << endl;
				fout << "You look at the players on the TV and think back to your youth." << endl;
			}

		case 5:
			cout << "1. You are confident in your own strength and sign the contract without knowing more about the company." << endl;
			cout << "2. You think he's a scam artist and don't want to believe him, so you just walk away." << endl;
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "You sign the contract, follow your agent to an event, train hard every day but have few fans." << endl;
				cout << "<Health -2, Wealth +1, Satisfaction +1>" << endl;
				ChangeStats( s, +1, -2, +1 );

				// save game
				fout << endl << "Choice: You are confident in your own strength and sign the contract without knowing more about the company." << endl;
				fout << "You sign the contract, follow your agent to an event, train hard every day but have few fans." << endl;
			}
			else if ( choice == 2 ) {
				cout << "You think this kind of scouting is just a TV show and you don't know which scammer is so inexperienced." << endl;
				cout << "<->" << endl;
				ChangeStats( s, 0, 0, 0 );

				//save game
				fout << endl << "Choice: You think he's a scam artist and don't want to believe him, so you just walk away." << endl;
				fout << "You think this kind of scouting is just a TV show and you don't know which scammer is so inexperienced." << endl;
			}

		case 6:
			cout << "1. Not to lend it to him, you know your brother's personality and that money borrowed will never be repaid." << endl;
			cout << "2. You lend him the money anyway because your mother and father are also struggling with your brother's business." << endl;
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "You decide not to lend him the money and explain to your brother that you don't have much money, but your brother doesn't listen to you and thinks you are selfish for not helping him." << endl;
				cout << "<Satisfaction-1>" << endl;
				ChangeStats( s, 0, 0, -1 );

				// save game
				fout << endl << "Choice: Not to lend it to him, you know your brother's personality and that money borrowed will never be repaid." << endl;
				fout << "You decide not to lend him the money and explain to your brother that you don't have much money, but your brother doesn't listen to you and thinks you are selfish for not helping him." << endl;
			}
			else if ( choice == 2 ) {
				cout << "You decide to lend him the money and your parents praise you but you are also worried that your savings are too insufficient." << endl;
				cout << "<Wealth-1, Satisfaction-1>" << endl;
				ChangeStats( s, -1, 0, -1 );

				//save game
				fout << endl << "Choice: You lend him the money anyway because your mother and father are also struggling with your brother's business." << endl;
				fout << "You decide to lend him the money and your parents praise you but you are also worried that your savings are too insufficient." << endl;
			}
	}
    return;
  }

	

