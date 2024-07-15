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
        data[0] = '\0'; 
    }
    return data;
}
char * FUN1(char * data)
{
    if(VAR2)
    {
        data = new char[100];
        data[0] = '\0'; 
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
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        memcpy(data, source, 100*sizeof(char));
        data[100-1] = '\0'; 
        printLine(data);
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
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        memcpy(data, source, 100*sizeof(char));
        data[100-1] = '\0'; 
        printLine(data);
        delete [] data;
    }
    ;
}
} 
