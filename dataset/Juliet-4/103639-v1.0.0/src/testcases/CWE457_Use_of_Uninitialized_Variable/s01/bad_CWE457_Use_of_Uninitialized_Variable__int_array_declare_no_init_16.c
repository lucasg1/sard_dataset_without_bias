void FUN0()
{
    int * data;
    int dataUninitArray[10];
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
                printIntLine(data[i]);
<END>
            }
        }
        break;
    }
}
