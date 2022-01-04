#include <linux/module.h>
#include <linux/init.h>

/* Meta Information */
MODULE_AUTHOR("Vahid Vaisi");
MODULE_DESCRIPTION("Just a hello world Linux Kernel Module");

/**
 * This function is called, when the module is loaded into the kernel
 */
static int __init ModuleInit(void) {
	printk("Hello, Kernel!\n");
	return 0;
}

/**
 * This function is called, when the module is removed from the kernel
 */
static void __exit ModuleExit(void) {
	printk("Goodbye, Kernel\n");
}

module_init(ModuleInit);
module_exit(ModuleExit);


