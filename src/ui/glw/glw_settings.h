/*
 *  Showtime Mediacenter
 *  Copyright (C) 2007-2013 Lonelycoder AB
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *  This program is also available under a commercial proprietary license.
 *  For more information, contact andreas@lonelycoder.com
 */

#pragma once

typedef struct glw_settings {
  int gs_size;
  int gs_underscan_h;
  int gs_underscan_v;
  int gs_screensaver_delay;
  int gs_wrap;

  struct setting *gs_setting_size;
  struct setting *gs_setting_underscan_v;
  struct setting *gs_setting_underscan_h;
  struct setting *gs_setting_screensaver;
  struct setting *gs_setting_wrap;

  struct prop *gs_settings;
  struct htsmsg *gs_settings_store;

} glw_settings_t;

extern glw_settings_t glw_settings;

void glw_settings_adj_size(int delta);

void glw_settings_init(void);

void glw_settings_fini(void);
