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
    char * VAR4 = (char *)malloc(sizeof(OneIntClass));
    char * VAR5 = (char *)malloc(sizeof(TwoIntsClass));
    data = VAR5;
    VAR2 = data;
    FUN0();
}
void FUN3()
{
    char * data;
    char * VAR4 = (char *)malloc(sizeof(OneIntClass));
    char * VAR5 = (char *)malloc(sizeof(TwoIntsClass));
    data = VAR4;
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
    {
        TwoIntsClass * classTwo = new(data) TwoIntsClass;
        classTwo->intOne = 5;
        classTwo->intTwo = 10; 
        printIntLine(classTwo->intOne);
        free(data);
    }
}
void FUN1()
{
    char * data = VAR3;
    {
        OneIntClass * classOne = new(data) OneIntClass;
        classOne->intOne = 5;
        printIntLine(classOne->intOne);
        free(data);
    }
}
} 
