static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
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
}
void FUN1()
{
    if(STATIC_CONST_FIVE==5)
    {
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
}
