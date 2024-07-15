namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    while(1)
    {
        data = NULL;
        data = (char *)realloc(data, 100*sizeof(char));
        if (data == NULL) {exit(-1);}
        break;
    }
    while(1)
    {
        free(data);
        break;
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    while(1)
    {
        data = new char[100];
        break;
    }
    while(1)
    {
        delete [] data;
        break;
    }
}
} 
