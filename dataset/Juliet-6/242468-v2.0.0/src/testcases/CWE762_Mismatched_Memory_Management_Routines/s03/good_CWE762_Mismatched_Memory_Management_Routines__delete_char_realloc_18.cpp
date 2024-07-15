namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    goto source;
source:
    data = NULL;
    data = (char *)realloc(data, 100*sizeof(char));
    if (data == NULL) {exit(-1);}
    goto sink;
sink:
    free(data);
}
void FUN1()
{
    char * data;
    data = NULL;
    goto source;
source:
    data = new char;
    goto sink;
sink:
    delete data;
}
} 
