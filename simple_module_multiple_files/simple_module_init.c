#include<linux/init.h>
#include<linux/module.h>

MODULE_LICENSE("GPL");

int ex01_simple_module_init(void)
{
 printk(KERN_ALERT "Inside the %s Function\n", __FUNCTION__ );
 return 0;
}


module_init(ex01_simple_module_init);
