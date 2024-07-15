static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    long * data;
    data = NULL; 
    data = (long *)calloc(1, sizeof(long));
    if(staticTrue)
    {
<START>
        data[0] = 5L;
<END>
        printLongLine(data[0]);
        free(data);
    }
}
