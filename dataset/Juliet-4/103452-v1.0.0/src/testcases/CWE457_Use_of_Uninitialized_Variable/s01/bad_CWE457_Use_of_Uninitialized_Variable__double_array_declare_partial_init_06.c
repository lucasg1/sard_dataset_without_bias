static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    double * data;
    double dataUninitArray[10];
    data = dataUninitArray;
    if(STATIC_CONST_FIVE==5)
    {
        {
            int i;
            for(i=0; i<(10/2); i++)
            {
                data[i] = (double)i;
            }
        }
    }
    if(STATIC_CONST_FIVE==5)
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
