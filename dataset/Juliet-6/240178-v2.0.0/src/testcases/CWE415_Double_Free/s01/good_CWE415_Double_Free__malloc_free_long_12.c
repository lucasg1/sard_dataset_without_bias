void FUN0()
{
    long * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
        free(data);
    }
    else
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
        free(data);
    }
    if(globalReturnsTrueOrFalse())
    {
        ; 
    }
    else
    {
        ; 
    }
}
void FUN1()
{
    long * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
    }
    else
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
    }
    if(globalReturnsTrueOrFalse())
    {
        free(data);
    }
    else
    {
        free(data);
    }
}
