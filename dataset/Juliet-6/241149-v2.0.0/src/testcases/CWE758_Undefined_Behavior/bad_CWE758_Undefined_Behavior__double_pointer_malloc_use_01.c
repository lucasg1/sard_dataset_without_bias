void FUN0()
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
