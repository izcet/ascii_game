#ifndef SHARED_H
# define SHARED_H

#include <linux/input.h>
#include <sys/types.h>
#include <sys/stat.h>
//#include <time.h>

#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

#define WALL		'#'
#define MAP_SIZE	80
#define VIEW_W		20
#define VIEW_H		15

/*
   781
   602
   543
*/

typedef struct		ent
{
		int			r; //	row
		int			c; //	col
		int			hp; //	health points
		char		d; //	direction
}					t_entity;

typedef struct		box
{
		char		c; //		the character to display, default is ' ' or BLOCK
		char		*color; //	to implement when i get better ascii color codes
		t_entity	ent; //		the entity in the box

		// what else goes in the box?
}					t_box;

typedef struct		grid
{
		t_box		**grid;
}					t_room;

typedef struct		list
{
		void		*data;
		t_list		next;
		t_list		prev;
}					t_list;


int					check_file(char *file);
t_room				make_room(char *file);
void				free_room(t_room *room);

//t_entity			make_player();
//void				kill_entity();
//void				on_death();

#endif
