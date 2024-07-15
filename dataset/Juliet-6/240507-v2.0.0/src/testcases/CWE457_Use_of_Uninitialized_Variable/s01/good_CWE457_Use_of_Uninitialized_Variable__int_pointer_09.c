void FUN0()
{
    int * data;
    if(GLOBAL_CONST_TRUE)
    {
        ; 
    }
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (int *)malloc(sizeof(int));
        if (data == NULL) {exit(-1);}
        *data = 5;
        printIntLine(*data);
    }
}
void FUN1()
{
    int * data;
    if(GLOBAL_CONST_TRUE)
    {
        ; 
    }
    if(GLOBAL_CONST_TRUE)
    {
        data = (int *)malloc(sizeof(int));
        if (data == NULL) {exit(-1);}
        *data = 5;
        printIntLine(*data);
    }
}
void FUN2()
{
    int * data;
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (int *)malloc(sizeof(int));
        if (data == NULL) {exit(-1);}
        *data = 5;
    }
    if(GLOBAL_CONST_TRUE)
    {
        printIntLine(*data);
    }
}
void FUN3()
{
    int * data;
    if(GLOBAL_CONST_TRUE)
    {
        data = (int *)malloc(sizeof(int));
        if (data == NULL) {exit(-1);}
        *data = 5;
    }
    if(GLOBAL_CONST_TRUE)
    {
        printIntLine(*data);
    }
}
