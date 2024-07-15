static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    int * data;
    int dataUninitArray[10];
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
                printIntLine(data[i]);
<END>
            }
        }
    }
}
