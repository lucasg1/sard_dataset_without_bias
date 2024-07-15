namespace NAMESPACE0
{
static int VAR1 = 0;
static int VAR2 = 0;
static int VAR3 = 0;
void FUN0(char * data)
{
    if(VAR1)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        free(data);
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    data = NULL;
    data = (char *)realloc(data, 100*sizeof(char));
    if (data == NULL) {exit(-1);}
    VAR1 = 0; 
    FUN0(data);
}
void FUN2(char * data)
{
    if(VAR2)
    {
        free(data);
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    data = NULL;
    data = (char *)realloc(data, 100*sizeof(char));
    if (data == NULL) {exit(-1);}
    VAR2 = 1; 
    FUN2(data);
}
void FUN4(char * data)
{
    if(VAR3)
    {
        delete [] data;
    }
}
void FUN5()
{
    char * data;
    data = NULL;
    data = new char[100];
    VAR3 = 1; 
    FUN4(data);
}
} 
