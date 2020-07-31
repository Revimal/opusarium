#ifndef OPUSARIUM_ARCHDEPS_H
#define OPUSARIUM_ARCHDEPS_H

#if defined(OPUSARIUM_BUILD_ARCHITECTURE_AMD64)
#include <amd64/opusarium_amd64_common.h>
#include <amd64/opusarium_amd64_cycle.h>
#include <amd64/opusarium_amd64_endian.h>
#else /* Architecture based includes */
#error Unsupported architecture
#endif /* Architecture based includes */

#endif /* OPUSARIUM_ARCHDEPS_H */
