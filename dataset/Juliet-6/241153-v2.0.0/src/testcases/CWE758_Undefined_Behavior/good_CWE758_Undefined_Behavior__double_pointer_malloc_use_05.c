static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticFalse)
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
    if(staticTrue)
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
