void FUN0()
{
    int64_t * data;
    data = NULL; 
    data = (int64_t *)realloc(data, 1*sizeof(int64_t));
    if(1)
    {
<START>
        data[0] = 5LL;
<END>
        printLongLongLine(data[0]);
        free(data);
    }
}
