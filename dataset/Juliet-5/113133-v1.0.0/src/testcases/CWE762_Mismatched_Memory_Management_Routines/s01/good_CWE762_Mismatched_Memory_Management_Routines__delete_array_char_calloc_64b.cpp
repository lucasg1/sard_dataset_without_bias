namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr);
void FUN1()
{
    char * data;
    data = NULL;
    data = new char[100];
    FUN0(&data);
}
void FUN2(void * dataVoidPtr);
void FUN3()
{
    char * data;
    data = NULL;
    data = (char *)calloc(100, sizeof(char));
    FUN2(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr)
{
    char * * dataPtr = (char * *)dataVoidPtr;
    char * data = (*dataPtr);
    delete [] data;
}
void FUN2(void * dataVoidPtr)
{
    char * * dataPtr = (char * *)dataVoidPtr;
    char * data = (*dataPtr);
    free(data);
}
} 
