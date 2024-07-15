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
static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN2()
{
    if(STATIC_CONST_TRUE)
    {
        {
            structSigAtomic *gStructSigAtomic = NULL;
            signal(SIGINT, SIG_DFL);
            if (VAR0 != NULL)
            {
                free(VAR0);
                VAR0 = NULL;
            }
            gStructSigAtomic = (structSigAtomic*)malloc(sizeof(structSigAtomic));
            if (gStructSigAtomic == NULL) {exit(-1);}
            VAR0 = gStructSigAtomic;
            VAR0->val = 1;
            signal(SIGINT, FUN0);
<START>
            if (VAR0 != NULL)
<END>
            {
                free(VAR0);
                VAR0 = NULL;
            }
        }
    }
}
