namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    data = new char[100];
    {
        char * dataCopy = data;
        char * data = dataCopy;
        delete [] data;
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    {
        char * dataCopy = data;
        char * data = dataCopy;
        free(data);
    }
}
} 
