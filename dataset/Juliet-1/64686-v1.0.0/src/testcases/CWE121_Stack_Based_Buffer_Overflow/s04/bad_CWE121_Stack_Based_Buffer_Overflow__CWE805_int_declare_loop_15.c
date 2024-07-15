void FUN0()
{
    int * data;
    int VAR0[50];
    int VAR1[100];
    switch(6)
    {
    case 6:
        data = VAR0;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    {
        int source[100] = {0}; 
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
<START>
                data[i] = source[i];
<END>
            }
            printIntLine(data[0]);
        }
    }
}
