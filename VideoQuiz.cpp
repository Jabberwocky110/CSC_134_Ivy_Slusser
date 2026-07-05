/*
@author: Ivy Slusser
@date: 07/04/2026
@purpose: This program calculates the average test scores of students in a class and whether individual students and the entire class passed.
*/
//Include the iostream library for input and output
#include <iostream>
//Use namespace to avoid typing std
using namespace std;
//A function is created.
int main()
{
    int score;
    int count = 0;
    int passingScores = 0;
    float total = 0.0f;
    bool continueEntering = true;
    //The loop continues when the user wants to enter another score.
    while (continueEntering)
    {
        cout << "Enter a test score (0 - 100): ";
        cin >> score;
        //A score is added to the total, and the counter increases.
        total += score;
        count++;
        //A student passes when the score is greater than or equal to 70, and the score is added to the passing scores for the class.
        if (score >= 70)
        {
            passingScores++;
        }
        //The user decides whether they want to continue entering scores, and if they enter 1, the loop continues.
        cout << "Enter another score? (1 for true, 0 for false): ";
        cin >> continueEntering;
    }
    //The average starts at zero.
    float average = 0.0f;
    //If the counter is greater than zero, the total score is divided by the number of scores entered.
    if (count > 0)
    {
        average = total / count;
    }
    //A title, scores entered, passing scores, and average score are printed.
    cout << "\nResults" << endl;
    cout << "-------" << endl;
    cout << "Scores Entered: " << count << endl;
    cout << "Passing Scores: " << passingScores << endl;
    cout << "Average Score: " << average << endl;
    //If the average is greater than or equal to 70, an average student in the class has passed.
    bool classPassed = average >= 70.0f;
    //It is printed whether the class has passed.
    cout << "Class Average Passing: " << classPassed << endl;
    //Zero is returned.
    return 0;
}
