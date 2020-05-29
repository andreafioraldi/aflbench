#if 1
// WIP: shared memory test case handover, requires current afl++ dev branch
__AFL_FUZZ_INIT();
#endif

int
main(void) {
#if 1
  #ifdef __AFL_HAVE_MANUAL_CONTROL
    __AFL_INIT();
  #endif
    while (__AFL_LOOP(4294967296)) {
    }
#endif

    return 0;
}
