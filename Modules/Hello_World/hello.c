#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("Embedded Master");
MODULE_DESCRIPTION("A simple Hello World Linux Kernel Module");

static int __init hello_init(void)
{
    printk(KERN_INFO "Hello World\n");
    return 0;
}

static void __init hello_exit(void)
{
    printk(KERN_INFO "Good Bye World\n");
}

module_init(hello_init);
module_exit(hello_exit);