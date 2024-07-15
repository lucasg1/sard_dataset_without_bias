void FUN0()
{
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
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
void FUN1()
{
    if(GLOBAL_CONST_TRUE)
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
