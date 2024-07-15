void FUN0()
{
    double * data;
    data = (double *)malloc(10*sizeof(double));
    if (data == NULL) {exit(-1);}
    while(1)
    {
        {
            int i;
            for(i=0; i<(10/2); i++)
            {
                data[i] = (double)i;
            }
        }
        break;
    }
    while(1)
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
        break;
    }
}
