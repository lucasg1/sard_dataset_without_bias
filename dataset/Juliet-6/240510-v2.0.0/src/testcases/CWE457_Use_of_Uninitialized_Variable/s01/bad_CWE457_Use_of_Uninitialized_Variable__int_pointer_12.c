void FUN0()
{
    int * data;
    if(globalReturnsTrueOrFalse())
    {
        ; 
    }
    else
    {
        data = (int *)malloc(sizeof(int));
        if (data == NULL) {exit(-1);}
        *data = 5;
    }
    if(globalReturnsTrueOrFalse())
    {
<START>
        printIntLine(*data);
<END>
    }
    else
    {
        data = (int *)malloc(sizeof(int));
        if (data == NULL) {exit(-1);}
        *data = 5;
        printIntLine(*data);
    }
}
