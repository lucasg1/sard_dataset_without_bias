namespace NAMESPACE0
{
void FUN0(char * &data)
{
    data = (char *)ALLOCA(100*sizeof(char));
    strcpy(data, "A String");
    printLine(data);
}
void FUN1(char * &data)
{
    data = (char *)realloc(data, 100*sizeof(char));
    if (data == NULL) {exit(-1);}
    strcpy(data, "A String");
    printLine(data);
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
    ; 
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
