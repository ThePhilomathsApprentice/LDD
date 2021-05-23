#include<linux/init.h>
#include<linux/module.h>

MODULE_LICENSE("GPL");

void simple_module_multiple_files_exit(void)
{
 printk(KERN_ALERT "Inside the %s Function\n", __FUNCTION__ );

}

module_exit(simple_module_multiple_files_exit);
