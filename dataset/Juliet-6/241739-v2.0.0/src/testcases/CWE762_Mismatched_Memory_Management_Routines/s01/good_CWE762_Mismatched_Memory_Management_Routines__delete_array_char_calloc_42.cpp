namespace NAMESPACE0
{
static char * FUN0(char * data)
{
    data = new char[100];
    return data;
}
void FUN1()
{
    char * data;
    data = NULL;
    data = FUN0(data);
    delete [] data;
}
static char * FUN2(char * data)
{
    data = (char *)calloc(100, sizeof(char));
    if (data == NULL) {exit(-1);}
    return data;
}
void FUN3()
{
    char * data;
    data = NULL;
    data = FUN2(data);
    free(data);
}
} 
