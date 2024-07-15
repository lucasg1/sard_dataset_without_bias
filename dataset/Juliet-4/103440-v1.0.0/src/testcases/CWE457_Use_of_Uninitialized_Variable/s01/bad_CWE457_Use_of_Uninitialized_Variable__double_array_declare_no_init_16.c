void FUN0()
{
    double * data;
    double dataUninitArray[10];
    data = dataUninitArray;
    while(1)
    {
        ; 
        break;
    }
    while(1)
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
        break;
    }
}
