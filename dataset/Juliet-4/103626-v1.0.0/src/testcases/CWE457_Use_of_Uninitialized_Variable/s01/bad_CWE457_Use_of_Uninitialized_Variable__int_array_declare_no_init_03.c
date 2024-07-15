void FUN0()
{
    int * data;
    int dataUninitArray[10];
    data = dataUninitArray;
    if(5==5)
    {
        ; 
    }
    if(5==5)
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
