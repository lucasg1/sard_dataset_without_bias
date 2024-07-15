typedef struct _structSigAtomic
{
    sig_atomic_t val;
}   structSigAtomic;
structSigAtomic *VAR0 = NULL;
structSigAtomic *VAR1 = NULL;
void FUN0(int sig)
{
    if (VAR0 != NULL)
    {
        VAR0->val = 2;
    }
}
void FUN1(int sig)
{
    if (VAR1 != NULL)
    {
        VAR1->val = 2;
    }
}
void FUN2()
{
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            structSigAtomic *gStructSigAtomic = NULL;
            signal(SIGINT, SIG_DFL);
            if (VAR1 != NULL)
            {
                free(VAR1);
                VAR1 = 0;
            }
            gStructSigAtomic = (structSigAtomic*)malloc(sizeof(structSigAtomic));
            if (gStructSigAtomic == NULL) {exit(-1);}
            VAR1 = gStructSigAtomic;
            VAR1->val = 1;
            signal(SIGINT, FUN1);
            signal(SIGINT, SIG_DFL);
            if (VAR1 != NULL)
            {
                free(VAR1);
                VAR1 = NULL;
            }
            signal(SIGINT, FUN1);
        }
    }
}
void FUN3()
{
    if(globalReturnsTrue())
    {
        {
            structSigAtomic *gStructSigAtomic = NULL;
            signal(SIGINT, SIG_DFL);
            if (VAR1 != NULL)
            {
                free(VAR1);
                VAR1 = 0;
            }
            gStructSigAtomic = (structSigAtomic*)malloc(sizeof(structSigAtomic));
            if (gStructSigAtomic == NULL) {exit(-1);}
            VAR1 = gStructSigAtomic;
            VAR1->val = 1;
            signal(SIGINT, FUN1);
            signal(SIGINT, SIG_DFL);
            if (VAR1 != NULL)
            {
                free(VAR1);
                VAR1 = NULL;
            }
            signal(SIGINT, FUN1);
        }
    }
}
