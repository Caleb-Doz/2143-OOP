## Pr.02: Knuckle Bones.
### Caleb Dozier.
### This program is an attempt at recreating the game Knuckle Bones from Cult of the Lamb. This game requires two players, a dice for each player to roll, and 3 lanes to place the rolled value into.

Classes.

Parent Classes.
Games, Players.

Derived Classes.
KnuckleBones, Dice, Board.

Game Class.
   . Data: Players. Scores. Rules.
   . Actions: Start_Game(). End_Game(). Get_Winner(). 
   . Relationships: Game Class sets the rules and layout for the players.
Player Class.
   . Data: Name. Score. Stats.
   . Actions: Roll_Dice(). Get_Score(). Change_Score().
   . Relationships: Player Class rolls the dice and saves the scores for the game.

KnuckleBones Class.
   . Data: Rules. KB_Rules().
   . Actions: Start_Round(). End_Round(). Calc-Winner(). 
   . Relationships: KnuckleBones Class inherits from Game Class to set more specific rules.
Dice Class.
   . Data: Sides. Values.
   . Actions: Roll(). Get_Value().
   . Relationships: Dice Class is used to Get and Set scores in KnuckleBones.
Board Class.
   . Data: Grid.
   . Actions: Set_Value(), 
   . Relationships: Board Class is used by KnuckleBones to set the game's layout.

   Game has-a Player.   Compisition.
   KnuckleBones is-a Game.  Inheritance.
   KnuckleBones has-a Dice.  Compisition.
   KnuckleBones has-a Board. Compisition

Ncurses Confirmation.

