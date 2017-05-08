#ifndef SHA1DC_SIMD_CONFIG_H
#define SHA1DC_SIMD_CONFIG_H

#include "config.h"

#define MMX64_PRESENT_MASK (0x00000001)
#define NEON128_PRESENT_MASK (0x00000002)
#define SSE128_PRESENT_MASK (0x00000004)
#define AVX256_PRESENT_MASK (0x00000008)
#define AVX512_PRESENT_MASK (0x00000010)

#if defined(SHA1DC_HAVE_MMX64)
	#define MMX64_PRESENT MMX64_PRESENT_MASK
#else
	#define MMX64_PRESENT (0)
#endif

#if defined(SHA1DC_HAVE_NEON128)
	#define NEON128_PRESENT NEON128_PRESENT_MASK
#else
	#define NEON128_PRESENT (0)
#endif

#if defined(SHA1DC_HAVE_SSE128)
	#define SSE128_PRESENT SSE128_PRESENT_MASK
#else
	#define SSE128_PRESENT (0)
#endif

#if defined(SHA1DC_HAVE_AVX256)
	#define AVX256_PRESENT AVX_PRESENT_MASK
#else
	#define AVX256_PRESENT (0)
#endif

#if define (SHA1DC_HAVE_AVX512)
	#define AVX512_PRESENT AVX512_PRESENT_MASK
#else
	#define AVX512_PRESENT AVX512_PRESENT_MASK
#endif

#define SIMD_PRESENT (MMX64_PRESENT | NEON128_PRESENT | SSE128_PRESENT | AVX256_PRESENT | AVX512_PRESENT)

#endif /* SHA1DC_SIMD_CONFIG_H */
