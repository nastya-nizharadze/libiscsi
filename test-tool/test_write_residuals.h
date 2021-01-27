/*
   Copyright (C) 2013 by Ronnie Sahlberg <ronniesahlberg@gmail.com>

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _ISCSI_TESTS_WRITE_RESIDUALS_H_
#define _ISCSI_TESTS_WRITE_RESIDUALS_H_

#include <stddef.h>

struct residuals_test_data {
  size_t cdb_size;
  unsigned int xfer_len;
  unsigned int buf_len;
  unsigned int residuals_kind;
  size_t residuals_amount;
  const char *log_messages;
};

struct task_status {
  int status;
  struct scsi_sense sense;
};

extern bool command_is_implemented;
extern void write_residuals_test (const struct residuals_test_data *tdata);

#endif /* _ISCSI_TESTS_WRITE_RESIDUALS_H_ */
