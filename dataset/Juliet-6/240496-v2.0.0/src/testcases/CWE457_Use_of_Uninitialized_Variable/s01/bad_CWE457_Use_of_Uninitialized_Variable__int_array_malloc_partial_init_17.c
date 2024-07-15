void FUN0()
{
    int i,j;
    int * data;
    data = (int *)malloc(10*sizeof(int));
    if (data == NULL) {exit(-1);}
    for(i = 0; i < 1; i++)
    {
        {
            int i;
            for(i=0; i<(10/2); i++)
            {
                data[i] = i;
            }
        }
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
