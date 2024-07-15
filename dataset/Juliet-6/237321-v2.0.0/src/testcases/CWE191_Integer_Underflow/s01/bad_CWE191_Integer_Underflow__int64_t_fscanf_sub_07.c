static int staticFive = 5;
void FUN0()
{
    int64_t data;
    data = 0LL;
    if(staticFive==5)
    {
        fscanf (stdin, "%" SCNd64, &data);
    }
    if(staticFive==5)
    {
        {
<START>
            int64_t result = data - 1;
<END>
            printLongLongLine(result);
        }
    }
}
