namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL; 
    switch(6)
    {
    case 6:
    {
        static int dataBuffer[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5;
            }
        }
        data = dataBuffer;
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    printIntLine(data[0]);
<START>
    delete [] data;
<END>
}
} 
