void FUN0()
{
    int * data;
    if(globalTrue)
    {
        ; 
    }
    if(globalFalse)
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
    if(globalTrue)
    {
        ; 
    }
    if(globalTrue)
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
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (int *)malloc(sizeof(int));
        if (data == NULL) {exit(-1);}
        *data = 5;
    }
    if(globalTrue)
    {
        printIntLine(*data);
    }
}
void FUN3()
{
    int * data;
    if(globalTrue)
    {
        data = (int *)malloc(sizeof(int));
        if (data == NULL) {exit(-1);}
        *data = 5;
    }
    if(globalTrue)
    {
        printIntLine(*data);
    }
}
