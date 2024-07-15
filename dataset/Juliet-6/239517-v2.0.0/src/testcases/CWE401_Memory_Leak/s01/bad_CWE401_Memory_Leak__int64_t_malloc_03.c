void FUN0()
{
    int64_t * data;
    data = NULL;
    if(5==5)
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        data[0] = 5LL;
        printLongLongLine(data[0]);
    }
    if(5==5)
    {
<START>
<END>
        ; 
    }
}
