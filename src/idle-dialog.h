/*   Keyboard inactivity timout dialog for GTimeTracker - a time tracker
 *   Copyright (C) 2001,2002,2003 Linas Vepstas <linas@linas.org>
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef GTT_INACTIVITY_DIALOG_H_
#define GTT_INACTIVITY_DIALOG_H_

/* The Inactivity Dialog will check to see if the keyboard
 * and mouse have been inactive some set amount of time.
 * If so, it will stop the currently running timer, and 
 * pop up a dialog asking the user if they want to restart 
 * the idled project.  The dialog includes the ability to modify
 * the amount of idle time credited to the project.
 */

typedef struct GttInactiveDialog_s GttInactiveDialog;

GttInactiveDialog * inactive_dialog_new (void);

void show_inactive_dialog (GttInactiveDialog *id);
		  

#endif GTT_INACTIVITY_DIALOG_H_