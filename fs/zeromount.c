// SPDX-License-Identifier: GPL-2.0
/*
 * ZeroMount stub implementation.
 *
 * The readdir/statfs patch is present in the kernel tree, but the full
 * ZeroMount driver (which provides the actual spoofing logic) was not
 * integrated. Provide compile-safe no-op implementations so the kernel
 * builds and boots normally.
 *
 * - zeromount_is_injected_file(): always returns false (no file hidden)
 * - zeromount_spoof_statfs():     does nothing (no spoofing)
 */
#include <linux/kernel.h>
#include <linux/types.h>
#include <linux/fs.h>
#include <linux/path.h>
#include <linux/statfs.h>
#include <linux/zeromount.h>

bool zeromount_is_injected_file(struct inode *inode)
{
	return false;
}

void zeromount_spoof_statfs(const struct path *path, struct kstatfs *buf)
{
	/* no-op: ZeroMount spoofing not implemented */
}
