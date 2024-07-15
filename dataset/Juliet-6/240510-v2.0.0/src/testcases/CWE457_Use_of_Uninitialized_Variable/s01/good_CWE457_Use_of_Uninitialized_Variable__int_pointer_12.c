void FUN0()
{
    int * data;
    if(globalReturnsTrueOrFalse())
    {
        ; 
    }
    else
    {
        ; 
    }
    if(globalReturnsTrueOrFalse())
    {
        data = (int *)malloc(sizeof(int));
        if (data == NULL) {exit(-1);}
        *data = 5;
        printIntLine(*data);
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
    if(globalReturnsTrueOrFalse())
    {
        data = (int *)malloc(sizeof(int));
        if (data == NULL) {exit(-1);}
        *data = 5;
    }
    else
    {
        data = (int *)malloc(sizeof(int));
        if (data == NULL) {exit(-1);}
        *data = 5;
    }
    if(globalReturnsTrueOrFalse())
    {
        printIntLine(*data);
    }
    else
    {
        printIntLine(*data);
    }
}
