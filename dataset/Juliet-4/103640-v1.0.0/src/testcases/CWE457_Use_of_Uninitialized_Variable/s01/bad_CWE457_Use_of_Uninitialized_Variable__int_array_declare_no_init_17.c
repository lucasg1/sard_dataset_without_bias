void FUN0()
{
    int i,j;
    int * data;
    int dataUninitArray[10];
    data = dataUninitArray;
    for(i = 0; i < 1; i++)
    {
        ; 
    }
    for(j = 0; j < 1; j++)
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
