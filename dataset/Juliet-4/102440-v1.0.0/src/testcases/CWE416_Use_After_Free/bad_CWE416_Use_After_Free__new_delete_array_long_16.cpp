namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    while(1)
    {
        data = new long[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
            }
        }
        delete [] data;
        break;
    }
    while(1)
    {
<START>
        printLongLine(data[0]);
<END>
        break;
    }
}
} 
