#include "main.hpp"
/**
 * A description of the entire C++ function.
 *
 * @param paramName description of parameter
 *
 * @return description of return value
 *
 * @throws ErrorType description of error
 */
int main()
{
    RockPaperScissors player1, player2;
    player1.choosePlay();
    player2.choosePlay();
    RockPaperScissors::judge(player1, player2);
    return 0;
}
