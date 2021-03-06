/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/*
 * viking -- GPS Data and Topo Analyzer, Explorer, and Manager
 *
 * Copyright (C) 2003-2005, Evan Battaglia <gtoevan@gmx.net>
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
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */
#ifndef _VIKING_TRWLAYER_PROPWIN_H
#define _VIKING_TRWLAYER_PROPWIN_H

#include <glib.h>
#include <gtk/gtk.h>
#include "viktrack.h"

G_BEGIN_DECLS

#define VIK_TRW_LAYER_PROPWIN_SPLIT 1
#define VIK_TRW_LAYER_PROPWIN_REVERSE 2
#define VIK_TRW_LAYER_PROPWIN_DEL_DUP 3
#define VIK_TRW_LAYER_PROPWIN_SPLIT_MARKER 4

void vik_trw_layer_propwin_init ();

void vik_trw_layer_propwin_run ( GtkWindow *parent,
								 VikTrwLayer *vtl,
								 VikTrack *tr,
								 gpointer vlp,
								 VikViewport *vvp,
								 gboolean start_on_stats );

gpointer vik_trw_layer_propwin_main ( GtkWindow *parent,
                                      VikTrwLayer *vtl,
                                      VikTrack *tr,
                                      VikViewport *vvp,
                                      GtkWidget *self,
                                      gboolean show );

void vik_trw_layer_propwin_main_draw_blob ( gpointer self, VikTrackpoint *trkpt );

gboolean vik_trw_layer_propwin_main_refresh ( VikLayer *vtl );

vik_trw_and_track_t vik_trw_layer_propwin_main_get_track ( gpointer self );

void vik_trw_layer_propwin_main_close ( gpointer self );

/**
 * Update this property dialog
 * e.g. if the track has been renamed
 */
void vik_trw_layer_propwin_update ( VikTrack *trk );

G_END_DECLS

#endif
