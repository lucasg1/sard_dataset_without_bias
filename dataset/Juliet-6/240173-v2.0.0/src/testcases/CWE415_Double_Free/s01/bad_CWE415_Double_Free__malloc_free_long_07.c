static int staticFive = 5;
void FUN0()
{
    long * data;
    data = NULL;
    if(staticFive==5)
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
<START>
        free(data);
<END>
    }
    if(staticFive==5)
    {
        free(data);
    }
}
