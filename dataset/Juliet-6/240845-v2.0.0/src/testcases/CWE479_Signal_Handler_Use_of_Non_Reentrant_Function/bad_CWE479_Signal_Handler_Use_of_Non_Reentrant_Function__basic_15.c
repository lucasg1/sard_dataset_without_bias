void FUN0(int sig)
{
    void *voidPointer = malloc(10);
    if (voidPointer == NULL) {exit(-1);}
<START>
    free(voidPointer);
<END>
}
static volatile sig_atomic_t volatileSigAtomic = 0;
void FUN1(int sig)
{
    volatileSigAtomic = sig;
}
void FUN2()
{
    switch(6)
    {
    case 6:
        signal(SIGINT, FUN0);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
