void FUN0()
{
    int64_t * data;
    data = NULL; 
    switch(6)
    {
    case 6:
    {
        static int64_t dataBuffer[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5LL;
            }
        }
        data = dataBuffer;
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    printLongLongLine(data[0]);
<START>
    free(data);
<END>
}
