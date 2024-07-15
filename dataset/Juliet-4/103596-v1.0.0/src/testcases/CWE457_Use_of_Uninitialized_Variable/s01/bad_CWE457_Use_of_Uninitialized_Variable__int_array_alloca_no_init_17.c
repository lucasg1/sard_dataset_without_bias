void FUN0()
{
    int i,j;
    int * data;
    data = (int *)ALLOCA(10*sizeof(int));
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
