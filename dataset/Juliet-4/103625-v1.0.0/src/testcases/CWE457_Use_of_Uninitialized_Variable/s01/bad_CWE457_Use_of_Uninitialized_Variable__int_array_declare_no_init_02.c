void FUN0()
{
    int * data;
    int dataUninitArray[10];
    data = dataUninitArray;
    if(1)
    {
        ; 
    }
    if(1)
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
