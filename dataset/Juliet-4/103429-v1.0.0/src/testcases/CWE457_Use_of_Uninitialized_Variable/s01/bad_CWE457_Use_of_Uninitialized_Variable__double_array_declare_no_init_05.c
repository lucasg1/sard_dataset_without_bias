static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    double * data;
    double dataUninitArray[10];
    data = dataUninitArray;
    if(staticTrue)
    {
        ; 
    }
    if(staticTrue)
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
