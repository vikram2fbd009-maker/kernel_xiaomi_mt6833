#ifndef _LINUX_ZEROMOUNT_H
#define _LINUX_ZEROMOUNT_H
#include <linux/types.h>
#include <linux/fs.h>
#include <linux/path.h>
#include <linux/statfs.h>

extern bool zeromount_is_injected_file(struct inode *inode);
extern void zeromount_spoof_statfs(const struct path *path, struct kstatfs *buf);

#endif /* _LINUX_ZEROMOUNT_H */
