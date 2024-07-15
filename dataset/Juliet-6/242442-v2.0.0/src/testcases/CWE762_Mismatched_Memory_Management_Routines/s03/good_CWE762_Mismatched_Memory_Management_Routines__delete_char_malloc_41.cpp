namespace NAMESPACE0
{
void FUN0(char * data)
{
    delete data;
}
void FUN1()
{
    char * data;
    data = NULL;
    data = new char;
    FUN0(data);
}
void FUN2(char * data)
{
    free(data);
}
void FUN3()
{
    char * data;
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    FUN2(data);
}
} 
