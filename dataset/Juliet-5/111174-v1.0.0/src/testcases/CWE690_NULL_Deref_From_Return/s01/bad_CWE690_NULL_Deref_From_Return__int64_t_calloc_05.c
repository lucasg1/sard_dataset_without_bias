static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    int64_t * data;
    data = NULL; 
    data = (int64_t *)calloc(1, sizeof(int64_t));
    if(staticTrue)
    {
<START>
        data[0] = 5LL;
<END>
        printLongLongLine(data[0]);
        free(data);
    }
}
