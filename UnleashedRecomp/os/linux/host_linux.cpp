#include <os/host.h>
#include <cpuid/cpuinfo.hpp>

bool os::host::IsCapableCPU()
{
    cpuid::cpuinfo cpuid;

    return cpuid.has_avx();
}
