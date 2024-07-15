static int staticFive = 5;
void FUN0()
{
    int64_t * data;
    data = NULL;
    if(staticFive==5)
    {
        data = (int64_t *)realloc(data, 100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        data[0] = 5LL;
        printLongLongLine(data[0]);
    }
    if(staticFive==5)
    {
<START>
<END>
        ; 
    }
}
