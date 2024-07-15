void FUN0()
{
    int * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
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
<START>
<END>
        ; 
    }
    else
    {
        free(data);
    }
}
