#include "syslib.h"

PUBLIC int sys_schedule(endpoint_t proc_ep,
			int priority,
			int quantum,
			int cpu,int fss_priority)
{
	message m;

	m.SCHEDULING_ENDPOINT = proc_ep;
	m.SCHEDULING_PRIORITY = priority;
	m.SCHEDULING_QUANTUM  = quantum;
	m.SCHEDULING_CPU = cpu;
	m.SCHEDULING_FSS_PRIO =fss_priority;
	return(_kernel_call(SYS_SCHEDULE, &m));
}
