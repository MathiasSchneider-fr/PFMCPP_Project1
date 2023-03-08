#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: Phil
//  action 1: phil runs
phil.run();
//  action 2: phil eats a bad donut
phil.eatABadDonnut();
//  action 3: phil rides a horse
phil.rideAHorse();

//  2)
//  Noun: motherInLaw
//  action 1: annoys me
motherInLaw.annoyMe();
//  action 2: annoys me again
motherInLaw.annoyMeAgain();
//  action 3: finally leaves
motherInLaw.finallyLeave();

//  3) 
//  Noun: finger
//  action 1: pushes the button
finger.pushTheButton();
//  action 2: rises up
finger.riseUp();
//  action 3: hides inside the fist
finger.hideInsideTheFist();

//  4)
//  Noun: Rita
//  action 1: dates with Phil
rita.dateWithPhill();
//  action 2: kisses Phil
rita.kissPhil();
//  action 3: pushes Phill into the water
rita.pushesPhillIntoTheWater();

//  5)
//  Noun: foot
//  action 1: hits ball
foot.hitBall();
//  action 2: hits tibia
foot.hitTibia();
//  action 3: hits post, ouch.
foot.hitPostOuch();


//  6) 
//  Noun: teacher
//  action 1: distributes the papers
teacher.distributesThePapers();
//  action 2: corrects the papers
teacher.correctThePapers();
//  action 3: hits a student
teacher.hitAStudent();

//  7)
//  Noun: music teacher
//  action 1: sings out of tune
musicTeacher.singOutOfTune();
//  action 2: breaks his piano
musicTeacher.breakPiano();
//  action 3: throws flute at a student
musicTeacher.throwFluteStudent();

//  8) 
//  Noun: head
//  action 1: rotates clockwise
head.rotateClockwise();
//  action 2:rotates couter clockwise
head.rotateCounterClockWise();
//  action 3: falls on the floor
head.fallFloor();

//  9)
//  Noun: Ryan
//  action 1: learns that Rita is no longer with Phill
ryan.learnRitaIsSingle();
//  action 2: asks Rita out
ryan.askRitaOut();
//  action 3: takes a rake
ryan.takeRake();

//  10)
//  Noun: Me 
//  action 1: begins part 1
me.beginPartOne();
//  action 2: rakes my brains
me.rakeBrains();
//  action 3: finishes part 1
me.finishPartOne();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
