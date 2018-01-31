#include <linux/unistd.h>
#include <linux/syscalls.h>

SYSCALL_DEFINE0(vcpu_info)
{
    printk("syscall succeed!!\n");
}
