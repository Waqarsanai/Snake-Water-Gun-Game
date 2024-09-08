# Snake, Water, Gun Game in C

This is a simple C program that lets you play the classic **Snake, Water, Gun** game against the computer. The game is similar to **Rock, Paper, Scissors** and follows the same structure for decision-making.

## How the Game Works

You can choose one of the following options:
- `s` for Snake
- `w` for Water
- `g` for Gun

The computer will also randomly choose one of these options. Based on the rules of the game, it will determine whether you win, lose, or if the game ends in a draw.

## Game Rules

### Snake vs Water
- **Snake wins** because the snake "drinks" the water.
- Water loses.

### Water vs Gun
- **Water wins** because water "rusts" the gun.
- Gun loses.

### Gun vs Snake
- **Gun wins** because the gun "shoots" the snake.
- Snake loses.

### Same Choices (Snake vs Snake, Water vs Water, Gun vs Gun)
- **Draw** if both the player and the computer select the same option.
