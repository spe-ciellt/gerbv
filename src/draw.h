/*
 * gEDA - GNU Electronic Design Automation
 * This file is a part of gerbv.
 *
 *   Copyright (C) 2000-2001 Stefan Petersen (spe@stacken.kth.se)
 *
 * $Id$
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111 USA
 */

#ifndef DRAW_H
#define DRAW_H

#include <gdk/gdk.h>
#include "gerber.h"

/*
 * Convert a gerber image to a GTK pixmap to be displayed
 */
int 
image2pixmap(GdkPixmap **pixmap, struct gerb_image *image, 
	     int scale, gint trans_x, gint trans_y, enum polarity_t polarity, 
	     GdkColor *fg_color, GdkColor *bg_color);

#endif /* DRAW_H */