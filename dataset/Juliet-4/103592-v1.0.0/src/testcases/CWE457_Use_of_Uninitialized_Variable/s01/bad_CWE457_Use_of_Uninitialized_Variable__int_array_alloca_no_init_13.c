void FUN0()
{
    int * data;
    data = (int *)ALLOCA(10*sizeof(int));
    if(GLOBAL_CONST_FIVE==5)
    {
        ; 
    }
    if(GLOBAL_CONST_FIVE==5)
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
