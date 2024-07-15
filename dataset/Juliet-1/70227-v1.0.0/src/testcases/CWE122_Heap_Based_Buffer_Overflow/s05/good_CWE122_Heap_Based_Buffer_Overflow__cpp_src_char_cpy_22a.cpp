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
        memset(data, 'A', 50-1); 
        data[50-1] = '\0'; 
    }
    return data;
}
char * FUN1(char * data)
{
    if(VAR2)
    {
        memset(data, 'A', 50-1); 
        data[50-1] = '\0'; 
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
    data = new char[100];
    VAR1 = 0; 
    data = FUN0(data);
    {
        char dest[50] = "";
        strcpy(dest, data);
        printLine(data);
        delete [] data;
    }
    ;
}
char * FUN1(char * data);
void FUN5()
{
    char * data;
    data = new char[100];
    VAR2 = 1; 
    data = FUN1(data);
    {
        char dest[50] = "";
        strcpy(dest, data);
        printLine(data);
        delete [] data;
    }
    ;
}
} 
