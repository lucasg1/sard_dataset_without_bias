void FUN0()
{
    int * data;
    data = (int *)malloc(10*sizeof(int));
    if (data == NULL) {exit(-1);}
    if(GLOBAL_CONST_TRUE)
    {
        {
            int i;
            for(i=0; i<(10/2); i++)
            {
                data[i] = i;
            }
        }
    }
    if(GLOBAL_CONST_TRUE)
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
