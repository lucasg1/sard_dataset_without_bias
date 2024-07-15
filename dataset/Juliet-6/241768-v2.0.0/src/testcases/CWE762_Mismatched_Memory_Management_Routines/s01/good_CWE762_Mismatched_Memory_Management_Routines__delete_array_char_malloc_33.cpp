namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    data = NULL;
    data = new char[100];
    {
        char * data = dataRef;
        delete [] data;
    }
}
void FUN1()
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
} 
