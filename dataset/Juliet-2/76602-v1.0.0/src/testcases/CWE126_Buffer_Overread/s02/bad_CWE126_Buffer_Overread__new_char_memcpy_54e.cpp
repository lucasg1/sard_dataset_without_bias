namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN2(char * data);
void FUN3()
{
    char * data;
    data = NULL;
    data = new char[50];
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN1(char * data);
void FUN5(char * data)
{
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN5(char * data);
void FUN2(char * data)
{
    FUN5(data);
}
} 
namespace NAMESPACE0
{
void FUN0(char * data)
{
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
