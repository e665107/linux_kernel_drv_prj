/*
 * a simple kernel module: hello
 *
 * Licensed under GPLv2 or later.
 */

#include <linux/init.h>
#include <linux/module.h>


static int __init hello_init(void)
{
    printk(KERN_INFO "Hello World module loaded!\n");
    return 0;
}


static void __exit hello_exit(void)
{
    printk(KERN_INFO "Hello World exit\n ");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_AUTHOR("e665106");
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("A simple Hello World Module");
MODULE_ALIAS("a simplest module"); 




