namespace NAMESPACE0
{
void FUN0(char * &data)
{
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
}
void FUN1()
{
    char * data;
    data = NULL;
    FUN0(data);
    free(data);
}
void FUN2(char * &data)
{
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    free(data);
}
void FUN3()
{
    char * data;
    data = NULL;
    FUN2(data);
    ; 
}
} 
