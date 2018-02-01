#include <linux/kvm_para.h>
#include <asm/hypervisor.h>
#include <asm/kvm_guest.h>

int vcpu_info(int vcpu_id)
{       
        int ret = 0;
        
        ret = kvm_hypercall1(KVM_HC_X86_VCPU_INFO, vcpu_id);
        return ret;
}

asmlinkage int sys_vcpu_info(void)
{
	int ret = 0;

	//ret = vcpu_info(2);
	printk("syscall succeed!!\n");
	return ret;	
}
