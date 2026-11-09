#ifndef _LINUX_ZEROMOUNT_H
#define _LINUX_ZEROMOUNT_H

#include <linux/types.h>
#include <linux/path.h>
#include <linux/stat.h>
#include <linux/namei.h>

#ifdef CONFIG_ZEROMOUNT
extern int zm_sus_path(struct path *path);
extern int zm_open(struct path *path);
extern int zm_getattr(struct path *path, struct kstat *stat);
#else
static inline int zm_sus_path(struct path *path) { return 0; }
static inline int zm_open(struct path *path) { return 0; }
static inline int zm_getattr(struct path *path, struct kstat *stat) { return 0; }
#endif

#endif /* _LINUX_ZEROMOUNT_H */
