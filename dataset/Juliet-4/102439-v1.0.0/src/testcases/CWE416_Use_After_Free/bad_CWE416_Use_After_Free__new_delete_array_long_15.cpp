namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    switch(6)
    {
    case 6:
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
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
<START>
        printLongLine(data[0]);
<END>
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 
