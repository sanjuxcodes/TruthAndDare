Truth and Dare Game

A simple and fun Truth and Dare game built in C. This command-line program allows players to take turns answering truth questions or performing dares randomly chosen by the program.

Features

Interactive Gameplay: Players take turns selecting "Truth" or "Dare."
Random Selection: Questions and dares are chosen randomly to keep the game engaging.
Customizable Questions and Dares: The program can be easily modified to include your own set of questions and challenges.
Multiplayer Support: Designed for multiple players to enjoy together.
How to Use

Compile the Code
Use a terminal or command prompt to compile the game:
gcc -o truth_and_dare truth_and_dare.c
Run the Game
Start the game by running the compiled file:
./truth_and_dare
Gameplay Instructions
Enter the number of players.
The program will prompt each player to choose between "Truth" or "Dare."
A random truth question or dare will be displayed.
Play until everyone has had their turn, or quit the game whenever you like.
Example Interaction
Enter the number of players: 3

Player 1, choose (Truth/T) or (Dare/D): T
Question: What is the most embarrassing thing you've done?

Player 2, choose (Truth/T) or (Dare/D): D
Dare: Sing a song loudly in front of everyone.
File Structure

truth_and_dare.c:
The main source code file containing all the game logic.
questions.txt (optional):
You can create an external file to store additional truth questions and dares. Modify the program to read from this file for enhanced customization.
Customization

Add Your Own Questions and Dares:
Modify the arrays in the source code to include your favorite truth questions and dares. Example:
char *truths[] = {"What is your biggest fear?", "Who was your first crush?"};
char *dares[] = {"Do 10 push-ups.", "Dance for 30 seconds."};
Change the Random Logic:
The random selection is currently based on rand(). You can enhance this by seeding it with the current time for better randomness:
srand(time(0));
Future Enhancements

Score Tracking: Add a points system for completed truths and dares.
Dynamic Input: Allow players to input custom questions and dares during the game.
Graphical Interface: Implement a simple GUI for a more engaging experience.
Save Progress: Store results in a file for post-game review or to continue the game later.
Requirements

A C compiler such as gcc.
Basic familiarity with running command-line applications.
Contributing

Feel free to enhance this project! Fork the repository, add your features, and submit a pull request.

License

This project is open-source and available under the MIT License.

Author

Sanjoy Das
Enthusiastic about building simple and fun games.
Find me on LinkedIn or GitHub.
