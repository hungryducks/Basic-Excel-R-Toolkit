/*
* Basic Excel R Toolkit (BERT)
* Copyright (C) 2014-2016 Structured Data, LLC
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
* You should have received a copy of the GNU General Public License along
* with this program; if not, write to the Free Software Foundation, Inc.,
* 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*
*/

#ifndef __AUTOCOMPLETE_H
#define __AUTOCOMPLETE_H

#include <string>

/** class encapsulating AC data */
class AutocompleteData {

public:
	std::string comps;
	std::string token;
	std::string signature;
	std::string addition;
	std::string function;

	int tokenIndex;
	bool file;

};

#endif // #ifndef __AUTOCOMPLETE_H
