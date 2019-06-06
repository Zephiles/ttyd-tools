#pragma once

#include <cstdint>

namespace gc::os {

struct ChunkInfo
{
	ChunkInfo *prev;
	ChunkInfo *next;
	uint32_t size;
} __attribute__((__packed__));

struct HeapInfo
{
	uint32_t capacity;
	ChunkInfo *firstFree;
	ChunkInfo *firstUsed;
} __attribute__((__packed__));

extern "C" {

extern HeapInfo *HeapArray;
extern int32_t NumHeaps;

}

}