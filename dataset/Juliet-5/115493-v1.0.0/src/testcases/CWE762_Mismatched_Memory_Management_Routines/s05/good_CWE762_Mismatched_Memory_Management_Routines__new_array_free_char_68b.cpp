namespace NAMESPACE0
{
char * VAR1;
char * VAR2;
char * VAR3;
void FUN0();
void FUN1();
void FUN2()
{
    char * data;
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    VAR2 = data;
    FUN0();
}
void FUN3()
{
    char * data;
    data = NULL;
    data = new char[100];
    VAR3 = data;
    FUN1();
}
} 
namespace NAMESPACE0
{
extern char * VAR1;
extern char * VAR2;
extern char * VAR3;
void FUN0()
{
    char * data = VAR2;
    free(data);
}
void FUN1()
{
    char * data = VAR3;
    delete [] data;
}
} 
