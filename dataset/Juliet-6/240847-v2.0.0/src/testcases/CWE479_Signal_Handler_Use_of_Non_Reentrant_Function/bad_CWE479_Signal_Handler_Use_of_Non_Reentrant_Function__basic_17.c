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
    int j;
    for(j = 0; j < 1; j++)
    {
        signal(SIGINT, FUN0);
    }
}
