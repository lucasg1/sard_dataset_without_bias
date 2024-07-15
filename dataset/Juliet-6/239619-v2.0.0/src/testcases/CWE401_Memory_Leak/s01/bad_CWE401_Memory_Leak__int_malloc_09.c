void FUN0()
{
    int * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(GLOBAL_CONST_TRUE)
    {
<START>
<END>
        ; 
    }
}
