void FUN0()
{
    double * data;
    double dataUninitArray[10];
    data = dataUninitArray;
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            int i;
            for(i=0; i<(10/2); i++)
            {
                data[i] = (double)i;
            }
        }
    }
    if(GLOBAL_CONST_FIVE==5)
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
