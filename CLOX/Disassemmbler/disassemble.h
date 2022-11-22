#ifndef clox_debug_h
#define clox_debug_h

#include "../Chunk//chunk.h"

void disassembleChunk(Chunk* chunk, const char* name);
int disassembleInstruction(Chunk* chunk, int offset);

#endif
