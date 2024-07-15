void FUN0()
{
    int64_t * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = (int64_t *)realloc(data, 100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        data[0] = 5LL;
        printLongLongLine(data[0]);
    }
    else
    {
        data = (int64_t *)ALLOCA(100*sizeof(int64_t));
        data[0] = 5LL;
        printLongLongLine(data[0]);
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
