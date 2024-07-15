static char * FUN0(char * data)
{
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    return data;
}
void FUN1()
{
    char * data;
    data = NULL;
    data = FUN0(data);
    free(data);
}
static char * FUN2(char * data)
{
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    free(data);
    return data;
}
void FUN3()
{
    char * data;
    data = NULL;
    data = FUN2(data);
    ; 
}
