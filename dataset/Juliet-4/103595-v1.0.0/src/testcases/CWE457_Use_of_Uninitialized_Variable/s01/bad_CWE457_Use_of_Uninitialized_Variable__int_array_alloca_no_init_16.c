void FUN0()
{
    int * data;
    data = (int *)ALLOCA(10*sizeof(int));
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
