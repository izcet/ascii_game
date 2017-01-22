#ifndef SHARED_H
# define SHARED_H

/*
   781
   602
   543
*/

typedef struct		ent{
		int			r; //	row
		int			c; //	col
		int			hp; //	health points
		char		d; //	direction
}					t_entity;

typedef struct		box{
		char		c; //		the character to display, default is ' ' or BLOCK
		char		*color; //	to implement when i get better ascii color codes
		t_entity	ent; //		the entity in the box
		// what else goes in the box?
typedef struct	grid{
		


#endif
