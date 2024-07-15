void FUN0()
{
    long * data;
    data = NULL; 
    switch(6)
    {
    case 6:
    {
        static long dataBuffer[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5L;
            }
        }
        data = dataBuffer;
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    printLongLine(data[0]);
<START>
    free(data);
<END>
}
