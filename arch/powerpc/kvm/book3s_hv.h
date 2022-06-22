// SPDX-License-Identifier: GPL-2.0-only

#include "../perf/perf_kvm.h"

bool load_vcpu_state(struct kvm_vcpu *vcpu,
			   struct p9_host_os_sprs *host_os_sprs);
void store_vcpu_state(struct kvm_vcpu *vcpu);
void save_p9_host_os_sprs(struct p9_host_os_sprs *host_os_sprs);
void restore_p9_host_os_sprs(struct kvm_vcpu *vcpu,
				    struct p9_host_os_sprs *host_os_sprs);
