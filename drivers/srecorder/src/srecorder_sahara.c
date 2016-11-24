#include <linux/kallsyms.h>
#include <linux/kernel.h>
#include <linux/version.h>
#include <linux/module.h>
#include <linux/fs.h>
#include <linux/file.h>
#include <linux/highmem.h>
#include <linux/vmalloc.h>
#include <linux/mm.h>
#include <linux/io.h>
#include <linux/of.h>
#include <asm/uaccess.h>


#include "srecorder_log.h"
#include "srecorder_sahara.h"

extern unsigned long cma_get_base_by_name(const char *name);
extern unsigned long cma_get_size_by_name(const char *name);

void srecorder_sahara_clear(struct sahara_boot_log *head)
{
	head->sbl_log_addr=0;
	head->lk_log_addr=0;
	head->sbl_log_size=0;
	head->lk_log_size=0;
	printk(KERN_ERR "srecorder bootloader to kernel addr clear\n");
}
