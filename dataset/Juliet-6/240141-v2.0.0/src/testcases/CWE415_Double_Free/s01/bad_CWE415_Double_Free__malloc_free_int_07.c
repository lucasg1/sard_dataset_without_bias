static int staticFive = 5;
void FUN0()
{
    int * data;
    data = NULL;
    if(staticFive==5)
    {
        data = (int *)malloc(100*sizeof(int));
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
