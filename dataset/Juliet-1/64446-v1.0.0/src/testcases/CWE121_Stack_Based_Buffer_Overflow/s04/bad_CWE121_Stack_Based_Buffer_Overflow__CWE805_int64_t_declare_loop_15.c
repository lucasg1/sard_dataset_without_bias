void FUN0()
{
    int64_t * data;
    int64_t dataBadBuffer[50];
    int64_t dataGoodBuffer[100];
    switch(6)
    {
    case 6:
        data = dataBadBuffer;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    {
        int64_t source[100] = {0}; 
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
<START>
                data[i] = source[i];
<END>
            }
            printLongLongLine(data[0]);
        }
    }
}
