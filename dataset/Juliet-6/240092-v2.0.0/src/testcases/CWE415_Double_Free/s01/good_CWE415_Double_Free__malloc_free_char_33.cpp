namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    {
        char * data = dataRef;
        free(data);
    }
}
void FUN1()
{
    char * data;
    char * &dataRef = data;
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    free(data);
    {
        char * data = dataRef;
        ; 
    }
}
} 
