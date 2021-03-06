/*
   getpeercred.h - function for determining information about the
                   other end of a unix socket
   This file is part of the nss-pam-ldapd library.

   Copyright (C) 2008, 2009, 2010, 2012 Arthur de Jong

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with this library; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
   02110-1301 USA
*/

#ifndef COMPAT__GETPEERCRED_H
#define COMPAT__GETPEERCRED_H 1

/* This function tries to determine the (effective) user id, group id
   and process id of the other end of the specified socket.
   Any of the uid, gid and pid paramaters may be NULL to not update
   that information.
   On success, zero is returned.  On error, -1 is returned, and errno
   is set appropriately. */
int getpeercred(int sock, uid_t *uid, gid_t *gid, pid_t *pid);

#endif /* not COMPAT__GETPEERCRED_H */
