namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    if(5==5)
    {
        data = new int64_t[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
        delete [] data;
    }
    if(5==5)
    {
<START>
        printLongLongLine(data[0]);
<END>
    }
}
} 
