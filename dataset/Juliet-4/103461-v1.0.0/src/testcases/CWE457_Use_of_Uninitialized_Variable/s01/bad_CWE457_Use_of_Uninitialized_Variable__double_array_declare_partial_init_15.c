void FUN0()
{
    double * data;
    double dataUninitArray[10];
    data = dataUninitArray;
    switch(6)
    {
    case 6:
    {
        int i;
        for(i=0; i<(10/2); i++)
        {
            data[i] = (double)i;
        }
    }
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
        for(i=0; i<10; i++)
        {
<START>
            printDoubleLine(data[i]);
<END>
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
