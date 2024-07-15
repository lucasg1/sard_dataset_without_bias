void FUN0()
{
    int * data;
    data = NULL;
    if(globalTrue)
    {
        data = (int *)realloc(data, 100*sizeof(int));
        if (data == NULL) {exit(-1);}
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(globalTrue)
    {
<START>
<END>
        ; 
    }
}
