void FUN0()
{
    int i,j;
    double * data;
    double dataUninitArray[10];
    data = dataUninitArray;
    for(i = 0; i < 1; i++)
    {
        {
            int i;
            for(i=0; i<(10/2); i++)
            {
                data[i] = (double)i;
            }
        }
    }
    for(j = 0; j < 1; j++)
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
<START>
                printDoubleLine(data[i]);
<END>
            }
        }
    }
}
