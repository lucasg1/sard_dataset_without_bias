void FUN0()
{
    int * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = (int *)calloc(100, sizeof(int));
        if (data == NULL) {exit(-1);}
        data[0] = 5;
        printIntLine(data[0]);
    }
    else
    {
        data = (int *)calloc(100, sizeof(int));
        if (data == NULL) {exit(-1);}
        data[0] = 5;
        printIntLine(data[0]);
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
void FUN1()
{
    int * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = (int *)ALLOCA(100*sizeof(int));
        data[0] = 5;
        printIntLine(data[0]);
    }
    else
    {
        data = (int *)ALLOCA(100*sizeof(int));
        data[0] = 5;
        printIntLine(data[0]);
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
