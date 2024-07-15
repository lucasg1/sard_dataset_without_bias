void FUN0()
{
    int * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = (int *)realloc(data, 100*sizeof(int));
        if (data == NULL) {exit(-1);}
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
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
    if(GLOBAL_CONST_TRUE)
    {
        data = (int *)realloc(data, 100*sizeof(int));
        if (data == NULL) {exit(-1);}
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(GLOBAL_CONST_TRUE)
    {
        free(data);
    }
}
void FUN2()
{
    int * data;
    data = NULL;
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (int *)ALLOCA(100*sizeof(int));
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(GLOBAL_CONST_TRUE)
    {
        ; 
    }
}
void FUN3()
{
    int * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = (int *)ALLOCA(100*sizeof(int));
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(GLOBAL_CONST_TRUE)
    {
        ; 
    }
}
