int VAR0 = 0;
void FUN0(long * data);
void FUN1()
{
    long * data;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    free(data);
    VAR0 = 1; 
    FUN0(data);
}
extern int VAR0;
void FUN0(long * data)
{
    if(VAR0)
    {
<START>
        free(data);
<END>
    }
}
