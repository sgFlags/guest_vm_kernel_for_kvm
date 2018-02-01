#include <linux/unistd.h>
#include <linux/syscalls.h>

SYSCALL_DEFINE0(vcpu_info)
{
    int ret = 0;


    printk("syscall succeed!!\n");
    return ret;
}
