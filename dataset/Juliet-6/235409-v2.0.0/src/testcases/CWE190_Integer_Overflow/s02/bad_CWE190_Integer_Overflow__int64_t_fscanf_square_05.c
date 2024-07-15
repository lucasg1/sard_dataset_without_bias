static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    int64_t data;
    data = 0LL;
    if(staticTrue)
    {
        fscanf (stdin, "%" SCNd64, &data);
    }
    if(staticTrue)
    {
        {
<START>
            int64_t result = data * data;
<END>
            printLongLongLine(result);
        }
    }
}
