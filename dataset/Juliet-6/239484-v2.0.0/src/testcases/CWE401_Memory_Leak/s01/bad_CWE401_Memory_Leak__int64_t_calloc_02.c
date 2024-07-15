void FUN0()
{
    int64_t * data;
    data = NULL;
    if(1)
    {
        data = (int64_t *)calloc(100, sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        data[0] = 5LL;
        printLongLongLine(data[0]);
    }
    if(1)
    {
<START>
<END>
        ; 
    }
}
