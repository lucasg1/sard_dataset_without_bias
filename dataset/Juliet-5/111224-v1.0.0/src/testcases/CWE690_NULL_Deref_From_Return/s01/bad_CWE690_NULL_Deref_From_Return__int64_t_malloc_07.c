static int staticFive = 5;
void FUN0()
{
    int64_t * data;
    data = NULL; 
    data = (int64_t *)malloc(1*sizeof(int64_t));
    if(staticFive==5)
    {
<START>
        data[0] = 5LL;
<END>
        printLongLongLine(data[0]);
        free(data);
    }
}
