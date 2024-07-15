static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    if(STATIC_CONST_FALSE)
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
    if(STATIC_CONST_TRUE)
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
