void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
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
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
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
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
