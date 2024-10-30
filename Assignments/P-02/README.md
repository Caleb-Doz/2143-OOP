## Pr.02: Knuckle Bones.
### Caleb Dozier.
### This program is an attempt at recreating the game Knuckle Bones from Cult of the Lamb. This game requires two players, a dice for each player to roll, and 3 lanes to place the rolled value into.

Classes.
Parent Classes.
Game, Player, Pawn, Level.
Derived Classes.
KnuckleBones, Dice, Board.

Layout.
KnuckleBones is-a Game.         Inheritance.
Game has-a Player.              Composition.
Game has-a Pawn.                Composition.
Game has-a Level.               Composition.
KnuckleBones has-a Dice.        Composition.
KnuckleBones has-a Board.       Composition.
Board is a Level.               Inheritance.
Dice is-a Pawn.                 Inheritance.

Ncurses Confirmation.
