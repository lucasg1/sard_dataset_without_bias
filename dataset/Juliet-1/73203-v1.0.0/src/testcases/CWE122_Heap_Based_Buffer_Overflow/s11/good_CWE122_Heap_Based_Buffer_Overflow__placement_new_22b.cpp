namespace NAMESPACE0
{
int VAR1 = 0;
int VAR2 = 0;
int VAR3 = 0;
void FUN0(char * data);
void FUN1()
{
    char * data;
    char * VAR4 = (char *)malloc(sizeof(OneIntClass));
    char * VAR5 = (char *)malloc(sizeof(TwoIntsClass));
    data = VAR4;
    VAR1 = 0; 
    FUN0(data);
}
void FUN2(char * data);
void FUN3()
{
    char * data;
    char * VAR4 = (char *)malloc(sizeof(OneIntClass));
    char * VAR5 = (char *)malloc(sizeof(TwoIntsClass));
    data = VAR4;
    VAR2 = 1; 
    FUN2(data);
}
void FUN4(char * data);
void FUN5()
{
    char * data;
    char * VAR4 = (char *)malloc(sizeof(OneIntClass));
    char * VAR5 = (char *)malloc(sizeof(TwoIntsClass));
    data = VAR5;
    VAR3 = 1; 
    FUN4(data);
}
} 
namespace NAMESPACE0
{
extern int VAR1;
extern int VAR2;
extern int VAR3;
void FUN0(char * data)
{
    if(VAR1)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            OneIntClass * classOne = new(data) OneIntClass;
            classOne->intOne = 5;
            printIntLine(classOne->intOne);
            free(data);
        }
    }
}
void FUN2(char * data)
{
    if(VAR2)
    {
        {
            OneIntClass * classOne = new(data) OneIntClass;
            classOne->intOne = 5;
            printIntLine(classOne->intOne);
            free(data);
        }
    }
}
void FUN4(char * data)
{
    if(VAR3)
    {
        {
            TwoIntsClass * classTwo = new(data) TwoIntsClass;
            classTwo->intOne = 5;
            classTwo->intTwo = 10; 
            printIntLine(classTwo->intOne);
            free(data);
        }
    }
}
} 
