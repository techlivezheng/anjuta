/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/*
 * git-shell-test
 * Copyright (C) James Liggett 2010 <jrliggett@cox.net>
 * 
 * git-shell-test is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * git-shell-test is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _GIT_REBASE_PANE_H_
#define _GIT_REBASE_PANE_H_

#include "git-rebase-start-command.h"
#include "git-rebase-continue-command.h"
#include "git-remotes-pane.h"

void on_rebase_start_button_clicked (GtkAction *action, Git *plugin);
void on_rebase_continue_button_clicked (GtkAction *action, Git *plugin);
void on_rebase_skip_button_clicked (GtkAction *action, Git *plugin);
void on_rebase_abort_button_clicked (GtkAction *action, Git *plugin);

#endif