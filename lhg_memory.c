#include <linux/ioport.h>
#include <linux/kernel.h>
#include <linux/device.h>
#include <linux/highmem.h>
#include <linux/pfn.h>
#include <linux/module.h>
#include <linux/version.h>
#include <linux/string.h>
#include <linux/err.h>
#include <linux/scatterlist.h>
#include <linux/delay.h>

#include <net/sock.h>
#include <net/tcp.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Robert Marko <robimarko@gmail.com>");
MODULE_DESCRIPTION("LHG Memory test");

static int owl = 0;
module_param(owl, int, 0);
MODULE_PARM_DESC(owl, "An OwL");

extern struct resource iomem_resource;

static int __init lhg_mem_module_init(void){
	if(1){
		printk("This shit is running\n");
		return -ENOMEM;
	}
	return 0;
}//--------------------------------------------------------

//*********************************************************

static void __exit lhg_mem_module_exit (void){
}//--------------------------------------------------------

module_init(lhg_mem_module_init);
module_exit(lhg_mem_module_exit);
