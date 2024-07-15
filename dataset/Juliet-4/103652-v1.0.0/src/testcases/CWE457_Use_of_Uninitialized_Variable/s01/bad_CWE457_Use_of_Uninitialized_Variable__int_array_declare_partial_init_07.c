static int staticFive = 5;
void FUN0()
{
    int * data;
    int dataUninitArray[10];
    data = dataUninitArray;
    if(staticFive==5)
    {
        {
            int i;
            for(i=0; i<(10/2); i++)
            {
                data[i] = i;
            }
        }
    }
    if(staticFive==5)
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
<START>
                printIntLine(data[i]);
<END>
            }
        }
    }
}
