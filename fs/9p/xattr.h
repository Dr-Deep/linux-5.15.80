/*
 * Copyright IBM Corporation, 2010
 * Author Aneesh Kumar K.V <aneesh.kumar@linux.vnet.ibm.com>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2.1 of the GNU Lesser General Public License
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it would be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 */
#ifndef FS_9P_XATTR_H
#define FS_9P_XATTR_H

#include <linux/xattr.h>
#include <net/9p/9p.h>
#include <net/9p/client.h>

extern const struct xattr_handler *v9fs_xattr_handlers[];
extern const struct xattr_handler v9fs_xattr_acl_access_handler;
extern const struct xattr_handler v9fs_xattr_acl_default_handler;

ssize_t v9fs_fid_xattr_get(struct p9_fid *fid, const char *name,
			   void *buffer, size_t buffer_size);
ssize_t v9fs_xattr_get(struct dentry *dentry, const char *name,
		       void *buffer, size_t buffer_size);
int v9fs_fid_xattr_set(struct p9_fid *fid, const char *name,
		       const void *value, size_t value_len, int flags);
int v9fs_xattr_set(struct dentry *dentry, const char *name,
		   const void *value, size_t value_len, int flags);
ssize_t v9fs_listxattr(struct dentry *dentry, char *buffer,
		       size_t buffer_size);
#endif /* FS_9P_XATTR_H */
