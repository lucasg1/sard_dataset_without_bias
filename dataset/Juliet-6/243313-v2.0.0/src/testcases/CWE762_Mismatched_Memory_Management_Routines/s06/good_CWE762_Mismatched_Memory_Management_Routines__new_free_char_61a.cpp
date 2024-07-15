namespace NAMESPACE0
{
char * FUN0(char * data)
{
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    return data;
}
char * FUN1(char * data)
{
    data = new char;
    return data;
}
} 
namespace NAMESPACE0
{
char * FUN0(char * data);
void FUN3()
{
    char * data;
    data = NULL;
    data = FUN0(data);
    free(data);
}
char * FUN1(char * data);
void FUN5()
{
    char * data;
    data = NULL;
    data = FUN1(data);
    delete data;
}
} 
