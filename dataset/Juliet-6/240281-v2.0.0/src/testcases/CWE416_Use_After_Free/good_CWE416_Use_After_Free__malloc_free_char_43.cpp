namespace NAMESPACE0
{
void FUN0(char * &data)
{
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    memset(data, 'A', 100-1);
    data[100-1] = '\0';
}
void FUN1()
{
    char * data;
    data = NULL;
    FUN0(data);
    printLine(data);
}
void FUN2(char * &data)
{
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    memset(data, 'A', 100-1);
    data[100-1] = '\0';
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
