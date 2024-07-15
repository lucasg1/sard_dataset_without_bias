namespace NAMESPACE0
{
void FUN0(char * &data)
{
    data = new char;
}
void FUN1(char * &data)
{
    data = NULL;
    data = (char *)realloc(data, 100*sizeof(char));
    if (data == NULL) {exit(-1);}
}
} 
namespace NAMESPACE0
{
void FUN0(char * &data);
void FUN3()
{
    char * data;
    data = NULL;
    FUN0(data);
    delete data;
}
void FUN1(char * &data);
void FUN5()
{
    char * data;
    data = NULL;
    FUN1(data);
    free(data);
}
} 
