static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    int * data;
    int dataUninitArray[10];
    data = dataUninitArray;
    if(staticTrue)
    {
        {
            int i;
            for(i=0; i<(10/2); i++)
            {
                data[i] = i;
            }
        }
    }
    if(staticTrue)
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
