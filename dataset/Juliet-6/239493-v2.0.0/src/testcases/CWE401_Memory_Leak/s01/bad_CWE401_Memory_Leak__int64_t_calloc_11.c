void FUN0()
{
    int64_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (int64_t *)calloc(100, sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        data[0] = 5LL;
        printLongLongLine(data[0]);
    }
    if(globalReturnsTrue())
    {
<START>
<END>
        ; 
    }
}
