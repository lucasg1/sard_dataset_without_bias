static int staticFive = 5;
void FUN0()
{
    double * data;
    double dataUninitArray[10];
    data = dataUninitArray;
    if(staticFive==5)
    {
        ; 
    }
    if(staticFive==5)
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
