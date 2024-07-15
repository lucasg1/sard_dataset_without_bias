void FUN0()
{
    goto sink;
sink:
    {
        double * data;
        double * * pointer = (double * *)ALLOCA(sizeof(double *));
        data = (double *)malloc(sizeof(double));
        if (data == NULL) {exit(-1);}
        *data = 5.0;
        *pointer = data; 
        {
            double * data = *pointer;
            printDoubleLine(*data);
        }
    }
}
