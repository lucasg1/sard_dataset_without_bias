void FUN0()
{
    int * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (int *)calloc(100, sizeof(int));
        if (data == NULL) {exit(-1);}
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(globalReturnsTrue())
    {
<START>
<END>
        ; 
    }
}
