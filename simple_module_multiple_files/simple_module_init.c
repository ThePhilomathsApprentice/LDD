#include<linux/init.h>
#include<linux/module.h>

MODULE_LICENSE("GPL");

int simple_module_multiple_files_init(void)
{
 printk(KERN_ALERT "Inside the %s Function\n", __FUNCTION__ );
 return 0;
}


module_init(simple_module_multiple_files_init);
