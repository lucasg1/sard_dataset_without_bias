static int VAR0 = 0;
void FUN0(long * data)
{
    if(VAR0)
    {
<START>
        free(data);
<END>
    }
}
void FUN1()
{
    long * data;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    if (data == NULL) {exit(-1);}
    free(data);
    VAR0 = 1; 
    FUN0(data);
}
