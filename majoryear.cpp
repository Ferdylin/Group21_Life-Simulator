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
void Events13(Show &s, string name, ofstream &fout) {
    int choice;
    cout << "Please enter the choice number when prompted!" << endl;
    cout << "--------------------------------------------------" << endl;

    cout << "You enter puberty, and your body is going through a series of changes. You overhear someone making fun of you. "<< endl;
    cout << "1. Tell them about the proper sex education knowledge you learnt." << endl;
    cout << "2. Tell your teacher about it and hope he will scold them." << endl;
    cout << "3. You force yourself to wear baggy clothes and keep a low profile everyday. " << endl;
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        cout 
            << "Your classmates are impressed by you. Most of them began to treat it properly." 
            << endl;
        cout << "<satisfaction +2>" << endl;
        ChangeStats(s, 0, 0, +2);

        // save game
        fout << endl << "Choice: Tell them about the proper sex education knowledge you learnt." << endl;
        fout << "Your classmates are impressed by you. Most of them began to treat it properly." << endl;
    } else if (choice == 2) {
        cout
                << "The teasing stopped. But some of the classmates continue to make fun of other students behind your back and they see you as a traitor."
                << endl;
        cout << "<satisfaction +1>" << endl;
        ChangeStats(s, 0, 0, +1);

        //save game
        fout << endl << "Choice: Tell your teacher about it and hope he will scold them." << endl;
        fout
                << "The teasing stopped. But some of the classmates continue to make fun of other students behind your back and they see you as a traitor."
                << endl;
    } else if (choice == 3) {
        cout
                << "This is driving you crazy and you feel more and more ashamed of your body, and you are not as confident as usual.."
                << endl;
        cout << "<satisfaction -1>" << endl;
        ChangeStats(s, 0, 0, -1);

        //save game
        fout << endl << "Choice: You force yourself to wear baggy clothes and keep a low profile everyday. " << endl;
        fout
                << "This is driving you crazy and you feel more and more ashamed of your body, and you are not as confident as usual."
                << endl;
    }
}

void Events18(Show &s, string name, ofstream &fout) {
    int choice;
    cout << "Please enter the choice number when prompted!" << endl;
    cout << "--------------------------------------------------" << endl;

    cout << "This is the final year of high school. You want to get into a university." << endl;
    cout << "1. Stay up late every night to study." << endl;
    cout << "2. I will definitely put efforts in my schoolwork. Just not today!" << endl;
    cout << "3.  I really have to study hard! I can do it!" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "a plus b minus 2… minus 2… 2…” Damn you are so sleepy you fell asleep in class!" << endl;
        cout << "health -2 satisfaction -1" << endl;
        ChangeStats(s, -2, 0, -1);

        // save game
        fout << endl << "Choice: Stay up late every night to study." << endl;
        fout << "a plus b minus 2… minus 2… 2…” Shit you are so sleepy you fell asleep in class!" << endl;
    } else if (choice == 2) {
        cout << "Procrastination is never the answer! Fighting deadlines makes you exhausted. But in the end you are smart enough to get into a university anyway." << endl;
        cout << "<satisfaction -1>" << endl;
        ChangeStats(s, 0, 0, -1);

        //save game
        fout << endl << "Choice: I will definitely put efforts in my schoolwork. Just not today!" << endl;
        fout << "Procrastination is never the answer! Fighting deadlines makes you exhausted. But in the end you are smart enough to get into a university anyway." << endl;
    } else if (choice == 3) {
        cout << "Confidence keeps you going. Your hard work finally pays off!!." << endl;
        cout << "<satisfaction +2>" << endl;
        ChangeStats(s, 0, 0, +2);

        //save game
        fout << endl << "Choice:  I really have to study hard! I can do it!" << endl;
        fout << "Confidence keeps you going. Your hard work finally pays off!!" << endl;
    }
}

void Events19(Show &s, string name, ofstream &fout) {
    int choice;
    cout << "Please enter the choice number when prompted!" << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "You find that everyone around you is either doing an internship or looking for one. You feel anxious because you have had zero internships. You will:" << endl;
    cout << "1. Internship is super important!! I will do as many as I can, ever if I need to gap." << endl;
    cout << "2. Dealing with my study as usual, meanwhile looking for remote internships and winter / summer internships."
            << endl;
    cout << "3.  What? Shouldn’t college students be in lecture halls? Nah, I don’t need internships." << endl;
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "You end up with a pretty impressive CV. But you are also burnt out." << endl;
        cout << "health -1 wealth +1 satisfaction -1" << endl;
        ChangeStats(s, -1, +1, -1);

        // save game
        fout << endl << "Choice: Internship is super important!! I will do as many as I can, ever if I need to gap."
             << endl;
        fout << "You end up with a pretty impressive CV. But you are also burnt out." << endl;
    } else if (choice == 2) {
        cout << "Sorry but there are barely any internship opportunities to your needs." << endl;
        cout << "health -1" << endl;
        ChangeStats(s, -1, 0, 0);

        //save game
        fout << "Sorry but there are barely any internship opportunities to your needs." << endl;

    } else if (choice == 3) {
        
        cout << "You at job interviews after graduation: what do you mean “you won’t consider college graduates with no internship experiences”?!" << endl;
        cout << "health +1 satisfaction +2" << endl;
        ChangeStats(s, +1, 0, +2);

        //save game
        fout << endl << "Choice:  What? Shouldn’t college students be in lecture halls? Nah, I don’t need internships." << endl;
        fout << "You at job interviews after graduation: what do you mean “you won’t consider college graduates with no internship experiences”?!" << endl;

        ChangeStats(s, 0, +1, -2);

        //save game
        fout << endl << "Choice: Continue study." << endl;
        fout << "You fail to get into a school you like. Guess you have to join the workforce anyway." << endl;
        }

}


void Events24(Show &s, string name, ofstream &fout) {
    int choice;
    cout << "Please enter the choice number when prompted!" << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "Unfortunately, due to the bad market economic environment, you were laid off. You will: " << endl;
    cout << "1.  Start your own business." << endl;
    cout << "2. Switch to a big company." << endl;
    cout << "3. Get a job in a small enterprise." << endl;
    cout << "4. Join a start-up." << endl;
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Bad choice! The market condition makes it so hard to be an entrepreneur right now." << endl;
        cout << "<wealth-1>" << endl;
        ChangeStats(s, 0, -1, 0);

        // save game
        fout << endl << "Choice:  Start your own business.." << endl;
        fout << "Bad choice! The market condition makes it so hard to be an entrepreneur right now." << endl;
    } else if (choice == 2) {
        cout << "Work pressure ++ Salary--" << endl;
        cout << "<wealth+1 health-1>" << endl;
        ChangeStats(s, -1, +1, 0);

        //save game
        fout << endl << "Choice: Switch to a big company." << endl;
        fout << "Work pressure ++ Salary--" << endl;
    } else if (choice == 3) {
        cout << "Miserable life ahead. Your job at the company is boring, repetitive, low-pay and there’s hardly any chances of promotion. Soon before you decide to quit and find a job again." << endl;
        cout << "<satisfaction-1>" << endl;
        ChangeStats(s, 0, 0, -1);

        //save game
        fout << endl << "Choice: Get a job in a small enterprise." << endl;
        fout << "Miserable life ahead. Your job at the company is boring, repetitive, low-pay and there’s hardly any chances of promotion. Soon before you decide to quit and find a job again." << endl;
    } else if (choice == 4) {
        cout << "The job is very demanding and tiring. But there is always a chance that you make the right bet."<< endl;
        cout << "<health-1 satisfaction+1>" << endl;
        ChangeStats(s, -1, 0, +1);

        //save game
        fout << endl << "Choice: Join a start-up." << endl;
        fout << "The job is very demanding and tiring. But there is always a chance that you make the right bet." << endl;
    }
}

void Events25(Show &s, string name, ofstream &fout) {
    int choice;
    cout << "Please enter the choice number when prompted!" << endl;
    cout << "--------------------------------------------------" << endl;

    cout << "You have been working OT these days, but your work is not recognized by anyone, everyone else has been promoted before except you because your boss hates you, what do you do?" << endl;
    cout << "1. Hand in that resignation letter, and prepare for job hunting" << endl;
    cout << "2. Keep up with the hard work because you believe that your work would be recognized one day" << endl;
    cout << "3. Slack off during work because why not" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "You got unemployed for over a month since you do not have enough work experiences, but eventually landed with a normal job in Hong Kong" << endl;
        cout << "<Wealth -1>" << endl;
        ChangeStats(s, -1, 0, 0);

        // save game
        fout << endl << "Choice: Hand in that resignation letter, and prepare for job hunting." << endl;
        fout << "You got unemployed for over a month since you do not have enough work experiences, but eventually landed with a normal job in Hong Kong" << endl;
    } else if (choice == 2) {
        cout << "Your work still was not recognized by any colleagues, and they just kept gossiping about you because they know that you’re not liked by the boss" << endl;
        cout << "<Satisfaction -2>" << endl;
        ChangeStats(s, 0, 0, -2);

        //save game
        fout << endl << "Choice: Keep up with the hard work because you believe that your work would be recognized one day" << endl;
        fout << "Your work still was not recognized by any colleagues, and they just kept gossiping about you because they know that you’re not liked by the boss" << endl;
        
    } else if (choice == 3) {
        cout << "Your colleague dropped by and asked what happened, you told them how toxic your boss is, and they helped you transfer to another division within the workplace. Your salary got boosted." << endl;
        cout << "<Wealth +1, Satisfaction +1>" << endl;
        ChangeStats(s, +1, 0, +1);

        //save game
        fout << endl << "Choice: Slack off during work because why not" << endl;
        fout << "Your colleague dropped by and asked what happened, you told them how toxic your boss is, and they helped you transfer to another division within the workplace. Your salary got boosted. " << endl;
    }
}

void Events30(Show &s, string name, ofstream &fout) {
    int choice;
    cout << "Please enter the choice number when prompted!" << endl;
    cout << "--------------------------------------------------" << endl;

    cout << "Your mother-in-law got very sick, and your partner is suggesting sending her to Australia for treatment therapy. What should you do?" << endl;
    cout << "1. Agree with them completely, you sold one of your apartments in Hong Kong, and decided to do everything you can to help your mother-in-law out" << endl;
    
    cout << "2. You told your partner frankly that you currently just do not have enough money to send their mother to the treatment therapy, you suggested to transfer your mother-in-law to a local hospital where you had connection with" << endl;
    cout << "3. You told your partner that you cannot afford to send your mother-in-law to Australia but still wanted to find them a solution" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "You used up a lot of your money, but your partner was very grateful for your effort. They have decided to cook healthy food for you to take to your workplace every day, you felt that your health is improving as you eat healthy." << endl;
        cout << "<Wealth -2, Health +1, Satisfaction +1>" << endl;
        ChangeStats(s, -2, +1, +1);

        // save game
        fout << endl << "Choice: Agree with them completely, you sold one of your apartments in Hong Kong, and decided to do everything you can to help your mother-in-law out." << endl;
        fout << "You used up a lot of your money, but your partner was very grateful for your effort. They have decided to cook healthy food for you to take to your workplace every day, you felt that your health is improving as you eat healthy. " << endl;
        
    } else if (choice == 2) {
        cout << "Your partner has also agreed given the financial constraints; but you had still used up some money for it. " << endl;
        cout << "<Wealth –1>" << endl;
        ChangeStats(s, -1, 0, 0);

        //save game
        fout << endl << "Choice: You told your partner frankly that you currently just do not have enough money to send their mother to the treatment therapy, you suggested to transfer your mother-in-law to a local hospital where you had connection with" << endl;
        fout << "Your partner has also agreed given the financial constraints; but you had still used up some money for it." << endl;
        
    } else if (choice == 3) {
        cout << "You and your partner fought, they wanted to break up and thought that you’re a cold-blooded monster. You felt very helpless and didn't know what to do. " << endl;
        cout << "<Health -1, Satisfaction -2>" << endl;
        ChangeStats(s, 0, -1, -2);

        //save game
        fout << endl << "Choice: You told your partner that you cannot afford to send your mother-in-law to Australia but still wanted to find them a solution" << endl;
        fout << "You and your partner fought, they wanted to break up and thought that you’re a cold-blooded monster. You felt very helpless and didn't know what to do. " << endl;
    }
}

void Events31(Show &s, string name, ofstream &fout) {
    int choice;
    cout << "Please enter the choice number when prompted!" << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "You and your lover are considering whether to welcome a new family member while you are still young and, after much deliberation, at the age of 30, you have chosen to:" << endl;
    cout << "1. Giving birth" << endl;
    cout << "2. Not considering the child " << endl;
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "You have a new family member, more laughter in the house, and with that comes an increased financial burden and more energy needed." << endl;
        cout << "<Satisfaction +1, Wealth -1, Health -1>" << endl;
        ChangeStats(s, -1, -1, +1);

        // save game
        fout << endl << "Choice: Giving birth." << endl;
        fout << "You have a new family member, more laughter in the house, and with that comes an increased financial burden and more energy needed." << endl;
        
    } else if (choice == 2) {
        cout << "You think about it and decide not to have children, to give yourself more personal time and the energy to do your own thing." << endl;
        cout << "<Health +1, Wealth +1>" << endl;
        ChangeStats(s, +1, +1, 0);

        //save game
        fout << endl << "Choice: Not considering the child " << endl;
        fout << "You think about it and decide not to have children, to give yourself more personal time and the energy to do your own thing." << endl;
    }
}

void Events36(Show &s, string name, ofstream &fout) {
    int choice;
    cout << "Please enter the choice number when prompted!" << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "You have reached a bottleneck in your career, and you want to move up further and improve the quality of life for your family, you decide to" << endl;
    cout << "1. Take a class to learn professional knowledge" << endl;
    cout << "2. Get together with your boss more often and buy your clients drinks" << endl;
    cout << "3. You're happy to be a salty fish" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "You have spent some money on professional training to improve the ability of yourself." << endl;
        cout << "<Wealth -1, Satisfaction +1>" << endl;
        ChangeStats(s, -1, 0, +1);

        // save game
        fout << endl << "Choice: Take a class to learn professional knowledge." << endl;
        fout << "You have spent some money on professional training to improve the ability of yourself." << endl;
    } else if (choice == 2) {
        cout << "You often ask your boss to go out for dinner after work, and you are socializing more, trying to get on good terms with your clients' bosses. " << endl;
        cout << "<Satisfaction -1, Health -1>" << endl;
        ChangeStats(s, 0, -1, -1);

        //save game
        fout << endl << "Choice: Get together with your boss more often and buy your clients drinks" << endl;
        fout << "You often ask your boss to go out for dinner after work, and you are socializing more, trying to get on good terms with your clients' bosses." << endl;
    } else if (choice == 3) {
        cout << "You decide to go with the flow, and you think that when the time comes, you will be promoted." << endl;
        cout << "<Satisfaction +1, Wealth -1>" << endl;
        ChangeStats(s, -1, 0, -1);

        //save game
        fout << endl << "Choice: You're happy to be a salty fish" << endl;
        fout << "You decide to go with the flow, and you think that when the time comes, you will be promoted." << endl;
    }
}
