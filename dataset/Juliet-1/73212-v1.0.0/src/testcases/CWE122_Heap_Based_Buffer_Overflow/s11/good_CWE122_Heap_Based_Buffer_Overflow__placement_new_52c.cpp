namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1()
{
    char * data;
    char * VAR1 = (char *)malloc(sizeof(OneIntClass));
    char * VAR2 = (char *)malloc(sizeof(TwoIntsClass));
    data = VAR2;
    FUN0(data);
}
void FUN2(char * data);
void FUN3()
{
    char * data;
    char * VAR1 = (char *)malloc(sizeof(OneIntClass));
    char * VAR2 = (char *)malloc(sizeof(TwoIntsClass));
    data = VAR1;
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN5(char * data);
void FUN0(char * data)
{
    FUN5(data);
}
void FUN7(char * data);
void FUN2(char * data)
{
    FUN7(data);
}
} 
namespace NAMESPACE0
{
void FUN5(char * data)
{
    {
        TwoIntsClass * classTwo = new(data) TwoIntsClass;
        classTwo->intOne = 5;
        classTwo->intTwo = 10; 
        printIntLine(classTwo->intOne);
        free(data);
    }
}
void FUN7(char * data)
{
    {
        OneIntClass * classOne = new(data) OneIntClass;
        classOne->intOne = 5;
        printIntLine(classOne->intOne);
        free(data);
    }
}
} 
