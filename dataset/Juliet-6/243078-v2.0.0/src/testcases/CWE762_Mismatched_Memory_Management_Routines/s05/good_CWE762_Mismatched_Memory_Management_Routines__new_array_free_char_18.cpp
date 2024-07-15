namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    goto source;
source:
    data = new char[100];
    goto sink;
sink:
    delete [] data;
}
void FUN1()
{
    char * data;
    data = NULL;
    goto source;
source:
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    goto sink;
sink:
    free(data);
}
} 
