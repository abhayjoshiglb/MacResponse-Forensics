/*
 
 MacResponse: Incident Response Toolkit for Mac OS X
 
 Copyright (C) 2011 - Assured Information Security, Inc. All rights reserved.

 Authors:
 Christopher Patterson <pattersonc _at_ ainfosec.com>
 Jason Nashold <nasholdj _at_ ainfosec.com>

 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 2 of the License, or
 (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
 
*/

#import <Foundation/Foundation.h>

#import "CollectionModule.h"

#define NETWORKCONNECTIONS_STATUS_ERROR_UNABLE_TO_ALLOCATE_MEMORY	((collectionmodule_status_t)(COLLECTIONMODULE_STATUS_CUSTOM_MODULE_ERROR - 1))

@interface NetworkConnections : CollectionModule {

}

- (Boolean)getNetworkConnections10_5;
- (Boolean)getNetworkConnections10_6;
- (Boolean)getRoutingTable;

@end
