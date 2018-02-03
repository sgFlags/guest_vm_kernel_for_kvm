#include <linux/kvm_para.h>
#include <asm/hypervisor.h>
#include <asm/kvm_guest.h>
#include <asm/syscalls.h>
#include <linux/cpu.h>

int vcpu_info(int vcpu_id)
{       
        int ret = 0;
        
        ret = kvm_hypercall1(KVM_HC_X86_VCPU_INFO, vcpu_id);
        return ret;
}

asmlinkage int sys_vcpu_info(void)
{
	int ret = 0;
	int i;

	printk("syscall succeed222!!\n");
	for (i = 0; i < num_online_cpus(); i++) {
		ret = vcpu_info(i);
		if (ret)
			return ret;
	}
	return ret;
}
