static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    char * data;
    data = NULL;
    if(staticTrue)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        free(data);
    }
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ; 
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    if(staticTrue)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        free(data);
    }
    if(staticTrue)
    {
        ; 
    }
}
void FUN2()
{
    char * data;
    data = NULL;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
    }
    if(staticTrue)
    {
        free(data);
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    if(staticTrue)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
    }
    if(staticTrue)
    {
        free(data);
    }
}
