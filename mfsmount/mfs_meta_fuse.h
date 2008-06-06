/*
   Copyright 2008 Gemius SA.

   This file is part of MooseFS.

   MooseFS is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, version 3.

   MooseFS is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with MooseFS.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _MFS_META_FUSE_H_
#define _MFS_META_FUSE_H_

#include <fuse_lowlevel.h>

void mfs_meta_statfs(fuse_req_t req);
//void mfs_meta_access(fuse_req_t req, fuse_ino_t ino, int mask);
void mfs_meta_lookup(fuse_req_t req, fuse_ino_t parent, const char *name);
void mfs_meta_getattr(fuse_req_t req, fuse_ino_t ino, struct fuse_file_info *fi);
void mfs_meta_setattr(fuse_req_t req, fuse_ino_t ino, struct stat *stbuf, int to_set, struct fuse_file_info *fi);
void mfs_meta_unlink(fuse_req_t req, fuse_ino_t parent, const char *name);
void mfs_meta_rename(fuse_req_t req, fuse_ino_t parent, const char *name, fuse_ino_t newparent, const char *newname);
void mfs_meta_opendir(fuse_req_t req, fuse_ino_t ino, struct fuse_file_info *fi);
void mfs_meta_readdir(fuse_req_t req, fuse_ino_t ino, size_t size, off_t off, struct fuse_file_info *fi);
void mfs_meta_releasedir(fuse_req_t req, fuse_ino_t ino, struct fuse_file_info *fi);
void mfs_meta_open(fuse_req_t req, fuse_ino_t ino, struct fuse_file_info *fi);
void mfs_meta_release(fuse_req_t req, fuse_ino_t ino, struct fuse_file_info *fi);
void mfs_meta_read(fuse_req_t req, fuse_ino_t ino, size_t size, off_t off, struct fuse_file_info *fi);
void mfs_meta_write(fuse_req_t req, fuse_ino_t ino, const char *buf, size_t size, off_t off, struct fuse_file_info *fi);
void mfs_meta_init(int debug_mode,int local_mode);

#endif
