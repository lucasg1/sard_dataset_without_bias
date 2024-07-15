void FUN0(char * data)
{
    free(data);
}
void FUN1()
{
    char * data;
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    FUN0(data);
}
void FUN2(char * data)
{
    ; 
}
void FUN3()
{
    char * data;
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    free(data);
    FUN2(data);
}
