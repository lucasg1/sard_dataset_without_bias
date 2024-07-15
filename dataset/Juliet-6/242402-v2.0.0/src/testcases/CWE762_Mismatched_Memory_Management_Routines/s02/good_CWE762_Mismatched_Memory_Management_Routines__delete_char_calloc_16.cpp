namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    while(1)
    {
        data = (char *)calloc(100, sizeof(char));
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
        data = new char;
        break;
    }
    while(1)
    {
        delete data;
        break;
    }
}
} 
