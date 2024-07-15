void FUN0(int sig)
{
    void *voidPointer = malloc(10);
    if (voidPointer == NULL) {exit(-1);}
    free(voidPointer);
}
static volatile sig_atomic_t volatileSigAtomic = 0;
void FUN1(int sig)
{
    volatileSigAtomic = sig;
}
static int FUN2()
{
    return 1;
}
static int FUN3()
{
    return 0;
}
void FUN4()
{
    if(FUN3())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        signal(SIGINT, FUN1);
    }
}
void FUN5()
{
    if(FUN2())
    {
        signal(SIGINT, FUN1);
    }
}
