void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            double * data;
            double * * pointer = (double * *)malloc(sizeof(double *));
            if (pointer == NULL) {exit(-1);}
            data = (double *)malloc(sizeof(double));
            if (data == NULL) {exit(-1);}
            *data = 5.0;
            *pointer = data; 
            {
                double * data = *pointer;
                printDoubleLine(*data);
            }
            free(pointer);
        }
    }
    else
    {
        {
            double * data;
            double * * pointer = (double * *)malloc(sizeof(double *));
            if (pointer == NULL) {exit(-1);}
            data = (double *)malloc(sizeof(double));
            if (data == NULL) {exit(-1);}
            *data = 5.0;
            *pointer = data; 
            {
                double * data = *pointer;
                printDoubleLine(*data);
            }
            free(pointer);
        }
    }
}
