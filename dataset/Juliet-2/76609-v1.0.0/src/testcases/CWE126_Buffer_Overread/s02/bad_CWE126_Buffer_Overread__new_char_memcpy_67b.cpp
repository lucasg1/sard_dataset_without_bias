namespace NAMESPACE0
{
typedef struct _structType
{
    char * structFirst;
} structType;
void FUN0(structType myStruct);
void FUN1()
{
    char * data;
    structType myStruct;
    data = NULL;
    data = new char[50];
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
    myStruct.structFirst = data;
    FUN0(myStruct);
}
} 
namespace NAMESPACE0
{
typedef struct _structType
{
    char * structFirst;
} structType;
void FUN0(structType myStruct)
{
    char * data = myStruct.structFirst;
    {
        char dest[100];
        memset(dest, 'C', 100-1);
        dest[100-1] = '\0'; 
<START>
        memcpy(dest, data, strlen(dest)*sizeof(char));
<END>
        dest[100-1] = '\0';
        printLine(dest);
        delete [] data;
    }
}
} 