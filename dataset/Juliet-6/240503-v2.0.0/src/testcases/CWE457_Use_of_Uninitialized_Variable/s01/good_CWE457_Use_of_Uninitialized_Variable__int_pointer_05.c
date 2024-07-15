static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    int * data;
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
        data = (int *)malloc(sizeof(int));
        if (data == NULL) {exit(-1);}
        *data = 5;
        printIntLine(*data);
    }
}
void FUN1()
{
    int * data;
    if(staticTrue)
    {
        ; 
    }
    if(staticTrue)
    {
        data = (int *)malloc(sizeof(int));
        if (data == NULL) {exit(-1);}
        *data = 5;
        printIntLine(*data);
    }
}
void FUN2()
{
    int * data;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (int *)malloc(sizeof(int));
        if (data == NULL) {exit(-1);}
        *data = 5;
    }
    if(staticTrue)
    {
        printIntLine(*data);
    }
}
void FUN3()
{
    int * data;
    if(staticTrue)
    {
        data = (int *)malloc(sizeof(int));
        if (data == NULL) {exit(-1);}
        *data = 5;
    }
    if(staticTrue)
    {
        printIntLine(*data);
    }
}
