namespace NAMESPACE0
{
void FUN0()
{
    int data;
    data = -1;
    switch(6)
    {
    case 6:
        fscanf(stdin, "%d", &data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
    {
        int i;
        int * buffer = new int[10];
        for (i = 0; i < 10; i++)
        {
            buffer[i] = 0;
        }
        if (data >= 0)
        {
<START>
            buffer[data] = 1;
<END>
            for(i = 0; i < 10; i++)
            {
                printIntLine(buffer[i]);
            }
        }
        else
        {
            printLine("ERROR: Array index is negative.");
        }
        delete[] buffer;
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 
