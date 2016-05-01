# Contributing to the project

So you want to know how you can help?? You've come to the right place!
Below you will find many ways you can help.
First and foremost check the TODO's to see what needs to be done.
Once you're ready to start programming see the Programming Standards section.

### TODO's

#### LARGER GOALS
- [ ] Create functioning single player game
- [ ] Create functioning multiplayer game

#### PROGRAMMING
- [ ] Create set class (???) that will hold data for the cards to generate from
- [ ] Figure out a way to quickly generate unique cards with abilities
- [ ] Finish settings class and add actual settings to the game
- [ ] Add combat methods to Card class
- [ ] Create deck editor (as its own class?)
- [ ] Create single player AI to play against
- [ ] Finish Game class unload function
- [ ] Create UI for the game itself in the draw() method.
- [ ] Anyone feel we need a CLA for testing?
- [ ] Finish quit() method in MainMenu class

#### DONE
- [X] Create basic class for a card
- [X] Create a card list for the first set
- [X] Create deck class that will hold 20 cards
- [X] Create basic entrance and menu system for the game
- [X] Create rules for the card game
- [X] Layout the turn order

These TODO's are very broad and this list will grow as new idea's are brought to the table and more people begin to contribute.

Message me with questions or visit me on Tumblr at import-os.tumblr.com

### Pull Request

For something to be considered for merging in to master it must be 
submitted as a Pull Request to development first. All Pull Requests 
will be given at least 24 hours before being merged in to the 
development branch. Pull requests may take longer to be merged if more 
needs to change. On every monday the development branch will have a pull 
request made to be merged in to the master repository. This pull request 
will sit for one week to be reviewed until it is merged in on Sunday. 
The weekly pull request may be delayed if more changes need to be made.

### Programming Standards

#### Code Blocks
````c++
function Class::foo(arg bar) {
	// do stuff
	// 4 space tabbed indent
}
````

#### Function and Variable Naming
````c++
function Class::my_function_name(arg variableName) {
	// do stuff
}
````

#### Class Naming
````c++
class ClassName {
private:
	// private variables and functions here
	
public:
	// public variables and functions here
};
````

#### File Naming
````c++
cppFile.cpp
headerFile.h
````
