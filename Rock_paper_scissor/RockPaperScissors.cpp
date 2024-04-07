#include "RockPaperScissors.hpp"

// Static variable initialization
int RockPaperScissors::playerCount = 0;


/**
 * Constructor for the RockPaperScissors class.
 */
RockPaperScissors::RockPaperScissors(){
    playerNumber = ++playerCount;
    std::cout << "Hello Player " << playerNumber << std::endl;
}

/**
 * Allows the player to enter their play and validates the input.
 *
 * @param None
 *
 * @return None
 *
 * @throws None
 */
void RockPaperScissors::choosePlay(){
    std::cout << "Player " << playerNumber << ", enter your play: ";
    std::cin >> play;
    if(RockPaperScissors::isValidInput(play)){
        std::cout << "Your play is: " << play << std::endl;
    }
    else{
        std::cout << "Invalid input. Please try again." << std::endl;
        choosePlay();
    }
}

/**
 * Checks if the input provided is a valid choice for rock-paper-scissors game.
 *
 * @param input the input string to be checked
 *
 * @return true if input is "rock", "paper", or "scissors", false otherwise
 */
bool RockPaperScissors::isValidInput(std::string& input) { 
    std::transform(input.begin(), input.end(), input.begin(), [](unsigned char c) { return std::tolower(c); });
    return input == "rock" || input == "paper" || input == "scissors";
}


/**
 * Get the current play in Rock, Paper, Scissors game.
 *
 * @return the current play
 */
std::string RockPaperScissors::getPlay(void) const{
    return play;
}


/**
 * Judges the outcome of a Rock, Paper, Scissors game between two players.
 *
 * @param player1 The first player's choice
 * @param player2 The second player's choice
 *
 * @return None
 *
 * @throws None
 */
void RockPaperScissors::judge(const RockPaperScissors& player1, const RockPaperScissors& player2){
    if(player1.getPlay() == player2.getPlay()){
        std::cout << "It's a tie!" << std::endl;
    }
    else if(player1.getPlay() == "rock" && player2.getPlay() == "scissors"){
        std::cout << "Player 1 wins!" << std::endl;
    }
    else if(player1.getPlay() == "rock" && player2.getPlay() == "paper"){
        std::cout << "Player 2 wins!" << std::endl;
    }
    else if(player1.getPlay() == "paper" && player2.getPlay() == "rock"){
        std::cout << "Player 1 wins!" << std::endl;
    }
    else if(player1.getPlay() == "paper" && player2.getPlay() == "scissors"){
        std::cout << "Player 2 wins!" << std::endl;
    }
    else if(player1.getPlay() == "scissors" && player2.getPlay() == "rock"){
        std::cout << "Player 2 wins!" << std::endl;
    }
    else if(player1.getPlay() == "scissors" && player2.getPlay() == "paper"){
        std::cout << "Player 1 wins!" << std::endl;
    }
    else{
        std::cout << "Error!" << std::endl;
    }
}