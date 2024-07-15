namespace NAMESPACE0
{
extern int VAR1;
extern int VAR2;
char * FUN0(char * data)
{
    if(VAR1)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new char[100];
        memset(data, 'A', 100-1); 
        data[100-1] = '\0'; 
    }
    return data;
}
char * FUN1(char * data)
{
    if(VAR2)
    {
        data = new char[100];
        memset(data, 'A', 100-1); 
        data[100-1] = '\0'; 
    }
    return data;
}
} 
namespace NAMESPACE0
{
int VAR1 = 0;
int VAR2 = 0;
char * FUN0(char * data);
void FUN3()
{
    char * data;
    data = NULL;
    VAR1 = 0; 
    data = FUN0(data);
    {
        size_t i, destLen;
        char dest[100];
        memset(dest, 'C', 100-1);
        dest[100-1] = '\0'; 
        destLen = strlen(dest);
        for (i = 0; i < destLen; i++)
        {
            dest[i] = data[i];
        }
        dest[100-1] = '\0';
        printLine(dest);
        delete [] data;
    }
    ;
}
char * FUN1(char * data);
void FUN5()
{
    char * data;
    data = NULL;
    VAR2 = 1; 
    data = FUN1(data);
    {
        size_t i, destLen;
        char dest[100];
        memset(dest, 'C', 100-1);
        dest[100-1] = '\0'; 
        destLen = strlen(dest);
        for (i = 0; i < destLen; i++)
        {
            dest[i] = data[i];
        }
        dest[100-1] = '\0';
        printLine(dest);
        delete [] data;
    }
    ;
}
} 
