#include<linux/init.h>
#include<linux/module.h>

MODULE_LICENSE("GPL");

void ex01_simple_module_exit(void)
{
 printk(KERN_ALERT "Inside the %s Function\n", __FUNCTION__ );

}

module_exit(ex01_simple_module_exit);
