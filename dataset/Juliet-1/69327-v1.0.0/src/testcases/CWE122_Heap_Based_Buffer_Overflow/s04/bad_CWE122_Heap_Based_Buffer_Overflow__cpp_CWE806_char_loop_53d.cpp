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
void FUN1(char * data);
void FUN3(char * data)
{
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN3(char * data);
void FUN5()
{
    char * data;
    data = new char[100];
    memset(data, 'A', 100-1); 
    data[100-1] = '\0'; 
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN0(char * data)
{
    {
        char dest[50] = "";
        size_t i, dataLen;
        dataLen = strlen(data);
        for (i = 0; i < dataLen; i++)
        {
<START>
            dest[i] = data[i];
<END>
        }
        dest[50-1] = '\0'; 
        printLine(data);
        delete [] data;
    }
}
} 
