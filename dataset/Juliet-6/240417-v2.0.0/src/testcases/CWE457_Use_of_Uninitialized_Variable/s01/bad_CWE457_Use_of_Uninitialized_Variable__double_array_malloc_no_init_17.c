void FUN0()
{
    int i,j;
    double * data;
    data = (double *)malloc(10*sizeof(double));
    if (data == NULL) {exit(-1);}
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
                printDoubleLine(data[i]);
<END>
            }
        }
    }
}
