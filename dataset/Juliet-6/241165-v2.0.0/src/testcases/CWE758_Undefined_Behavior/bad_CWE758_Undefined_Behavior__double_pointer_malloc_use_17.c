void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
            double * * pointer = (double * *)malloc(sizeof(double *));
            if (pointer == NULL) {exit(-1);}
<START>
            double * data = *pointer; 
<END>
            free(pointer);
            printDoubleLine(*data);
        }
    }
}
