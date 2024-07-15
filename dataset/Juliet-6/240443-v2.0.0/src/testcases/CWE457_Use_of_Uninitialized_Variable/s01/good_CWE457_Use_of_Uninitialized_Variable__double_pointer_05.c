static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    double * data;
    if(staticTrue)
    {
        ; 
    }
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (double *)malloc(sizeof(double));
        if (data == NULL) {exit(-1);}
        *data = 5.0;
        printDoubleLine(*data);
    }
}
void FUN1()
{
    double * data;
    if(staticTrue)
    {
        ; 
    }
    if(staticTrue)
    {
        data = (double *)malloc(sizeof(double));
        if (data == NULL) {exit(-1);}
        *data = 5.0;
        printDoubleLine(*data);
    }
}
void FUN2()
{
    double * data;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (double *)malloc(sizeof(double));
        if (data == NULL) {exit(-1);}
        *data = 5.0;
    }
    if(staticTrue)
    {
        printDoubleLine(*data);
    }
}
void FUN3()
{
    double * data;
    if(staticTrue)
    {
        data = (double *)malloc(sizeof(double));
        if (data == NULL) {exit(-1);}
        *data = 5.0;
    }
    if(staticTrue)
    {
        printDoubleLine(*data);
    }
}
