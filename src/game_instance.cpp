/* $Id: game_instance.cpp 49649 2011-05-24 21:57:26Z espreon $ */
/*
   Copyright (C) 2011 by Lukasz Dobrogowski <lukasz.dobrogowski@gmail.com>
   Part of the Battle for Wesnoth Project http://www.wesnoth.org/

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY.

   See the COPYING file for more details.
*/

#include "game_instance.hpp"

#include "log.hpp"

#define LOG_GENERAL LOG_STREAM(info, lg::general)
#define WRN_GENERAL LOG_STREAM(warn, lg::general)
#define DBG_GENERAL LOG_STREAM(debug, lg::general)

game_instance::game_instance()
{
}
