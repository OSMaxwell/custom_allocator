#ifndef MALLOC_HOOK_H
#define MALLOC_HOOK_H
#include <map>

// Contains necessary information about Buffer to
// container Tag bindings.
struct GLOBAL {
  void* address_table[150];
  size_t size_table[150];
  std::map<void*, size_t> TagToStaticBuf;  // {ADDRESS,SIZE}
  int tag = 0;
};  // Global

extern GLOBAL global;
extern void *__libc_malloc(std::size_t size);

#endif